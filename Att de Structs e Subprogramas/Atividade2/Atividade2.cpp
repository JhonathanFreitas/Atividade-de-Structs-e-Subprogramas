#include <iostream>
using namespace std;

int maiorNumero(int numero1, int numero2, int numero3) {
    int maiorValor = numero1;
    if (numero2 > maiorValor) {
        maiorValor = numero2;
    }
    if (numero3 > maiorValor) {
        maiorValor = numero3;
    }
    return maiorValor;
}

int main() {
    int num1, num2, num3;

    cout << "Digite o primeiro numero: ";
    cin >> num1;
    cout << "Digite o segundo numero: ";
    cin >> num2;
    cout << "Digite o terceiro numero: ";
    cin >> num3;

    int resultado = maiorNumero(num1, num2, num3);

    cout << "O maior valor e: " << resultado << endl;

    return 0;
}
