#include <iostream>
#include <locale.h>
#include <unistd.h>

using namespace std;

int main(){
    int saldo = 5000, retirar;

    cout << "Você tem 5000, Digite uma quantida para fazer o saque: ";
    cin >> retirar;
    system("clear");
    
    if(retirar <= saldo){
        cout << "Você pode fazer a retirada!" "\n";
        cout << "Você tem agora" << saldo - retirar, "reais";
    }else{
        cout << "Você não tem a quantia para a retirada ";
    }
}   