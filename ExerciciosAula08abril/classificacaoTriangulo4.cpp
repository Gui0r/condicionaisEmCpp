#include <iostream>
#include <locale.h>

using namespace std;

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");
    int a, b, c;

    cout << "Digite os três lados de um triangulo em ordem com espaço";
    cin >> a, b, c;

    if(a == b == c){
        cout << "O seu triangulo é um triângulo equilátero!";
    }else if(a == b || a == c || b == c){
        cout << "O seu triângulo é um triângulo isósceles";
    }else{
        cout << "O seu triângulo é um triângulo escaleno";
    }
}   