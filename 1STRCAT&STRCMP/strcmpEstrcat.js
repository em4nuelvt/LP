const readline = require('readline');

const retornaTamanho = (texto) => texto.length;

const strcomp = (string1, string2) => {
  const tamanho1 = retornaTamanho(string1);
  const tamanho2 = retornaTamanho(string2);

  if (tamanho1 > tamanho2) {
    return 1;
  } else if (tamanho1 < tamanho2) {
    return -1;
  }

  for (let i = 0; i < tamanho1; i++) {
    if (string1[i] !== string2[i]) {
      return string1[i] > string2[i] ? 1 : -1;
    }
  }

  return 0;
};

const concat = (dest, src) => dest + src;

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});

rl.question("Insira a palavra 1: ", (palavra1) => {
  rl.question("Insira a palavra 2: ", (palavra2) => {
    rl.close();
    const tmp = strcomp(palavra1, palavra2);

    switch (tmp) {
      case 1:
        console.log("Primeira palavra maior que a segunda");
        break;
      case -1:
        console.log("Primeira palavra menor que a segunda");
        break;
      case 0:
        console.log("As palavras são iguais");
        break;
    }
    console.log("Concatenação: ", concat(palavra1, palavra2));
  });
});
