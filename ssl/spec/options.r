\literate[options]
\begin{code}
module options
imports io parse-options config time verbose
signature
  constructors
    Silent      : Option
    Verbose     : Int -> Option
    Version     : Option
    Input       : String -> Option
    Output      : String -> Option
    Binary      : Option
    Statistics  : Option
    Help        : Option
    Runtime     : Real   -> Option
    DeclVersion : String -> Option
\end{code}

	The operator \verb|iowrap| defines a default wrapper around a
	strategy that handles processing of options and reading and
	writing of terms from and to files.

\begin{code}
strategies

  iowrap(strat) = 
    iowrap((id, strat), fail)

  iowrapO(strat, extra-options) =
    obsolete(!"iowrapO/2: use iowrap/2");
    iowrap(strat, extra-options)

  iowrap(strat, extra-options) = 
    iowrap(strat, extra-options, default-usage)

  iowrap(strat, extra-options, usage) = 
    iowrap(strat, extra-options, usage, 
	   if-verbose2(where(<printnl>(stderr, [<get-config> "program"]))))

  iowrapO(strat, extra-options, usage) =
    obsolete(!"iowrapO/3: use iowrap/3");
    iowrap(strat, extra-options, usage)

  iowrap(strat, extra-options, usage, announce) =
    parse-options(extra-options <+ io-options); 
    store-options;
    announce;
    (
        need-help(usage)
     <+ 
	input-file;
	apply-strategy(strat);
	output-file;
	report-success
     <+ 
	report-failure
    )

  iowrapNoOutput(strat, extra-options) = 
  iowrapNoOutput(strat, extra-options, default-usage)

  iowrapNoOutput(strat, extra-options, usage) =
   	parse-options(extra-options <+ io-options);
   	store-options;
	(
	    need-help(usage)
   	 <+ 
	    input-file;
	    apply-strategy(strat);
	    report-success
   	 <+ 
   	    report-failure
	)

strategies

  // storing and retrieving options in a table
  // obsolete; use config for this purpose

  store-options = ?options;
    where( 
      <table-create>"option-table";
      <table-put>("option-table", "options", options)
    )

  get-options =
    <table-get>("option-table", "options")

  has-option(s) =
    test(<s; check-option>())

  option-value(s,default) =
    get-options; fetch-elem(s) <+ default

  check-option: option -> ()
    where get-options => ops
        ; <is-subterm>(option,ops)
\end{code}

	Handling of options

\begin{code}
strategies

  io-options =
	  ArgOption("-i" + "--input", 
		where(<set-config> ("-i",<id>)); !Input(<id>),
		!"-i f|--input f   Read input from f")

	+ ArgOption("-o" + "--output",  
		where(<set-config> ("-o",<id>)); !Output(<id>),      
		!"-o f|--output f  Write output to f" )

	+ Option("-S"+"--silent",       
		where(<set-config> ("--verbose",0)); !Verbose(0),          
		!"-S|--silent      Silent execution (same as --verbose 0)")

	+ ArgOption("--verbose",         
		where(<set-config> ("--verbose",<string-to-int>)); !Verbose(<id>),         
		!"--verbose i      Verbosity level i (default 1)")

	+ ArgOption("--keep",         
		where(<set-config> ("--keep",<string-to-int>)),         
		!"--keep i         Keep intermediates (default 0)")

	+ Option("-v"+"--version",    
		where(<set-config> ("-v",())); !Version(),         
		!"-v|--version     Display prgram's version")

	+ Option("-b",                
		where(<set-config> ("-b",())); !Binary(),          
		!"-b               Write binary output")

	+ Option("-s",                
		where(<set-config> ("-s",())); !Statistics(),
		!"-s               Turn on statisctics")

  usage' = 
    obsolete(!"usage': use default-usage")

  default-usage =
  	 where(option-defined(?Program(prog));
	       <printnl>
	       (stderr,
	       	["usage : ", prog, 
		 " [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]"]);
	       <exit> 1)

  need-help(u) =
	option-defined(Help + Undefined(id) + Version); u

  need-help = need-help(default-usage)

  if-not-silent(s) = test(<get-config> "-S") <+ s

  // Input, strategy application and output

  input-file' =
	obsolete(!"input-file'; use input-file");
	input-file

  input-file =
	 where((option-defined(?Input(infile)) <+ !stdin => infile));
  	 split(id, <ReadFromFile> infile)

  apply-strategy(strat) =
   	 where(dtime);
   	 strat;
   	 where(dtime => runtime);
	 \(options, trm) -> ([Runtime(runtime) | options], trm)\

  output-file' =
	obsolete(!"output-file'; use output-file");
	output-file

  output-file =
	 where((option-defined(?Output(outfile)) <+ !stdout => outfile, id)); 
	 (id, split(!outfile, id));
   	 ((option-defined(?Binary()), WriteToBinaryFile)
	  <+ (id, WriteToTextFile))

  report-success =
    if-verbose1(
      <printnl>(stderr,
		[<get-config> "program", " (", <run-time>, " secs)"])
    )
    ; <exit> 0

/*
   	 where(try((not(option-defined(?Silent())), id);
		   (option-defined(?Runtime(runtime)), id);
		   (option-defined(?Program(prog)), id);
		   <printnl> (stderr,
			      [prog, " (", <run-time>, " secs)"])));
	 <exit> 0
*/

  report-failure =
       	<printnl> (stderr, ["rewriting failed"]); 
       	<exit> 1
\end{code}
% Copyright (C) 1998-2002 Eelco Visser <visser@acm.org>
% 
% This program is free software; you can redistribute it and/or modify
% it under the terms of the GNU General Public License as published by
% the Free Software Foundation; either version 2, or (at your option)
% any later version.
% 
% This program is distributed in the hope that it will be useful,
% but WITHOUT ANY WARRANTY; without even the implied warranty of
% MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
% GNU General Public License for more details.
% 
% You should have received a copy of the GNU General Public License
% along with this program; if not, write to the Free Software
% Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA
% 02111-1307, USA.

