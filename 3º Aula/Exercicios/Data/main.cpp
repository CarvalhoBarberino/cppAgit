#include <iostream>
#include <data.h>
using namespace std;
int main()
{
    Data vencimento(13,4,2019), pagamento(13,4,2019);

    if(vencimento.comparar(pagamento) == 0)
        cout << "dentro do prazo";
    else if(vencimento.comparar(pagamento) < 0)
        cout << "Atrasado";
    else if(vencimento.comparar(pagamento) > 0)
        cout << "Adiantamento \n";

    return 0;
}
