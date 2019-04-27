#include <data.h>
#include <iostream>

using namespace std;

//Doxygen

void Data::alterar(short dia, short mes, short ano)
{
    m_dia = dia;
    m_mes = mes;
    m_ano = ano;
    validar();
}

void Data::imprimir() const
{
    if(m_ok)
    {
        cout << m_dia << '/'
             << m_mes << '/'
             << m_ano << '\n';
    }
    else
    {
        cout << "Data invalida!\n";
    }
}

int Data::comparar(const Data &dt2) const
{
    if(this->m_ano != dt2.m_ano)
        return this->m_ano - dt2.m_ano;
    if(this->m_mes != dt2.m_mes)
        return this->m_mes - dt2.m_mes;
    if(this->m_dia != dt2.m_dia)
        return this->m_dia - dt2.m_dia;
    return 0;
}
