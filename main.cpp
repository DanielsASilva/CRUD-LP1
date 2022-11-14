#include <iostream>
#include <string>

using namespace std;

int main(){
  int opcao;
  
  Gerenciador gerenciador;
  
  cout << "SISTEMA DE GERENCIAMENTO DE FUNCIONÁRIOS" << endl;
  cout << "1. Adicionar Funcionário\n" <<
  << "2. Editar Funcionário\n"
  << "3. Excluir Funcionário\n"
  << "4. Exibir Funcionário\n"
  << "5. Exibir Lista\n"
  << "6. Exibir Lista por Tipo\n";
  
  cin >> opcao;
  cin.ignore();
  
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
    case 6;
      gerenciador.exibirListaTipo();
      break;
  }
  
  return 0;
}
