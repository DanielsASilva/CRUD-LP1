#ifndef PRESIDENTE_H
#define PRESIDENTE_H
#include <string>
#include "Funcionario.h"

class Presidente : public Funcionario{
  public:
    Presidente();
    Presidente(int codigoFuncionario, std::string nome, std::string endereco, int dia, int mes, int ano, std::string telefone, std::string posicao, float salario, std::string areaFormacao, std::string areaAcademicaMax);
    ~Presidente();
  
    std::string getAreaAcademicaMax();
    std::string getAreaFormacao();   
    void setAreaAcademicaMax(std::string academiDegree);
    void setAreaFormacao(std::string academicWorkfield);
  
  private:
  std::string areaFormacao;
   std::string areaAcademicaMax;

};

#endif
