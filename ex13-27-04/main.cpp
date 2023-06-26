
#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <locale>


using namespace std;

int main(int argc, char** argv) {
    int n = 1, nP = 0, valor;
    float soma = 0, media;

    for (n >= 0; n <= 20; n++) {
        cout << "Informe um número inteiro: ";
        cin >> valor;
        if (valor % 2 == 0) {
            soma += valor;
            nP += 1;
        }
    }
    media = soma / nP;
    cout << "A média aritmética dos " << nP << " números pares digitados é: " << media;

    return 0;
}

