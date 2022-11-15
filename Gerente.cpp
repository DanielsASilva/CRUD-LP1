#include "Gerente.h"
#include <string>
    
Gerente::Gerente() : Funcionario(){
        
}

Gerente::Gerente(int codigoFuncionario, std::string nome, std::string endereco, int dia, int mes, int ano, std::string posicao, float salario, std::string areaSupervisao){
    this->codigo = codigoFuncionario;
    this->nome = nome;
    this->endereco = endereco;
    this->dataDia = dia;
    this->dataMes = mes;
    this->dataAno = ano;
    this->posicao = posicao;
    this->salario = salario;
    this->areaSupervisao = areaSupervisao;
 }

Gerente::~Gerente(){
    
}

int Gerente::getCodigo(){
     return codigo;   
}

       
std::string Gerente::getNome(){
    return nome;
}
    
std::string Gerente::getEndereco(){
    return endereco;
}

std::string Gerente::getTelefone(){
    return telefone;
}
    
int Gerente::getDataDia(){
    return dia;
}
    
int Gerente::getDataMes(){
    return mes;
}
    
int Gerente::getDataAno(){
    return ano;
}

int Gerente::getTipoFuncionario(){
    return tipoFuncionario;
}
    
float Gerente::getSalario(){
    return tipoSalario;
}

std::string Gerente::getAreaSupervisao(){
    return areaSupervisao;
}
  
void Gerente::setCodigo(int code){
    codigo = code;
}

void Gerente::setNome(std::string name){
    nome = name;
}

void Gerente::setEndereco(float adress){
    endereco = adress;
}

void Gerente::setTelefone(int phone){
    telefone = fone;
}

void Gerente::setDataDia(int day){
    dia = day;
}

void Gerente::setDataMes(int month){
    mes = month;
}

void Gerente::setDataAno(int year){
    ano = year;
}

void Gerente::setTipoFuncionario(int functionaryType){
    tipoFuncionario = functionaryType;
}
    
void Gerente::setSalario(float salary){
    salario = salary;
}

void Gerente::setAreaSupervisao(std::string supervisionArea){
    areaSupervisao = supervisionArea;  
}
