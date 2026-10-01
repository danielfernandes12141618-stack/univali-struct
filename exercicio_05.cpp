#include <iostream>
using namespace std;

struct Data {
    int dia;
    int mes;
    int ano;
};

bool dataValida(Data data) {
    if (data.ano < 1 || data.mes < 1 || data.mes > 12) {
        return false;
    }

    int diasPorMes[12] = {
        31, 28, 31, 30, 31, 30,
        31, 31, 30, 31, 30, 31
    };

    bool bissexto = (data.ano % 400 == 0) ||
                   (data.ano % 4 == 0 && data.ano % 100 != 0);

    if (bissexto) {
        diasPorMes[1] = 29;
    }

    return data.dia >= 1 &&
           data.dia <= diasPorMes[data.mes - 1];
}

int main() {
    Data data;

    cout << "Digite dia, mes e ano separados por espacos: ";

    if (!(cin >> data.dia >> data.mes >> data.ano)) {
        cout << "Entrada invalida!" << endl;
        return 0;
    }

    if (dataValida(data)) {
        cout << "Data valida!" << endl;
    } else {
        cout << "Data invalida!" << endl;
    }

    return 0;
}
