#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

int main()
{
    array<double, 5> notas;
    int i = 0;
    for(auto &n : notas){
        cout << "Digite a nota do " << (i + 1) << "st aluno: ";
        cin >> n;
        i++;
    }
//    for(auto &n : notas){
//        cout << "Digite a nota do " << (i + 1) << "st aluno: ";
//        cin >> notas.at(i);
//    }
//    double maiorNota = 0;
//    int melhorAluno = 0;

    i = 0;
    for(auto &n : notas){
        cout << "A nota do " << i << "st aluno: " << n << endl;
//        if(maiorNota < notas.at(i)){
//            maiorNota = notas.at(i);
//            melhorAluno = i;
//        }
    }
    double maiorNota = *max_element(begin(notas), end(notas));
    double *melhorAluno = max_element(begin(notas), end(notas));

    cout << "O " << (melhorAluno + 1) << "st aluno foi o melhor, com nota " << maiorNota << endl;

    return 0;
}
