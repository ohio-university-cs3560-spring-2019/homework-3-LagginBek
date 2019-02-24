in_string = gets

in_string = in_string.gsub(/^[F]/,'Gh')
in_string = in_string.gsub(/^[f]/,'gh')
in_string = in_string.gsub(/(?!^)I(?!^)/,'O')
in_string = in_string.gsub(/(?!^)i(?!^)/,'o')
in_string = in_string.gsub(/Sh$/,'Ti')
in_string = in_string.gsub(/sh$/,'ti')
in_string = in_string.gsub(/SH$/,'TI')
in_string = in_string.gsub(/sH$/,'tI')

puts in_string
