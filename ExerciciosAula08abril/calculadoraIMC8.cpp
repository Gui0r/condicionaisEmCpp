#include <iostream>
#include <locale.h>

using namespace std;

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    float peso;
    float altura;
    float IMC;

    cout << "Digite seu peso em Kilogramas: ";
    cin >> peso;

    cout << "Digite sua altura em metros: ";
    cin >> altura;

    IMC = peso / (altura * altura);

    if(IMC < 18.5){
        cout << "Seu IMC é " << IMC;
        cout << "\n";
        cout << "Categoria: Abaixo do peso";
    }else if(IMC > 18.5 && IMC < 25.0){
        cout << "Seu IMC é " << IMC;
        cout << "\n";
        cout << "Categoria: Peso normal";
    }else if(IMC > 25.0 && IMC < 30.0){
        cout << "Seu IMC é " << IMC;
        cout << "\n";
        cout << "Categoria: Peso normal";
    }else{
        cout << "Seu IMC é " << IMC;
        cout << "\n";
        cout << "Categoria: Obeso";
    }
}