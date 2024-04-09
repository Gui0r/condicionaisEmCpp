#include <iostream>
#include <locale.h>

using namespace std;
int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");
    float C;
    float F;

    cout << "Digite a temperatura em graus Celsius: ";
    cin >> C;

    F = (C * 9/5) + 32;

    cout << "Seus graus em Fahrenheit são: " << F;
}