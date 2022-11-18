#include "Gerente.h"
#include <string>
    

// Subclasse Gerente herda da superclasse Funcionario, então aqui só serão escritos os dados específicos
Gerente::Gerente() : Funcionario(){
    this->tipoFuncionario = 2;
}

Gerente::Gerente(int codigoFuncionario, std::string nome, std::string endereco, int dia, int mes, int ano, std::string posicao, std::string telefone, float salario, std::string areaSupervisao){
    this->codigo = codigoFuncionario;
    this->nome = nome;
    this->endereco = endereco;
    this->dataDia = dia;
    this->dataMes = mes;
    this->dataAno = ano;
    this->posicao = posicao;
    this->telefone = telefone;
    this->salario = salario;
    this->tipoFuncionario = 2;
    this->areaSupervisao = areaSupervisao;
 }

Gerente::~Gerente(){
    
}

std::string Gerente::getAreaSupervisao(){
    return areaSupervisao;
}

void Gerente::setAreaSupervisao(std::string supervisionArea){
    areaSupervisao = supervisionArea;  
}
