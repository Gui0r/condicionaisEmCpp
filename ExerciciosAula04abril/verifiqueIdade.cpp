#include <iostream>
#include <locale.h>

using namespace std;

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8"); 

    int idade;

    std::cout << "Digite sua idade: ";
    std::cin >> idade;

    if(idade >= 18){
        std::cout << "Você é maior de idade!";
    }

    return 0;
}