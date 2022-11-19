#include <iostream>
#include <string>
#include "Funcionario.h"
#include "Diretor.h"
#include "Operador.h"
#include "Gerente.h"
#include "Presidente.h"
#include "Gerenciador.h"

// Todos os include's estão presentes a fim de permitir a execução das funções 

using namespace std;

int main(){
  int opcao;
  
  Gerenciador gerenciador;
  
  while(true){
  // Exibe o menu principal com as opções de ação
  cout << "          SISTEMA DE GERENCIAMENTO DE FUNCIONÁRIOS" << endl;
  cout << "               1. Adicionar Funcionário\n"
  << "               2. Editar Funcionário\n"
  << "               3. Excluir Funcionário\n"
  << "               4. Exibir Funcionário\n"
  << "               5. Exibir Lista\n"
  << "               6. Exibir Lista por Tipo\n"
  << "               7. Limpar Arquivo\n"
  << "               0. Sair\n";
  
  cin >> opcao;
  cin.ignore();
  
  if(!opcao){
    break;
  }
  
  // Para cada opção, uma operação específica é executada. Voltando ao menu principal ao fim do processo
  switch(opcao){
    case 1:
      gerenciador.adicionarFuncionario();
      break;
      
    case 2:
      gerenciador.editarFuncionario();
      break;
      
    case 3:
      gerenciador.excluirFuncionario();
      break;
      
    case 4:
      gerenciador.exibirFuncionario();
      break;
      
    case 5:
      gerenciador.exibirLista();
      break;
      
    case 6:
      gerenciador.exibirListaTipo();
      break;
      
    case 7: 
      gerenciador.limpaArquivo();
      break;
  }
  }
  
  return 0;
}
