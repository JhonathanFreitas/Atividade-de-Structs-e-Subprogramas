#include <iostream>
#include <string>

using namespace std;

struct Aluno {
    char nome[100];
    int matricula;
};

int main() {
    Aluno vetor[50];
    int numeroAluno;

    cout << "Quantos alunos deseja cadastrar? (Maximo 50): ";
    cin >> numeroAluno;

    for (int i = 0; i < numeroAluno; ++i) {
        cout << "Digite a matricula do aluno: ";
        cin >> vetor[i].matricula;
        cin.ignore();

        cout << "Digite o nome do aluno: ";
        cin.getline(vetor[i].nome, 100);
    }

    cout << "\nAlunos Cadastrados:\n";
    for (int i = 0; i < numeroAluno; ++i) {
        cout << "Aluno: " << vetor[i].nome << "\n";
        cout << "Matricula: " << vetor[i].matricula << "\n\n";
    }

    return 0;
}
