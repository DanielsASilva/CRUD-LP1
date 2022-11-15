#include "Diretor.h"
#include <string>
    
Diretor::Diretor() : Gerente(){
        
}

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


int Diretor::getCodigo(){
    return codigo;  
}

       
std::string Diretor::getNome(){
    return nome;
}
    
std::string Diretor::getEndereco(){
    return endereco;
}

std::string Diretor::getTelefone(){
    return telefone;
}
    
int Diretor::getDataDia(){
    return dia;
}
    
int Diretor::getDataMes(){
    return mes;
}
    
int Diretor::getDataAno(){
    return ano;
}

int Diretor::getTipoFuncionario(){
    return tipoFuncionario;
}
    
std::string Diretor::getPosicao(){
    return posicao;   
}

float Diretor::getSalario(){
    return salario;
}

float Diretor::getAreaSupervisao(){
    return areaSupervisao;
}

std::string Diretor::getAreaFormacao(){
    return areaFormacao;
}

void Diretor::setCodigo(int code){
    codigo = code;
}

void Diretor::setNome(std::string name){
    nome = name;
}

void Diretor::setEndereco(float adress){
    endereco = adress;
}

void Diretor::setTelefone(int phone){
    telefone = phone;
}

void Diretor::setDataDia(int day){
    dia = day;
}

void Diretor::setDataMes(int month){
    mes = month;
}

void Diretor::setDataAno(int year){
    ano = year;
}

void Diretor::setTipoFuncionario(int functionaryType){
    tipoFuncionario = functionaryType;
}
    
void Diretor::setPosicao(std::string position){
    posicao = position;
}

void Diretor::setSalario(float salary){
    salario = salary;
}

void Diretor::setAreaSupervisao(std::string supervisionArea){
    areaSupervisao = supervisionArea;
}

void Diretor::setAreaFormacao(std::string academicWorkfield){
    areaFormacao = academicWorkField;
}
