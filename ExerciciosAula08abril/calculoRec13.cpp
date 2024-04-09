#include <iostream>
#include <locale.h>
#include <unistd.h>

using namespace std;

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int nota, MP, notaM = 10, notaRec, P;  

    cout << "Digite sua nota: ";
    cin >> nota;

    cout << "Digite sua nota de recuperação: ";
    cin >> notaRec;

    MP = nota + notaRec;

    cout << "Digite sua presença em aula: ";
    cin >> P;

    if(P >= 75 && MP < 10){
        cout << "Reprovado!";
    }else if(MP <= 10 || P < 75){
        cout << "Reprovado!";
    }else if (P >= 75 && MP >= 10){
        cout << "Aprovado!";
    }else{
        cout << "Reprovado!";
    }

/*
    if(MP < 10){
        cout << "Reprovado!";
    }else if(MP > 10){
        cout << "Aprovado!";
    }else{
        cout << "Reprovado!";
    }
*/
}
/*
    switch (media, MP)
    {
    case media > 7 && media < 5:
        cout << "Você esta de recuperação! Você precisa tirar" << 10 - media
        break;
    
    default:
        break;
    }
}
*/