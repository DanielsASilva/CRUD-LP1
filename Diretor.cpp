#include "Diretor.h"
#include <string>
    
Diretor::Diretor() : Funcionario(){
        
}

// cpp padrão com "set" e "get", já considerando os dados adicionais da classe Diretor
Diretor::Diretor(int codigoFuncionario, std::string nome, std::string endereco, int dia, int mes, int ano, std::string posicao, std::string telefone, float salario, std::string areaSupervisao, std::string areaFormacao){
    this->codigo = codigoFuncionario;
    this->nome = nome;
    this->endereco = endereco;
    this->dataDia = dia;
    this->dataMes = mes;
    this->dataAno = ano;
    this->posicao = posicao;
    this->telefone = telefone;
    this->salario = salario;
    this->areaSupervisao = areaSupervisao;
    this->areaFormacao = areaFormacao;
}    

std::string Diretor::getAreaSupervisao(){
    return areaSupervisao;
}

std::string Diretor::getAreaFormacao(){
    return areaFormacao;
}

void Diretor::setAreaSupervisao(std::string supervisionArea){
    areaSupervisao = supervisionArea;
}

void Diretor::setAreaFormacao(std::string academicWorkfield){
    areaFormacao = academicWorkfield;
}
