#include <iostream>
#include <locale.h>
#include <unistd.h>
#include <string>

using namespace std;

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int a, b, c, P, media, MP;  

    cout << "Digite suas notas em sequência: ";
    cin >> a;
    cin >> b;
    cin >> c;

    cout << "Digite sua presença em aula: ";
    cin >> P;

    
    switch (media, MP)
    {
    case media > 7 && media < 5:
        cout << "Você esta de recuperação! Você precisa tirar" << 10 - media
        break;
    
    default:
        break;
    }
}