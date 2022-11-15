#include "Operador.h"
#include <string>
    
Operador::Operador() : Funcionario(){
        
}

Operador::Operador(int codigoFuncionario, std::string nome, std::string endereco, int dia, int mes, int ano, std::string posicao, float salario){
    this->codigo = codigoFuncionario;
    this->nome = nome;
    this->endereco = endereco;
    this->dataDia = dia;
    this->dataMes = mes;
    this->dataAno = ano;
    this->posicao = posicao;
    this->salario = salario;
}

Operador::~Operador(){
    
}

int Operador::getCodigo(){
    return codigo;
}

       
std::string Operador::getNome(){
    return nome;
}
    
std::string Operador::getEndereco(){
    return endereco;
}

std::string Operador::getTelefone(){
    return telefone;
}
    
int Operador::getDataDia(){
    return dia;
}
    
int Operador::getDataMes(){
    return mes;
}
    
int Operador::getDataAno(){
    return ano;
}

int Operador::getTipoFuncionario(){
    return tipo;
}
    
float Operador::getSalario(){
    return salario;
}
  
void Operador::setCodigo(int code){
    codigo = code;
}

void Operador::setNome(std::string name){
    nome = name;
}

void Operador::setEndereco(float adress){
    endereco = adress;
}

void Operador::setTelefone(int phone){
    telefone = phone;
}

void Operador::setDataDia(int day){
    dia = day;
}

void Operador::setDataMes(int month){
    mes = month;
}

void Operador::setDataAno(int year){
    ano = year;
}

void Operador::setTipoFuncionario(int functionaryType){
    tipoFuncionario = functionaryType;
}
    
void Operador::setSalario(float salary){
    salario = salary;
}
