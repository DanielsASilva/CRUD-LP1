#ifndef OPERADOR_H
#define OPERADOR_H
#include <string>
#include "Funcionario.h"

// Não adicionando nenhum atributo que não esteja na superclasse, a classe Operador não instancia novos atributos
class Operador : public Funcionario{
  public:
    Operador();
    Operador(int codigoFuncionario, std::string nome, std::string endereco, int dia, int mes, int ano, std::string telefone, std::string posicao, float salario);
    ~Operador();
};

#endif
