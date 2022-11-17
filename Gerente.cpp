#include "Gerente.h"
#include <string>
    
Gerente::Gerente() : Funcionario(){
        
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
    return dataDia;
}
    
int Gerente::getDataMes(){
    return dataMes;
}
    
int Gerente::getDataAno(){
    return dataAno;
}

int Gerente::getTipoFuncionario(){
    return tipoFuncionario;
}

std::string Gerente::getPosicao(){
    return posicao;   
}

float Gerente::getSalario(){
    return salario;
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

void Gerente::setEndereco(std::string adress){
    endereco = adress;
}

void Gerente::setTelefone(int phone){
    telefone = phone;
}

void Gerente::setDataDia(int day){
    dataDia = day;
}

void Gerente::setDataMes(int month){
    dataMes = month;
}

void Gerente::setDataAno(int year){
    dataAno = year;
}

void Gerente::setTipoFuncionario(int functionaryType){
    tipoFuncionario = functionaryType;
}

void Gerente::setPosicao(std::string position){
    posicao = position;   
}

void Gerente::setSalario(float salary){
    salario = salary;
}

void Gerente::setAreaSupervisao(std::string supervisionArea){
    areaSupervisao = supervisionArea;  
}
