#include <iostream>
#include <locale.h>

using namespace std;

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8"); 

    int num;

    std::cout << "Digite um número: ";
    cin >> num;

    if(num > 0){
        cout << "O número digitado é positivo!";
    }

    return 0;
}