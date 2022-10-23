#include <iostream>
using namespace std;

int main() {
  int x = 8;
  char a = 'a';
  float  y = -123.2;
  string b {};
  string c {};

  b = "uma string";
  c = "Curso de c++ moderno";
  
  cout << "O valor de x é: " << x << '\n';
  x = 12;
  cout << "Agora o valor de a é: " << a << '\n';
  cout << "Agora o valor de y é: " << y << '\n';
  cout << "Agora o valor de b é: " << b << '\n';
  cout << "Agora o valor de c é: " << c << '\n';
  return 0;
}

// int = inteiro 
// int unsigned =  inteiro sem sinal
// int signed =  inteiro com sinal
// char = somente um valor obs: usar sempre aspas simples
// float = varios numeros depois do ponto
// string = mais de um caracter obs: sempre usando aspas duplas