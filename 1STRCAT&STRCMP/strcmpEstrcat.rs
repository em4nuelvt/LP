use std::io;

fn retorna_tamanho(texto: &String) -> usize {
    texto.len()
}

fn strcomp(string1: &String, string2: &String) -> i32 {
    let tamanho1 = retorna_tamanho(string1);
    let tamanho2 = retorna_tamanho(string2);

    if tamanho1 > tamanho2 {
        return 1;
    } else if tamanho1 < tamanho2 {
        return -1;
    }

    for (c1, c2) in string1.chars().zip(string2.chars()) {
        if c1 != c2 {
            return if c1 > c2 { 1 } else { -1 };
        }
    }

    0
}

fn concat(dest: String, src: &String) -> String {
    let mut res = dest;
    res.push_str(src);
    res
}

fn main() {
    let mut palavra1 = String::new();
    let mut palavra2 = String::new();

    println!("insira a palavra 1: ");
    io::stdin()
        .read_line(&mut palavra1)
        .expect("Failed to read line");

    println!("insira a palavra 2: ");
    io::stdin()
        .read_line(&mut palavra2)
        .expect("Failed to read line");
    let tmp = strcomp(&palavra1, &palavra2);

    match tmp {
        1 => println!("primeira palavra maior que a segunda"),
        -1 => println!("primeira palavra menor que a segunda"),
        _ => println!("as palavras são iguais"),
    }
  
     palavra1= palavra1.trim_end().to_string();
    let mut concatenacao = concat(palavra1, &palavra2);
    concatenacao.pop(); // Remove o caractere de nova linha
    println!("concatenação: {}", concatenacao);
}

