#include "Funcionario.h"

// Conjunto de gets e sets da superclasse Funcionario. O construtor "Funcionario()" irá inicializar os valores dos atributos
//que não são strings com zero.
Funcionario::Funcionario(){
    setCodigo(0);
    setDia(0);
    setMes(0);
    setAno(0);
    setSalario(0);
    setTipoFuncionario(0);
}

Funcionario::~Funcionario(){

}

int Funcionario::getCodigo(){
    return codigo;
}

       
std::string Funcionario::getNome(){
    return nome;
}
    
std::string Funcionario::getEndereco(){
    return endereco;
}

std::string Funcionario::getTelefone(){
    return telefone;
}
    
int Funcionario::getDataDia(){
    return dataDia;
}
    
int Funcionario::getDataMes(){
    return dataMes;
}
    
int Funcionario::getDataAno(){
    return dataAno;
}

int Funcionario::getTipoFuncionario(){
    return tipoFuncionario;
}

std::string Funcionario::getPosicao(){
    return posicao;   
}

float Funcionario::getSalario(){
    return salario;
}

void Funcionario::setCodigo(int code){
    codigo = code;
}

void Funcionario::setNome(std::string name){
    nome = name;
}

void Funcionario::setEndereco(std::string adress){
    endereco = adress;
}

void Funcionario::setTelefone(int phone){
    telefone = phone;
}

void Funcionario::setDataDia(int day){
    dataDia = day;
}

void Funcionario::setDataMes(int month){
    dataMes = month;
}

void Funcionario::setDataAno(int year){
    dataAno = year;
}

void Funcionario::setTipoFuncionario(int functionaryType){
    tipoFuncionario = functionaryType;
}
    
void Funcionario::setPosicao(std::string position){
    posicao = position;   
}

void Funcionario::setSalario(float salary){
    salario = salary;
}
