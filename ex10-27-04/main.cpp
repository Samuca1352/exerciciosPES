

#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <locale>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int matricula;
    float n1, n2, n3, media;

    cout << "Informe a matrícula do aluno: " << endl;
    cin >> matricula;
    cout << "Informe as três notas obtidas nas atividades da disciplina: ";
    cin >> n1 >> n2>> n3;
    media = (n1 + (n2 * 2)+(n3 * 3)) / 6;

    if (media == 9) {
        cout << "Matrícula: " << matricula << endl;
        cout << "Nota 1: " << n1 << endl;
        cout << "Nota 2: " << n2 << endl;
        cout << "Nota 3: " << n3 << endl;
        cout << "Media de aproveitamento: " << media << endl;
        cout << "Conceito: A" << endl;
        cout << "Aprovado";
    } else if (media >= 7.5 && media < 9) {
        cout << "Matrícula: " << matricula << endl;
        cout << "Nota 1: " << n1 << endl;
        cout << "Nota 2: " << n2 << endl;
        cout << "Nota 3: " << n3 << endl;
        cout << "Media de aproveitamento: " << media << endl;
        cout << "Conceito: B" << endl;
        cout << "Aprovado";
    } else if (media >= 6 && media < 7.5) {
        cout << "Matrícula: " << matricula << endl;
        cout << "Nota 1: " << n1 << endl;
        cout << "Nota 2: " << n2 << endl;
        cout << "Nota 3: " << n3 << endl;
        cout << "Media de aproveitamento: " << media << endl;
        cout << "Conceito: C" << endl;
        cout << "Aprovado";
    } else if (media >= 4 && media <= 6) {
        cout << "Matrícula: " << matricula << endl;
        cout << "Nota 1: " << n1 << endl;
        cout << "Nota 2: " << n2 << endl;
        cout << "Nota 3: " << n3 << endl;
        cout << "Media de aproveitamento: " << media << endl;
        cout << "Conceito: D" << endl;
        cout << "Reprovado";
    } else {
        cout << "Matrícula: " << matricula << endl;
        cout << "Nota 1: " << n1 << endl;
        cout << "Nota 2: " << n2 << endl;
        cout << "Nota 3: " << n3 << endl;
        cout << "Media de aproveitamento: " << media << endl;
        cout << "Conceito: E" << endl;
        cout << "Reprovado";
    }

    return 0;
}

