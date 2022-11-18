#ifndef GERENTE_H
#define GERENTE_H
#include <string>
#include "Funcionario.h"

class Gerente : public Funcionario{
  public:
    Gerente();
    Gerente(int codigoFuncionario, std::string nome, std::string endereco, int dia, int mes, int ano, std::string posicao, std::string telefone, float salario, std::string areaSupervisao);
    ~Gerente();

    std::string getAreaSupervisao();
    void setAreaSupervisao(std::string supervisionArea);
  
  private:
    std::string areaSupervisao;
};

#endif
