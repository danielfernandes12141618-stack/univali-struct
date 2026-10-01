#include <iostream>
using namespace std;

const int N = 30;

struct Turma {
    float notas[N];
};

template <typename T>
T maior(const T vetor[], int tamanho) {
    // O vetor precisa ter pelo menos um elemento.
    T maiorValor = vetor[0];

    for (int i = 1; i < tamanho; i++) {
        if (vetor[i] > maiorValor) {
            maiorValor = vetor[i];
        }
    }

    return maiorValor;
}

int main() {
    Turma turma;

    for (int i = 0; i < N; i++) {
        cout << "Digite a nota do aluno " << i + 1 << ": ";

        if (!(cin >> turma.notas[i])) {
            cout << "Entrada invalida!" << endl;
            return 0;
        }
    }

    cout << "Maior nota: " << maior(turma.notas, N) << endl;

    return 0;
}
