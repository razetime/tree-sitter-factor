(keyword) @keyword
(number) @number
(string) @string
(bool) @bool
(comment) @comment
(word_defn 
  local_word_start: "::"
  word_name:(sname) @function.method)

(stack_effect 
  params:(effect 
    (sname) @variable.parameter))
  

