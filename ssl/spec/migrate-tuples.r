module migrate-tuples
imports lib
signature
  constructors
    TNil : Tuple()
    TCons: a * Tuple(as) -> Tuple([a | as])

strategies

  main =
    Tl; map(try(migrate-file)); <exit> 0

  migrate-file =
    !(<debug(!"processing: ")>, 
      <ReadFromFile; migrate-term 
       <+ debug(!"Warning: not an ATerm: "); fail>); 
    WriteToTextFile

  migrate-term =
    bottomup(try(TNtoTuple + CNtoList))

rules

  CNtoList :
    "Nil"#([]) -> []

  CNtoList :
    "Cons"#([x, y]) -> [x | y]

  TNtoTuple :
    TNil -> ()

  TNtoTuple :
    TCons(x, ""#(xs)) -> ""#([x | xs])
