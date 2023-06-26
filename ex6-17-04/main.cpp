/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: samuk
 *
 * Created on 27 de abril de 2023, 11:51
 */

#include <cstdlib>
#include <iostream>
#include <locale>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int valor;

    cout << "Insira um valor: ";
    cin >> valor;

    if (valor > 0) {
        cout << "Esse número é positivo";
    } else if (valor == 0) {
        cout << "ZERO";
    } else {
        cout << "Esse número é negativo";
    }

    return 0;
}

