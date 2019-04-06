#include <iostream>
#include "data.h"

using namespace std;

//Data(int m_dia, int m_mes, int m_ano) : m_dia(m_dia), m_mes(m_mes), m_ano(m_ano)
Data::Data(short dia, short mes, short ano){
    alterar(dia, mes, ano);
}

void Data::validar()
{
    m_ok = m_dia > 0 && m_dia <= ultimoDiaDoMes()
            && m_mes > 0 && m_mes < 13
            && m_ano >= MIN_ANO && m_ano <= MAX_ANO;
}

void Data::alterar(short dia, short mes, short ano){
    m_dia = dia;
    m_mes = mes;
    m_ano = ano;
    validar();
}

void Data::imprimir(){
    if(m_ok){
        cout << m_dia << "/" << m_mes << "/" << m_ano << endl;
    }
    else{
        cout << "Data invalida" << endl;
    }
}

short Data::ultimoDiaDoMes() const
{

    return (m_mes == 2) ? 28 + anoBissexto() : (30 + ((m_mes & 1) ^ (m_mes > JULHO))); // Solucao de alta performance

    //return m_mes==FEVEREIRO ? (anoBissexto() ? 29 : 28) : (m_mes<=JULHO ? (m_mes%2==0 ? 30 : 31) : (m_mes%2==0 ? 31 : 30)); // Solucao inline
}

inline bool Data::anoBissexto() const
{
    //return (Data::m_ano%400 == 0) || ((Data::m_ano%4 == 0) && !(Data::m_ano%100 == 0));
    //return !(Data::m_ano%400) || (!(Data::m_ano%4) && (Data::m_ano%100)); // solucao de media performance
    return !(m_ano & 3) && ((m_ano % 100) || !(m_ano % 400)); // solucao de alta performance. Usa o teorema do and_bit_a bit
}
