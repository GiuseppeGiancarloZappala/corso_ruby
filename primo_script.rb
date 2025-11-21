puts "Ciao! Come ti chiami?"
nome = gets.chomp

puts "Piacere, #{nome}. Quanti anni hai?"
anni = gets.chomp.to_i

anno_corrente = Time.now.year
anno_nascita = anno_corrente - anni

puts "Wow #{nome}, sei nato nel #{anno_nascita} (circa)!"
