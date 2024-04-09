#include <iostream>
#include <locale.h>

using namespace std;

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");
    int num1;

    cout << "Digite uma data para verificar se é bissexta: ";
    cin >> num1;

    if(num1 / 4 && num1 / 400 && num1 / 100 != 0 ){
        cout << "O ano digitado é bissexto! ";
    }else{
        cout << "O ano digitado não é bissexto :( ";
    }
}
