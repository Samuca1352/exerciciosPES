/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: samuk
 *
 * Created on 3 de maio de 2023, 22:37
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
    int valor, resultado;
    cout << "Digite um numero (positivo e inteiro): ";
    cin >> valor;
    resultado = valor%2;
    
    if(resultado != 0){
        cout << " O número é impar!";
    }else{
        cout << "O número é par!";
    }
    
    return 0;
}

