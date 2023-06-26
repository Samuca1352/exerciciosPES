

#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <locale>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int n = 1, iN = 0, num;

   for (n >= 0; n <= 15; n++) {
        cout << "Informe o número " << n << ": ";
        cin >> num;
        if (num < 0) {
            iN += 1;
        }
    }
    cout << "Foram digitados " << iN << " número(s) negativos";
    return 0;
}

