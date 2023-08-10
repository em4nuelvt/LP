def retorna_tamanho(texto):
  return len(texto)


def strcomp(string1, string2):
  tamanho1 = retorna_tamanho(string1)
  tamanho2 = retorna_tamanho(string2)

  if tamanho1 > tamanho2:
    return 1
  elif tamanho1 < tamanho2:
    return -1

  for i in range(tamanho1):
    if string1[i] != string2[i]:
      return 1 if string1[i] > string2[i] else -1

  return 0


def concat(dest, src):
  return dest + src


palavra1 = input('insira a palavra 1: ')
palavra2 = input('insira a palavra 2: ')

tmp = strcomp(palavra1, palavra2)

if tmp == 1:
  print("primeira palavra maior que a segunda")
elif tmp == -1:
  print("primeira palavra menor que a segunda")
else:
  print("as palavras são iguais")

print("concatenação: ", concat(palavra1, palavra2))
