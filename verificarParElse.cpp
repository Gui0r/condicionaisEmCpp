#include <iostream>
#include <locale.h>

using namespace std;

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8"); 

    int num;

    std::cout << "Digite um número: ";
    std::cin >> num;

    if(num % 2 == 0){
        std::cout << "o número digitado é par!";
    }else{
        std:cout << "o número digitado é impar!";
    }

    return 0;