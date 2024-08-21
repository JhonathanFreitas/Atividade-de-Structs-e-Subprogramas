#include <iostream>
using namespace std;


int calIdadeEmDias(int anos, int meses, int dias) {
    int totalDias = 0;
    totalDias += anos * 365;
    totalDias += meses * 30;
    totalDias += dias;

    return totalDias;
}

int main() {
    int anos, meses, dias;

    cout << "Digite a idade em anos: ";
    cin >> anos;
    cout << "Digite a idade em meses: ";
    cin >> meses;
    cout << "Digite a idade em dias: ";
    cin >> dias;

    int idadeEmDias = calIdadeEmDias(anos, meses, dias);

    cout << "A idade expressa em dias e: " << idadeEmDias << " dias" << endl;

    return 0;
}
