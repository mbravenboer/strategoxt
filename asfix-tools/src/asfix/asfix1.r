\literate
% GT -- Grammar Tools
% Copyright (C) 2000 Merijn de Jonge <mdejonge@cwi.nl>
%                    Eelco Visser <visser@acm.org>
%                    Joost Visser <jvisser@cwi.nl>
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

% $Id: asfix1.r,v 1.2 2001/09/01 19:32:40 mdejonge Exp $

\begin{code}
module asfix1
signature
  constructors
    term : a * a * a * a * a * a * a * a * a -> a
    prod : a * a * a * a * a * a * a * a * a -> a
    'id : a -> a
    appl : Prod * W * List(Tree) -> Tree
    list : Sort * W * Tree -> Tree
    lex  : AFun * Sort -> Tree
\end{code}
