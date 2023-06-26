/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: samuk
 *
 * Created on 27 de abril de 2023, 11:28
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
    float raio, area, perimetro;
    cout << "Digite o raio do círculo: ";
    cin >> raio;
    
    perimetro = 2* 3.14 * raio;
    
    area= 3.14 * (raio*raio);
    
    
    cout << "O perímetro do círculo é: " << perimetro << endl;
    cout << "A área do círculo é: " << area << endl;
    
    
    return 0;
}

