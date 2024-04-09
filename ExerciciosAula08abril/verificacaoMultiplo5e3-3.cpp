#include <iostream>
#include <locale.h>

using namespace std;

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");
    int num;

    cout << "Digite um número para verificar s eé multiplo de 3 e 5";
    cin >> num;

    if(num / 3 && num / 5){
        cout << "O número digitado é multiplo de 5 e 3";
    }else{
        cout << "O número digitado não é multiplo de 5 e 3 :(";
    }
}