/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: samuk
 *
 * Created on 27 de abril de 2023, 12:11
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
    char sexo;
    float h, ideal;

    cout << "Insira o sexo da pessoa: ";
    cin >> sexo;
    cout << "Insira a altura da pessoa: ";
    cin >> h;
    
    if( strcomp(sexo,"F") == 0){
        ideal= (62.1*h) - 44.7;
        cout << "O peso ideal para esta pessoa é: " << ideal;
    }
    else if (strcomp(sexo,"M") ==0){
        ideal= (72.7*h) - 58;
        cout << "O peso ideal para esta pessoa é: " << ideal;
    }
    else{
        cout << "Opção Inválida";
    }
    return 0;
}

