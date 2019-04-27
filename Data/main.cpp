#include <iostream>
#include <data.h>
using namespace std;

void status(Data &vencimento, Data &pagamento);

int main()
{
    Data vencimento(13, 4, 2019), pagamento(13,4,2019);
    status(vencimento, pagamento);
    vencimento.alterar(12, 4, 2019);
    status(vencimento, pagamento);
    vencimento.alterar(12,5,2019);
    status(vencimento, pagamento);
    pagamento.alterar(12,5,2020);
    status(vencimento, pagamento);
    vencimento.alterar(12,5,2020);
    status(vencimento, pagamento);


    return 0;
}

void status(Data &vencimento, Data &pagamento){
    cout << "Pagamento: ";
    pagamento.imprimir();
    cout << "Vencimento: ";
    vencimento.imprimir();
    if(vencimento == pagamento)
        cout << "dentro do prazo" << endl;
    if(vencimento != pagamento)
        cout << "diferente" << endl;
    if(vencimento < pagamento)
        cout << "Atrasado" << endl;
    if(vencimento > pagamento)
        cout << "Adiantado" << endl;
    if(vencimento <= pagamento)
        cout << "Atrasado ou dentro do prazo" << endl;
    if(vencimento >= pagamento)
        cout << "Adiantado ou dentro do prazo" << endl;
    cout << "--------" << endl;
}
