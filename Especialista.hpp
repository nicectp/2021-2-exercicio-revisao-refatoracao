#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"

using namespace std;

double perc = 0.1;


class Especialista : public Funcionario {

    public:
    
    string especialidade;
    
    double calcula_comissao(double valorVenda);
    
    void print();

};
