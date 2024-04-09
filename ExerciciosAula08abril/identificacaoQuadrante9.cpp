#include <iostream>
#include <locale.h>

using namespace std;

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int x, y;

    cout << "Digite as coordenadas X e Y para verificar em qual quadrante esta localizado: ";
    cin >> x;
    cin >> y;

    if(x > 0 && y > 0){
        cout << "Suas coordenadas estão no primeiro quadrante!";
    }else if(x < 0 && y > 0){
        cout << "Suas coordenadas estão no segundo quadrante!";
    }else{
        cout << "Suas coordenadas estão no terceiro quadrante!";       
    }
}