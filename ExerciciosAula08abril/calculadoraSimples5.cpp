#include <iostream>
#include <locale.h>
#include <unistd.h>
#include <stdlib.h>

using namespace std;
int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int resposta;
    int num1, num2;

    cout << "Ola! Bem-vindo a calculadora, escolha o tipo de operação para fazer contas" "\n" "\n" "\n";

    cout << "1 para Somar" "\n";
    cout <<  "2 para Subtração" "\n";
    cout <<  "3 para Multiplicação" "\n";
    cout <<  "4 para Divisão" "\n";

    cin >> resposta;

    system("clear");

    switch (resposta)
    {
    case 1:
        cout << "Digite o primeiro número e o segundo para soma: ";
        cin >> num1;
        cin >> num2;

        cout << "Sua soma é " << num1 + num2;
        break;
    
    case 2:
        cout << "Digite o primeiro número para e o segundo subtração: ";
        cin >> num1;
        cin >> num2;

        cout << "Sua subtração é " << num1 - num2;
        break;
    case 3:
        cout << "Digite o primeiro número para multiplicação o segundo iplicação: ";
        cin >> num1;
        cin >> num2;

        cout << "Sua multiplicação é " << num1 * num2;
        break;
    case 4:
         cout << "Digite o primeiro número pare o segundo a divisão: ";
        cin >> num1;
        cin >> num2;

        cout << "Sua divisão é " << num1 / num2;
        break;
    }
}