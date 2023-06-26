/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: samuk
 *
 * Created on 27 de abril de 2023, 11:57
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
    float valorlanche, valorped, quant;
    int cod;

    cout << "Digite o codigo do Lanche: ";
    cin >> cod;
    cout << "Digite a quantidade deste item: ";
    cin>> quant;

    switch (cod) {
        case 100:
            valorlanche = 9.20;
            valorped = valorlanche * quant;
            break;
        case 101:
            valorlanche = 12;
            valorped = valorlanche * quant;
            break;
        case 102:
            valorlanche = 13;
            valorped = valorlanche * quant;
            break;
        case 103:
            valorlanche = 10;
            valorped = valorlanche * quant;
            break;
        case 104:
            valorlanche = 12;
            valorped = valorlanche * quant;
            break;
        case 105:
            valorlanche = 5;
            valorped = valorlanche * quant;
            break;
        case 106:
            valorlanche = 3;
            valorped = valorlanche * quant;
            break;

        default:
            cout << "Opção inválida";
    }

    cout << "o valor do pedido foi de: " << valorped;


    return 0;
}

