#include "Presidente.h"
#include <string>
    
// Ao herdar as informações gerais de Funcionário, a classe Presidente adiciona apenas um dado novo, que é a formação acadêmica máxima 
Presidente::Presidente() : Funcionario(){
        
}

Presidente::Presidente(int codigoFuncionario, std::string nome, std::string endereco, int dia, int mes, int ano, std::string telefone, std::string posicao, float salario, std::string areaFormacao, std::string areaAcademicaMax){
    this->codigo = codigoFuncionario;
    this->nome = nome;
    this->endereco = endereco;
    this->dataDia = dia;
    this->dataMes = mes;
    this->dataAno = ano;
    this->posicao = posicao;
    this->telefone = telefone;
    this->salario = salario;
    this->areaFormacao = areaFormacao;
    this->areaAcademicaMax = areaAcademicaMax;
}

Presidente::~Presidente(){
    
}

std::string Presidente::getAreaFormacao(){
    return areaFormacao;
}

std::string Presidente::getAreaAcademicaMax(){
    return areaAcademicaMax;
}

void Presidente::setAreaFormacao(std::string academicWorkfield){
    areaFormacao = academicWorkfield;
}

void Presidente::setAreaAcademicaMax(std::string academicDegree){
    areaAcademicaMax = academicDegree;
}
