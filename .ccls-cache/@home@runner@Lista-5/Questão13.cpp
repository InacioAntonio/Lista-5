// Elabore um algoritmo que leia os elementos inteiros positivos de uma matriz
// 3x3 de tal forma que os números pares sejam armazenados somente em linhas
// pares e os números ímpares sejam armazenados somente em linha ímpares. Quando
// não houver mais espaço para armazenar o número lido (par ou ímpar), o
// algoritmo deverá informar e continuar pedindo novos números até que a matriz
// esteja preenchida. Ao final escreva a matriz.
/*#include <iostream>
using namespace std;

int main() {
  int matriz[3][3], i, j, linhap, linhai, k, i2;
  bool positivo = true;
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      cout << "Digite os elementos positivos e formaram sua matriz " << i << j
           << endl;
      cin >> matriz[i][j];
      if (matriz[i][j]%2 == 0) {
        linhap = matriz[i][j];
      } else {
        linhai=matriz[i][j];
      }
      if(i%2==0){
        matriz[i][j]=linhap;
      }else
        matriz[i][j]=linhai;
    }
  }
  for(i=0;i<3;i++){
    for(j=0;j<3;j++){
      cout << matriz[i][j];
    }
    cout <<endl;
  }
}