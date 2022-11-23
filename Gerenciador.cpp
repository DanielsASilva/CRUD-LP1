#include "Gerenciador.h"
#include <string>
#include <iostream>
#include <fstream>

using namespace std;

Gerenciador::Gerenciador() {
}

Gerenciador::~Gerenciador() {
}

Funcionario* Gerenciador::getFuncPorCodigo(int codigo) {
  Funcionario *func;

    for (int i = 0; i < vectorFuncionarios.size(); i++) {
      if (vectorFuncionarios.at(i)->getCodigo() == codigo) {
        func = vectorFuncionarios.at(i);
        break;
      }
    }
  return func;
}

// Para cadastrar um novo funcionário, o cargo é solicitado e em seguida as informações do tipo nome, endereço e data de ingresso, entre outras, são lidas
// pelo programa e armazenadas
void Gerenciador::adicionarFuncionario()
{
  int codigoFuncionario, dia, mes, ano;
  string nome, endereco, telefone, areaSupervisao, areaFormacao, areaAcademicaMax;
  float salario;
  short int tipo;

  cout << "Que tipo de funcionário gostaria de adicionar?\n"
       << "1. Operador\n"
       << "2. Gerente\n"
       << "3. Diretor\n"
       << "4. Presidente\n";

  cin >> tipo;
  cin.ignore();

  cout << "Digite o código do funcionário: ";
  cin >> codigoFuncionario;
  cin.ignore();

  cout << "Digite o nome do funcionário: ";
  getline(cin, nome);

  cout << "Digite o endereço do funcionário: ";
  getline(cin, endereco);

  cout << "Digite o telefone do funcionário: ";
  getline(cin, telefone);

  cout << "Digite o dia de ingresso do funcionário na empresa: ";
  cin >> dia;
  cin.ignore();

  cout << "Digite o mês de ingresso do funcionário: ";
  cin >> mes;
  cin.ignore();

  cout << "Digite o ano de ingresso do funcionário: ";
  cin >> ano;
  cin.ignore();

  cout << "Digite o salário do funcionário: ";
  cin >> salario;
  cin.ignore();

  // A seguir, os cargos "Gerente", "Diretor" e "Presidente" recebem adições específicas relacionadas às suas funções. Os dois primeiros
  // recebem a área de supervisão, os dois últimos recebem área de formação e "Presidente" recebe a formação academica
  switch (tipo)
  {
  case 1:
    // Funcionario *func = new Operador(codigoFuncionario, nome, endereco, dia, mes, ano, telefone, "Operador", salario);
    vectorFuncionarios.push_back(new Operador(codigoFuncionario, nome, endereco, dia, mes, ano, telefone, "Operador", salario));
    break;

  case 2:
    cout << "Digite a área de supervisão do gerente: ";
    getline(cin, areaSupervisao);
    vectorFuncionarios.push_back(new Gerente(codigoFuncionario, nome, endereco, dia, mes, ano, "Gerente", telefone, salario, areaSupervisao));
    break;

  case 3:
    cout << "Digite a área de supervisão do diretor: ";
    getline(cin, areaSupervisao);
    cout << "Digite a área de formação do diretor: ";
    getline(cin, areaFormacao);
    vectorFuncionarios.push_back(new Diretor(codigoFuncionario, nome, endereco, dia, mes, ano, "Diretor", telefone, salario, areaSupervisao, areaFormacao));
    break;

  case 4:
    cout << "Digite a área de formação do presidente: ";
    getline(cin, areaFormacao);
    cout << "Digite a formação academica máxima do presidente: ";
    getline(cin, areaAcademicaMax);
    vectorFuncionarios.push_back(new Presidente(codigoFuncionario, nome, endereco, dia, mes, ano, telefone, "Presidente", salario, areaFormacao, areaAcademicaMax));
    break;

  default:
    cout << "Opção inválida, tente novamente!\n";
    break;
  }
}

// Para editar um funcionário, o programa deve primeiro conferir se tal cadastro existe e daí prosseguir para a edição
void Gerenciador::editarFuncionario()
{
  int codigo, indice, check, opt, dia, mes, ano;
  string posicao, endereco, telefone;
  float salario;
  cout << "Existem " << vectorFuncionarios.size() << " funcionários na empresa, digite o código do funcionário para edição: ";
  cin >> codigo;
  cin.ignore();

  // O laço "while" procura o funcionário que possui o código digitado e prossegue com a edição se encontrar
  while (true)
  {
    for (int c = 0; c < vectorFuncionarios.size(); c++){
      if (vectorFuncionarios.at(c)->getCodigo() == codigo){
        indice = c;
        check++;
      }
    }
    if (check == 0){
      cout << "código inválido" << endl;
    }else{
      break;
    }
  }

  // Com o código respectivo ao funcionário em questão, as informações que o usuário pretende editar são reescritas e atualizadas
  cout << "Editando o funcionário " << codigo << ".\n"
       << "1. Código: " << endl
       << "2. Dia de ingresso: " << endl
       << "3. Mês de ingresso: " << endl
       << "4. Ano de ingresso: " << endl
       << "5. Telefone: " << endl
       << "6. Endereço: " << endl
       << "7. Posição: " << endl
       << "8. Salário: " << endl;

  cin >> opt;
  cin.ignore();

  // Para cada caso, um dado particular é lido e este passa a ser o dado atual, significando que tal informação foi editada
  switch (opt)
  {
  case 1:
    cout << "Insira o novo código: ";
    cin >> codigo;
    cin.ignore();
    vectorFuncionarios.at(indice)->setCodigo(codigo);
    cout << "\nEdição Concluída\n";
    break;

  case 2:
    cout << "Insira o novo dia de ingresso: ";
    cin >> dia;
    cin.ignore();
    vectorFuncionarios.at(indice)->setDataDia(dia);
    cout << "\nEdição Concluída\n";
    break;

  case 3:
    cout << "Insira o novo mês de ingresso: ";
    cin >> mes;
    cin.ignore();
    vectorFuncionarios.at(indice)->setDataMes(mes);
    cout << "\nEdição Concluída\n";
    break;

  case 4:
    cout << "Insira o novo ano de ingresso: ";
    cin >> ano;
    cin.ignore();
    vectorFuncionarios.at(indice)->setDataAno(ano);
    cout << "\nEdição Concluída\n";
    break;

  case 5:
    cout << "Insira o novo Telefone: ";
    getline(cin, telefone);
    vectorFuncionarios.at(indice)->setTelefone(telefone);
    cout << "\nEdição Concluída\n";
    break;

  case 6:
    cout << "Insira o novo endereço: ";
    getline(cin, endereco);
    vectorFuncionarios.at(indice)->setEndereco(endereco);
    cout << "\nEdição Concluída\n";
    break;

  case 7:
    cout << "Insira a nova posição: ";
    getline(cin, posicao);
    vectorFuncionarios.at(indice)->setPosicao(posicao);
    cout << "\nEdição Concluída\n";
    break;

  case 8:
    cout << "Insira o novo salário: ";
    cin >> salario;
    cin.ignore();
    vectorFuncionarios.at(indice)->setSalario(salario);
    cout << "\nEdição Concluída\n";
    break;
  }
}

// Para excluir um funcionário, primeiramente, é necessário que algum funcionário já esteja cadastrado
// e é preciso conferir isso buscando por seu respectivo código
void Gerenciador::excluirFuncionario()
{
  int codigo, indice, check;
  string opt;
  cout << "Existem " << vectorFuncionarios.size() << " funcionários na empresa, digite o código do funcionário para exclusão: ";
  cin >> codigo;
  cin.ignore();

  if((getFuncPorCodigo(codigo)->getPosicao() == "Diretor") || (getFuncPorCodigo(codigo)->getPosicao() == "Presidente")) {
    cout << "-> Não é possivel excluir funcionarios deste cargo em questão\n";
    cout << "-> Pressione 'enter' para continuar.\n";
    cin.get();
    return;
  }

  for (int c = 0; c < vectorFuncionarios.size(); c++)
  {
    if (vectorFuncionarios.at(c)->getCodigo() == codigo)
    {
      indice = c;
      check++;
    }
    if (check == 0)
    {
      cout << "código inválido" << endl;
    }
    else
    {
      break;
    }
  }

  bool funcEncontrado = false;
  // Uma vez que um funcionário foi escolhido para ter seu cadastro deletado, a função "erase" irá apagar seu registro
  for (int c = 0; c < vectorFuncionarios.size(); c++)
  {
    if (vectorFuncionarios.at(c)->getCodigo() == codigo)
    {
      cout << "Você deseja excluir o funcionário " << vectorFuncionarios.at(c)->getCodigo() << " - " << vectorFuncionarios.at(c)->getNome() << "? (y/n)";
      cin >> ws;
      getline(cin, opt);
    }
    if (opt == "y") {
      delete vectorFuncionarios.at(c);  //libera memoria antes
      vectorFuncionarios.erase(vectorFuncionarios.begin() + c);
      cout << "Funcionário deletado com sucesso!" << endl;
      funcEncontrado = true;
      break;
    } 
  }
  if (!funcEncontrado) {
    cout << "Funcionário não deletado" << endl;
  }
}

// Um funcionário específico terá seus dados gerais listados em ordem
void Gerenciador::exibirFuncionario()
{
  int codigo;
  cout << "Digite o código do funcionário a ser exibido: ";
  cin >> codigo;

  // O "for" vasculha cada o código digitado e exibe o funcionário respectivo com seus dados gerais e particulares, se houverem
  for (int c = 0; c < vectorFuncionarios.size(); c++)
  {
    if (vectorFuncionarios.at(c)->getCodigo() == codigo)
    {
      cout << "\nCódigo do funcionário: " << vectorFuncionarios.at(c)->getCodigo() << endl
           << "Nome: " << vectorFuncionarios.at(c)->getNome() << endl
           << "Endereco: " << vectorFuncionarios.at(c)->getEndereco() << endl
           << "Telefone: " << vectorFuncionarios.at(c)->getTelefone() << endl
           << "Data de ingresso: " << vectorFuncionarios.at(c)->getDataDia() << "/"
           << vectorFuncionarios.at(c)->getDataMes() << "/"
           << vectorFuncionarios.at(c)->getDataAno() << endl
           << "Posição na empresa: " << vectorFuncionarios.at(c)->getPosicao() << endl
           << "Salario: " << vectorFuncionarios.at(c)->getSalario() << endl;

      // Caso o funcionário em questão não seja "Operador", seus dados específicos também serão exibidos
      switch (vectorFuncionarios.at(c)->getTipoFuncionario())
      {
      case 1:
        break;

      case 2:
        cout << "Área de supervisão: " << ((Gerente *)vectorFuncionarios.at(c))->getAreaSupervisao() << endl;
        break;

      case 3:
        cout << "Área de supervisão: " << ((Diretor *)vectorFuncionarios.at(c))->getAreaSupervisao() << endl;
        cout << "Área de formação: " << ((Diretor *)vectorFuncionarios.at(c))->getAreaFormacao() << endl;
        break;

      case 4:
        cout << "Área de formação: " << ((Presidente *)vectorFuncionarios.at(c))->getAreaFormacao() << endl;
        cout << "Área de formação acadêmica máxima: " << ((Presidente *)vectorFuncionarios.at(c))->getAreaAcademicaMax() << endl;
        break;
      }
    }
  }
}

// Lista todos os funcionários cadastrados na empresa, independente do cargo
void Gerenciador::exibirLista()
{
  for (int c = 0; c < vectorFuncionarios.size(); c++){
    cout << "\nCódigo do funcionário: " << vectorFuncionarios.at(c)->getCodigo() << endl
         << "Nome: " << vectorFuncionarios.at(c)->getNome() << endl
         << "Endereco: " << vectorFuncionarios.at(c)->getEndereco() << endl
         << "Telefone: " << vectorFuncionarios.at(c)->getTelefone() << endl
         << "Data de ingresso: " << vectorFuncionarios.at(c)->getDataDia() << "/"
         << vectorFuncionarios.at(c)->getDataMes() << "/"
         << vectorFuncionarios.at(c)->getDataAno() << endl
         << "Posição na empresa: " << vectorFuncionarios.at(c)->getPosicao() << endl
         << "Salario: " << vectorFuncionarios.at(c)->getSalario() << endl;

    // Caso o funcionário em questão não seja "Operador", seus dados específicos também serão exibidos
    switch (vectorFuncionarios.at(c)->getTipoFuncionario())
    {
    case 1:
      break;
      
    case 2:
      cout << "Área de supervisão: " << ((Gerente *)vectorFuncionarios.at(c))->getAreaSupervisao() << endl;
      break;

    case 3:
      cout << "Área de supervisão: " << ((Diretor *)vectorFuncionarios.at(c))->getAreaSupervisao() << endl;
      cout << "Área de formação: " << ((Diretor *)vectorFuncionarios.at(c))->getAreaFormacao() << endl;
      break;

    case 4:
      cout << "Área de formação: " << ((Presidente *)vectorFuncionarios.at(c))->getAreaFormacao() << endl;
      cout << "Área de formação acadêmica máxima: " << ((Presidente *)vectorFuncionarios.at(c))->getAreaAcademicaMax() << endl;
      break;
    }
    cout << '\n';
  }
}

// Exibe uma lista com todos os funcionário que pertencem a uma designação pré-especificada pelo usuário
void Gerenciador::exibirListaTipo()
{
  int tipo;
  cout << "Insira o tipo de funcionário que gostaria de exibir\n"
       << "1. Operador\n"
       << "2. Gerente\n"
       << "3. Diretor\n"
       << "4. Presidente\n";
  cin >> tipo;

  // O "for" vasculha cada componente da designação e exibe os funcionários com seus respectivos dados
  for (int c = 0; c < vectorFuncionarios.size(); c++){
    if (vectorFuncionarios.at(c)->getTipoFuncionario() == tipo){
      cout << "\nCódigo do funcionário: " << vectorFuncionarios.at(c)->getCodigo() << endl
           << "Nome: " << vectorFuncionarios.at(c)->getNome() << endl
           << "Endereco: " << vectorFuncionarios.at(c)->getEndereco() << endl
           << "Telefone: " << vectorFuncionarios.at(c)->getTelefone() << endl
           << "Data de ingresso: "
           << vectorFuncionarios.at(c)->getDataDia() << "/"
           << vectorFuncionarios.at(c)->getDataMes() << "/"
           << vectorFuncionarios.at(c)->getDataAno() << endl
           << "Posição na empresa: " << vectorFuncionarios.at(c)->getPosicao() << endl
           << "Salario: " << vectorFuncionarios.at(c)->getSalario() << endl;

      // Caso o funcionário em questão não seja "Operador", seus dados específicos também serão exibidos
      switch (vectorFuncionarios.at(c)->getTipoFuncionario())
      {
      case 1:
        break;
        
      case 2:
        cout << "Área de supervisão: " << ((Gerente *)vectorFuncionarios.at(c))->getAreaSupervisao() << endl;
        break;

      case 3:
        cout << "Área de supervisão: " << ((Diretor *)vectorFuncionarios.at(c))->getAreaSupervisao() << endl;
        cout << "Área de formação: " << ((Diretor *)vectorFuncionarios.at(c))->getAreaFormacao() << endl;
        break;

      case 4:
        cout << "Área de formação: " << ((Presidente *)vectorFuncionarios.at(c))->getAreaFormacao() << endl;
        cout << "Área de formação acadêmica máxima: " << ((Presidente *)vectorFuncionarios.at(c))->getAreaAcademicaMax() << endl;
        break;
      }
    }
  }
}

// Para limpar o arquivo, só realmente abre e fecha sem fazer nada de fato
void Gerenciador::limpaArquivo()
{
  ofstream stream;
  stream.open("listaFuncionario.txt");
  stream.close();
}

void Gerenciador::importaArquivo()
{
  ifstream fp;

  fp.open("listaFuncionario.txt");

  if (!fp.is_open()){
    cout << "Arquivo não aberto.\n";
    return;
  }

  string strCodigo, nome, endereco, strDia, strMes, strAno, posicao, telefone, strSalario;
  string areaDeSup, areaDeForm, formAcadmax;
  int codigo, dia, mes, ano;
  float salario;
  Funcionario *func;

  while (true)
  {

    if (fp.eof()){
      break;
    }

    fp.ignore(8);
    getline(fp, strCodigo);

    fp.ignore(6);
    getline(fp, nome);

    fp.ignore(11, ' ');
    getline(fp, endereco);

    fp.ignore(5);
    getline(fp, strDia);

    fp.ignore(6, ' ');
    getline(fp, strMes);

    fp.ignore(5);
    getline(fp, strAno);

    fp.ignore(11, ' ');
    getline(fp, posicao);

    fp.ignore(10);
    getline(fp, telefone);

    fp.ignore(9);
    getline(fp, strSalario);

    codigo = stoi(strCodigo);
    dia = stoi(strDia);
    mes = stoi(strMes);
    ano = stoi(strAno);
    salario = stof(strSalario);

    if (posicao == "Operador"){
      func = new Operador(codigo, nome, endereco, dia, mes, ano, telefone, posicao, salario);
    }

    if (posicao == "Gerente"){
      fp.ignore(22);
      getline(fp, areaDeSup);

      func = new Gerente(codigo, nome, endereco, dia, mes, ano, posicao, telefone, salario, areaDeSup);
    }

    if (posicao == "Diretor"){
      fp.ignore(22);
      getline(fp, areaDeSup);

      fp.ignore(21);
      getline(fp, areaDeForm);

      func = new Diretor(codigo, nome, endereco, dia, mes, ano, posicao, telefone, salario, areaDeSup, areaDeForm);
    }
    
    if (posicao == "Presidente"){
      fp.ignore(21);
      getline(fp, areaDeForm);

      fp.ignore(30);
      getline(fp, formAcadmax);

      func = new Presidente(codigo, nome, endereco, dia, mes, ano, telefone, posicao, salario, areaDeForm, formAcadmax);
    }

    fp.ignore(61);
    fp >> ws; //limpa whitespace
    
    vectorFuncionarios.push_back(func);
  }
}

void Gerenciador::exportaArquivo()
{
  ofstream stream;

  // Arquivo é aberto e as informações gerais previamente cadastradas são adicionadas
  stream.open("listaFuncionario.txt", ios::app);
  if (!stream.is_open())
  {
    cout << "Erro ao abrir o .txt" << endl;
    return; // Volta ao menu principal;
  }

  for (int c = 0; c < (int)vectorFuncionarios.size(); c++)
  { 
    stream << "Codigo: " << vectorFuncionarios.at(c)->getCodigo() << endl;
    stream << "Nome: " << vectorFuncionarios.at(c)->getNome() << endl;
    stream << "Endereço: " << vectorFuncionarios.at(c)->getEndereco() << endl;
    stream << "Dia: " << vectorFuncionarios.at(c)->getDataDia() << endl;
    stream << "Mês: " << vectorFuncionarios.at(c)->getDataMes() << endl;
    stream << "Ano: " << vectorFuncionarios.at(c)->getDataAno() << endl;
    stream << "Posição: " << vectorFuncionarios.at(c)->getPosicao() << endl;
    stream << "Telefone: " << vectorFuncionarios.at(c)->getTelefone() << endl;
    stream << "Salario: " << vectorFuncionarios.at(c)->getSalario() << endl;

    // Em seguida, as informações específicas por cargo são adicionadas
    switch (vectorFuncionarios.at(c)->getTipoFuncionario())
    {
    case 1:
      break;
    case 2: 
      stream << "Área de Supervisão: " << ((Gerente *)vectorFuncionarios.at(c))->getAreaSupervisao() << endl;
      break;
    case 3:
      stream << "Área de Supervisão: " << ((Diretor *)vectorFuncionarios.at(c))->getAreaSupervisao() << endl;
      stream << "Área de Formação: " << ((Diretor *)vectorFuncionarios.at(c))->getAreaFormacao() << endl;
      break;
    case 4:
      stream << "Área de Formação: " << ((Presidente *)vectorFuncionarios.at(c))->getAreaFormacao() << endl;
      stream << "Formação Acadêmica Máxima: " << ((Presidente *)vectorFuncionarios.at(c))->getAreaAcademicaMax() << endl;
      break;
    }
    stream << "-------------------------------------------------------------\n";
  }
  stream.close();
}

void Gerenciador::limparLista()
{
  if(vectorFuncionarios.size() == 0){ //comparação importante, para não deletar se estiver vazio
    cout << "Não há funcionários na lista para limpar.\n";
    cout << "Voltando ao menu principal. Enter para continuar\n";
    cin.get();
    return;
  }

  for(int i = 0; i < vectorFuncionarios.size(); i++){
    delete vectorFuncionarios.at(i);  //libera a memoria alloc de todos os funcs
  }
  vectorFuncionarios.clear(); //limpa o vector completamente
}
