#ifndef GERENCIADOR_H
#define GERENCIADOR_H
#include "Funcionario.h"
#include "Operador.h"
#include "Gerente.h"
#include "Diretor.h"
#include "Presidente.h"
#include <vector>

// Classe que instancia as funções que operam os dados dos funcionários, como edição e remoção
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
  void limpaArquivo();
  
  // Sem herança, o vetor-atributo estará como "private"
  private:
  std::vector<Funcionario*> vectorFuncionarios;
};

#endif
