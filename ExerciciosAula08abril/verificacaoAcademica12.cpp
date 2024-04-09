#include <iostream>
#include <locale.h>
#include <unistd.h>

using namespace std;

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");
    int a, b, c, media, P;

    cout << "Digite suas 3 notas em sequência: ";
    cin >> a;
    cin >> b;
    cin >> c;

    cout << "Digite sua presença em aula: ";
    cin >> P;

    media = (a + b + c) / 3;

    if(media > 7 && P == 100){
        cout << "Você foi aprovado! Parábens :) ";        
    }else if(media < 7 && media > 5){
        cout << "Você ficou de recuperação";
    }else if(media < 5){
        cout << "Você foi reprovado!!! :( ";
    }else if(media > 7 && P >= 75){
        cout << "Você foi aprovado!";
    }else if(media < 7 && P < 75){
        cout << "Você foi reprovado!!! :( ";
    }else{
      cout << "Você foi aprovado!";
    }
}