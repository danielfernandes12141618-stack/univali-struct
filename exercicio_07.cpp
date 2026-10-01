#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

struct Data {
    int dia;
    int mes;
    int ano;
};

struct Pessoa {
    string nome;
    Data nascimento;
};

// GERADOR PROVISORIO: a funcao mencionada no enunciado nao foi enviada.
// Antes de entregar, substitua este gerador pela funcao fornecida na lista
// e ajuste a chamada no main, se o nome ou os parametros forem diferentes.
// Nesta demonstracao, os anos sorteados vao de 1950 a 2025.
Data gerarDataNascimento() {
    Data data;

    data.ano = 1950 + rand() % 76;
    data.mes = 1 + rand() % 12;

    int diasPorMes[12] = {
        31, 28, 31, 30, 31, 30,
        31, 31, 30, 31, 30, 31
    };

    bool bissexto = (data.ano % 400 == 0) ||
                   (data.ano % 4 == 0 && data.ano % 100 != 0);

    if (bissexto) {
        diasPorMes[1] = 29;
    }

    data.dia = 1 + rand() % diasPorMes[data.mes - 1];

    return data;
}

int main() {
    srand(static_cast<unsigned int>(time(nullptr)));

    Pessoa pessoas[10];
    int quantidade = 0;

    cout << "Digite ate 10 nomes completos." << endl;
    cout << "Deixe o nome vazio e pressione Enter para encerrar." << endl;

    while (quantidade < 10) {
        string nome;

        cout << "Nome da pessoa " << quantidade + 1 << ": ";
        if (!getline(cin, nome) || nome.empty()) {
            break;
        }

        pessoas[quantidade].nome = nome;
        pessoas[quantidade].nascimento = gerarDataNascimento();
        quantidade++;
    }

    cout << "\nPessoas cadastradas: " << quantidade << endl;

    for (int i = 0; i < quantidade; i++) {
        cout << pessoas[i].nome << " - ";
        cout << pessoas[i].nascimento.dia << "/";
        cout << pessoas[i].nascimento.mes << "/";
        cout << pessoas[i].nascimento.ano << endl;
    }

    return 0;
}
