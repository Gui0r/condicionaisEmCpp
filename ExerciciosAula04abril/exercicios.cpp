#include <iostream>
#include <locale.h>

using namespace std;

// exercicio1
int exercicio1()
{
    int num;

    std::cout << "Digite um número: ";
    std::cin >> num;

    if (num > 10)
    {
        cout << "O número digitado é maior que 10";
    }
    return 0;
}

// exercicio2
int exercicio2()
{
    int num;

    std::cout << "Digite um número: ";
    std::cin >> num;

    if (num = 10)
    {
        cout << "O número é 0";
    }
    return 0;
}

// exercicio 3
int exercicio3()
{
    int num;

    std::cout << "Digite um número: ";
    cin >> num;

    if (num > 0)
    {
        cout << "O número digitado é positivo!";
    }
    else
    {
        cout << "O número digitado é negativo!";
    }

    return 0;
}

// exercicio 4
int exercicio4()
{
    int num;

    std::cout << "Digite um número";
    cin >> num;

    if (num % 2 == 0)
    {
        std::cout << "o número digitado é par!";
    }
    else
    {
        cout << "o número digitado é impar!";
    }

    return 0;
}

// exercicio5
int exercicio5()
{
    int num;

    cout << "Digite um número: ";
    cin >> num;

    if (num > 10)
    {
        cout << "Seu número é maior que 10";
    }
    else if (num == 10)
    {
        cout << "Seu número é igual a 10";
    }
    else
    {
        cout << "Seu número é menor que 10";
    }

    return 0;
}

int exercicio6(){
    int num;

    cout << "Digite um número de 1 a 7: ";
    cin >> num;
    
while (num >= 7 && num <= 1)
    {
        cout << "Digite um número de 1 a 7: ";
        cin >> num;
    }
    

  if(num < 8 && num > 0){
    switch (num) {
        case 1:
                cout << "Domingo";
                break;
            case 2:
                cout << "Segunda-feira";
                break;
            case 3:
                cout << "Terça-feira";
                break;
            case 4:
                cout << "Quarta-feira";
                break;
            case 5:
                cout << "Quinta-feira";
                break;
            case 6:
                cout << "Sexta-feira";
                break;
            case 7:
                cout << "Sábado";
                break;
        }
    } else {
        cout << "falei para digitar um número de 1 a 7";
    }



    return 0;
}

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");
    exercicio6();

    return 0;
}
