#ifndef DIRETOR_H
#define DIRETOR_H
#include <string>
#include "Gerente.h"

//.h padrão com "get"s e "set"s. Na classe diretor, os dados Area de Supervisao e Area de Formacao estão inclusos
class Diretor : public Funcionario{
  public:
    Diretor();
    Diretor(int codigoFuncionario, std::string nome, std::string endereco, int dia, int mes, int ano, std::string posicao, std::string telefone, float salario, std::string areaSupervisao, std::string areaFormacao);
    ~Diretor();

    std::string getAreaSupervisao();
    std::string getAreaFormacao();
    void setAreaSupervisao(std::string supervisionArea);
    void setAreaFormacao(std::string academicWorkfield);
  
  private:
    std::string areaSupervisao;
    std::string areaFormacao;

};

#endif
