
#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <locale>


using namespace std;

int main(int argc, char** argv) {
    int n=1, valor;
    float soma = 0, media;

    for (n >= 0; n <= 20; n++) {
        cout << "Informe um numero inteiro positivo: ";
        cin >> valor;
        soma += valor;
    }
    media = soma / 20;
    cout << "A média dos 20 valores positivos é: " << media;

    return 0;
}

