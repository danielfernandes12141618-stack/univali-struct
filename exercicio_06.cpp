#include <iostream>
using namespace std;

// Definicao assumida: confira a struct Ponto da questao 2.
struct Ponto {
    float x;
    float y;
};

template <typename T>
void trocar(T &a, T &b) {
    T auxiliar = a;
    a = b;
    b = auxiliar;
}

int main() {
    int a = 10;
    int b = 20;

    cout << "Antes da troca:" << endl;
    cout << "a = " << a << ", b = " << b << endl;

    trocar(a, b);

    cout << "Depois da troca:" << endl;
    cout << "a = " << a << ", b = " << b << endl;

    Ponto p1 = {1, 2};
    Ponto p2 = {3, 4};

    cout << "\nAntes da troca:" << endl;
    cout << "P1: (" << p1.x << ", " << p1.y << ")" << endl;
    cout << "P2: (" << p2.x << ", " << p2.y << ")" << endl;

    trocar(p1, p2);

    cout << "\nDepois da troca:" << endl;
    cout << "P1: (" << p1.x << ", " << p1.y << ")" << endl;
    cout << "P2: (" << p2.x << ", " << p2.y << ")" << endl;

    return 0;
}
