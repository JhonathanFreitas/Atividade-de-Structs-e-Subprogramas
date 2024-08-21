#include <iostream>
using namespace std;

int calcularAnos(double populacaoA, double populacaoB, double taxaAnualCrescimentoA, double taxaAnualCrescimentoB){
    int anos = 0;

    while (populacaoA < populacaoB) {
        populacaoA += populacaoA * taxaAnualCrescimentoA;
        populacaoB += populacaoB * taxaAnualCrescimentoB;
        anos++;
    }

    return anos;
}
int main() {
    double populacaoA = 90000000;
    double populacaoB = 200000000;
    double taxaAnualCrescimentoA = 0.03;
    double taxaAnualCrescimentoB = 0.015;

    int anosNecessarios = calcularAnos(populacaoA, populacaoB, taxaAnualCrescimentoA, taxaAnualCrescimentoB);
    cout << "Serao necessarios " << anosNecessarios << " anos para que a populacao do pais A ultrapasse ou seja igual a populacao do pais B." << endl;

    return 0;
}