#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <locale>

using namespace std;

int main(int argc, char** argv) {
    float salario = 0, mSalario = 0, mFilhos, mSalario, somaSalario = 0, somaFilhos = 0;
    int i = 1, nFilhos;

    for (i >= 0; i <= 5; i++) {
        //salarioAnterior = salario;
        cout << "Informe seu salário: ";
        cin >> salario;
        cout << "Infome quantos filhos você tem: ";
        cin >> nFilhos;
        somaSalario += salario;
        somaFilhos += nFilhos;
        if (salario > mSalario) {
            mSalario = salario;
        }
    }
    mFilhos = somaFilhos / 5;
    mSalario = somaSalario / 5;
    cout << setprecision(6);
    cout << "Media do salario da população: " << mSalario << endl;
    cout << "Media do número de filhos da população: " << mFilhos << endl;
    cout << "Maior salário da população: " << mSalario;
    return 0;
}

