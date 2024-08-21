#include <iostream>
#include <string>
using namespace std;

string categoriadosNadadores(int idade) {
    if (idade >= 5 && idade <= 7) {
        return "Infantil A";
    } else if (idade >= 8 && idade <= 10) {
        return "Infantil B";
    } else if (idade >= 11 && idade <= 13) {
        return "Juvenil A";
    } else if (idade >= 14 && idade <= 17) {
        return "Juvenil B";
    } else if (idade >= 18) {
        return "Adulto";
    } else {
        return "Idade nao categorizada";
    }
}

int main() {
    int idade;

    cout << "Informe a idade do nadador: ";
    cin >> idade;

    string categoria = categoriadosNadadores(idade);
    cout << "A categoria do nadador e: " << categoria << endl;

    return 0;
}
