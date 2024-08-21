#include <iostream>
using namespace std;

double pesoIdeal(double altura, char sexo){
    if (sexo == 'M' || sexo == 'm') {
        return 72.7 * altura - 58;
    } else if ( sexo == 'F' || sexo == 'f') {
        return 62.1 * altura - 44.7;
    } else {
        cout << "Sexo invalido" << endl;
        return -1;
    }

}
int main() {
    double altura;
    char sexo;

    cout << "Digite a altura da pessoa(em metros)";
    cin >> altura;
    cout << "Digite o sexo da pessoa(M para masculino, F para feminino): ";
    cin >> sexo;


    double calpesoIdeal = pesoIdeal(altura, sexo);

    if (calpesoIdeal != -1) {
        cout << "O peso ideal e: " << calpesoIdeal << " kg" << endl;
    }

    return 0;
}
