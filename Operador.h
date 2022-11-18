#ifndef OPERADOR_H
#define OPERADOR_H
#include <string>
#include "Funcionario.h"

class Operador : public Funcionario{
  public:
    Operador();
    Operador(int codigoFuncionario, std::string nome, std::string endereco, int dia, int mes, int ano, std::string telefone, std::string posicao, float salario);
    ~Operador();

  private:
    
};

#endif
