# Exercícios de structs em C++

Cada arquivo é um programa independente, com seu próprio `main()`.
Compile e execute um arquivo de cada vez.

| Arquivo | Conteúdo | Observação |
| --- | --- | --- |
| `exercicio_05.cpp` | Validação de datas com `struct Data` e anos bissextos. | Anos positivos. |
| `exercicio_06.cpp` | Função template `trocar`, usada com inteiros e `struct Ponto`. | Foi assumido que `Ponto` tem `float x` e `float y`; conferir a definição da questão 2. |
| `exercicio_07.cpp` | Cadastro de até 10 pessoas com nome e data gerada automaticamente. | Versão provisória: falta substituir o gerador pela função fornecida no enunciado. |
| `exercicio_08.cpp` | Função template `maior`, aplicada às 30 notas de uma `struct Turma`. | A função recebe um vetor não vazio. |

## Pendência da questão 7

O trecho enviado do enunciado menciona uma função geradora de datas, mas não
inclui seu código. Para que o exemplo funcione, foi acrescentada a função
provisória `gerarDataNascimento()`, que sorteia datas válidas entre 1950 e 2025.
Esse intervalo é uma escolha da demonstração e não uma exigência do enunciado.

Antes de entregar a questão 7, substitua essa função pela função original da
lista e ajuste a chamada se necessário. O usuário informa somente os nomes;
um nome vazio encerra o cadastro antes do limite de 10 pessoas.

## Como executar

Com g++ instalado, por exemplo:

```bash
g++ -std=c++11 exercicio_05.cpp -o exercicio_05
```

No terminal do Windows:

```powershell
.\exercicio_05.exe
```

No Linux ou macOS:

```bash
./exercicio_05
```

Troque `05` por `06`, `07` ou `08` para executar os outros exercícios.
Nas notas decimais, use ponto, por exemplo `8.5`.

## Enviar pelo site do GitHub

1. Abra o repositório que receberá os exercícios.
2. Use **Add file > Upload files** (ou a opção de envio na página de um repositório vazio).
3. Se recebeu um ZIP, extraia-o primeiro. Envie os quatro arquivos `.cpp` e este `README.md`.
4. Informe uma mensagem, como `Adicionar exercícios 5 a 8 de structs`.
5. Confirme o envio pelo botão de commit exibido na página.

Fontes oficiais:
- https://docs.github.com/en/repositories/working-with-files/managing-files/adding-a-file-to-a-repository
- https://docs.github.com/en/repositories/creating-and-managing-repositories/creating-a-new-repository
