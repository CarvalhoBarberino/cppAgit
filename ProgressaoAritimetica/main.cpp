#include <iostream>

using namespace std;

int prog(){
    int inicio, fim, passo, soma = 0;
    cout << "Digite o valor inicial" << endl;
    cin >> inicio;
    cout << "Digite o valor final" << endl;
    cin >> fim;
    cout << "Digite o valor passo" << endl;
    cin >> passo;
    for(int i = inicio;i <= fim; i = i + passo){
        soma = soma + i;
    }
    return soma;
}

int main()
{
    int continuar = 1;
    while(continuar){
        int soma = prog();
        cout << "resultado da soma " << soma << endl;
        cout << "Deseja realizar um novo calculo?\nDigite 0 para encerrar ou qualquer outro valor para continuar" << endl;
        cin >> continuar;
    }
    return 0;
}
