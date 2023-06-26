/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: samuk
 *
 * Created on 27 de abril de 2023, 11:37
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
    char nome[30];
    float valor, desconto, fim;
    
    cout << "Insira o nome do produto: ";
    cin >> nome;
    cout << "Insira o vaor do produto: ";
    cin >> valor;
    fim= valor - valor*0.13;
    cout << "Produto: " << nome << endl;
    cout << "Valor: "<< valor << endl;
    cout << "Desconto: " << valor*0.13 << endl;
    cout << "Valor Final: "<< fim;
    
    
    return 0;
}

