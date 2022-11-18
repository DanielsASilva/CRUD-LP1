#include "Operador.h"
#include <string>
    
// Como Operador herda todas as informações de Funcionário e não adiciona nenhum dado novo, não há necessidade de repetir os gets e sets
Operador::Operador() : Funcionario(){
    this->tipoFuncionario = 4;
}

Operador::Operador(int codigoFuncionario, std::string nome, std::string endereco, int dia, int mes, int ano, std::string telefone ,std::string posicao, float salario){
    this->codigo = codigoFuncionario;
    this->nome = nome;
    this->endereco = endereco;
    this->dataDia = dia;
    this->dataMes = mes;
    this->dataAno = ano;
    this->telefone = telefone;
    this->posicao = posicao;
    this->salario = salario;
    this->tipoFuncionario = 4;
}

Operador::~Operador(){
    
}
