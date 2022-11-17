#ifndef GERENCIADOR_H
#define GERENCIADOR_H
#include "Funcionario.h"
#include "Operador.h"
#include "Gerente.h"
#include "Diretor.h"
#include "Presidente.h"
#include <vector>

class Gerenciador {
  public:
  Gerenciador();
  ~Gerenciador();
  
  std::vector<Funcionario*> getVectorFuncionarios();
  
  void adicionarFuncionario();
  void editarFuncionario();
  void excluirFuncionario();
  void exibirFuncionario();
  void exibirLista();
  void exibirListaTipo();
  
  protected:
  
  private:
  std::vector<Funcionario*> vectorFuncionarios;
};

#endif
