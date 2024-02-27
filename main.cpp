// Calculadora basica

#include <iostream>

int input();
bool validar(int num);
float sum(int num1, int num2);
float rest(int num1, int num2);
float mult(int num1, int num2);
float divi(int num1, int num2);
void print(float num);

using std::cout;
using std::cin;
using std::endl;

int main() {
  int opt = 0;
  cout << "Que operacion deseas realizar?" << endl;
  cout << "1.Suma 2.Resta 3.Multiplicacion 4.Division" << endl;
  cin >> opt;
  switch (opt) {
  case 1: {
      print(sum(input(), input()));
    break;
  }
  case 2: {
      print(rest(input(), input()));
    break;
  }
  case 3: {
      print(mult(input(), input()));
    break;
  }
  case 4: {
      print(divi(input(), input()));
    break;
  }
  }
}

void print(float num){
  cout << "Resultado: " << num << endl;
}

int input() {
  int num;
  printf("Dame un numero: "); // imprime el texto
  cin >> num;
  return validar(num) ? num : 0;
}

bool validar(int num) {
  if (num < 100 && num > -100) {
    return true;
  } else {
    return false;
  }
}

float sum(int num1, int num2) { return num1 + num2; }

float rest(int num1, int num2) { return num1 - num2; }

float mult(int num1, int num2) { return num1 * num2; }

float divi(int num1, int num2) { return num1 / num2; }
