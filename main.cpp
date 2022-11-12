#include <iostream>

using namespace std;

int main()
{
  int num_c1, num_c2, num_c3, num_c4, cont_c1 = 0, cont_c2 = 0, cont_c3 = 0, cont_c4 = 0, voto = 0, voto_nulo = 0, voto_branco = 0, pessoas = 0;
  string candidato1 = "none";
  string candidato2 = "none";
  string candidato3 = "none";
  string candidato4 = "none";
  char sair;

  cout << " =====================URNA ELETRONICA===================== "
          "\n\n";
  cout << " # Cadastre 4 candidatos e seus respectivos numeros: \n\n";
  cout << " Informe o nome do candidato e o numero: ";
  cin >> candidato1 >> num_c1;

  cout << " Informe o nome do candidato e o numero: ";
  cin >> candidato2 >> num_c2;

  cout << " Informe o nome do candidato e o numero: ";
  cin >> candidato3 >> num_c3;

  cout << " Informe o nome do candidato e o numero: ";
  cin >> candidato4 >> num_c4;
  cout << "\n";
  cout << " Votos brancos e nulos " << endl;

  cout << " Nulo = 0 " << endl;

  cout << " Branco = 1 " << endl;

  cout << "\n";

  do
  {

    cout << " Digite o Numero do candidato: ";
    cin >> voto;

    if (voto == num_c1)
      cont_c1++;

    if (voto == num_c2)
      cont_c2++;

    if (voto == num_c3)
      cont_c3++;

    if (voto == num_c4)
      cont_c4++;

    if (voto == 0)
      voto_nulo++;

    if (voto == 1)
      voto_branco++;

    pessoas++;

    cout << " Deseja sair do sistema [S] ou [N] : ";
    cin >> sair;

  } while (sair == 'N');
  cout << "\n";
  cout << "\t--- Quantidade de votos que cada candidato recebeu ---\n\n";
  cout << "\t"
       << "--- " << candidato1 << " Recebeu " << cont_c1 << " votos " << endl;
  cout << "\t"
       << "--- " << candidato2 << " Recebeu " << cont_c2 << " votos " << endl;
  cout << "\t"
       << "--- " << candidato3 << " Recebeu " << cont_c3 << " votos " << endl;
  cout << "\t"
       << "--- " << candidato4 << " Recebeu " << cont_c4 << " votos " << endl;
  cout << "\t--- Votos nulos: " << voto_nulo << endl;
  cout << "\t--- Votos brancos: " << voto_branco << endl
       << endl;

  cout << "\t--- Percentual de cada candidato ---\n\n";
  cout << "\t"
       << "--- " << candidato1 << " " << (float)cont_c1 * 100 / pessoas << "%" << endl;
  cout << "\t"
       << "--- " << candidato2 << " " << (float)cont_c2 * 100 / pessoas << "%" << endl;
  cout << "\t"
       << "--- " << candidato3 << " " << (float)cont_c3 * 100 / pessoas << "%" << endl;
  cout << "\t"
       << "--- " << candidato4 << " " << (float)cont_c4 * 100 / pessoas << "%" << endl;
  cout << "\t--- Nulos: " << (float)voto_nulo * 100 / pessoas << "%" << endl;
  cout << "\t--- Brancos: " << (float)voto_branco * 100 / pessoas << "%" << endl
       << endl;

  if ((cont_c1 > cont_c2) && (cont_c1 > cont_c3) && (cont_c1 > cont_c4))
    cout << "\t" << candidato1 << " venceu a eleicao!" << endl;

  if ((cont_c2 > cont_c1) && (cont_c2 > cont_c3) && (cont_c2 > cont_c4))
    cout << "\t" << candidato2 << " venceu a eleicao!" << endl;

  if ((cont_c3 > cont_c1) && (cont_c3 > cont_c2) && (cont_c3 > cont_c4))
    cout << "\t" << candidato3 << " venceu a eleicao!" << endl;

  if ((cont_c4 > cont_c1) && (cont_c4 > cont_c2) && (cont_c4 > cont_c3))
    cout << "\t" << candidato3 << " venceu a eleicao!" << endl;

  if (cont_c1 == cont_c2)
    cout << "\tEmpate!! " << endl;
  else if (cont_c1 == cont_c3)
    cout << "\tEmpate!! " << endl;
  else if (cont_c1 == cont_c4)
    cout << "\tEmpate!! " << endl;

  return 0;
}
