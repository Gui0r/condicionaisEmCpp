#include <iostream>
#include <locale.h>
#include <unistd.h>

using namespace std;

int main(){
    int l;

    cout << "Quantos leads recebemos este mês: ";
    cin >> l;

    if(l <= 5){
        cout << "A quantidade de leads é baixa!";
    }else if(l > 5 && l < 10){
        cout << "A quantidade de leads é esperada!";
    }else{
        cout << "A quantidade de leads é alta!";
    }
}