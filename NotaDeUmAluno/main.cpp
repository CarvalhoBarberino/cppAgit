#include <iostream>

using namespace std;

void analisarNotas(float nota1, float nota2){
    if((nota1 < 0) || (nota1 > 10) || (nota2 < 0) || (nota2 > 10))
        cout << "O usuário não pode entrar com uma nota < 0 nem > 10";
    else if((nota1 + nota2) / 2 >= 6){
        cout << "aprovado";
    }
    else
        cout << "reprovado";
}

int main()
{
    float nota1, nota2;
    cout << "Digite a primeira nota do aluno " << endl;
    cin >> nota1;
    cout << "\nDigite a segunda nota do aluno " << endl;
    cin >> nota2;

    analisarNotas(nota1, nota2);

    cout << endl;
    return 0;
}
