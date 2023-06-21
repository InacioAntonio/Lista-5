/*#include <iostream>
using namespace std;
//Escreva um algoritmo que leia uma matriz M(10,10) e a escreva. Troque, a seguir:
//- Os elementos da diagonal principal pelos elementos da diagonal secundária;
//- Os elementos da linha 5 com os da coluna 10.
//Escreva a matriz modificada.

int main(){
 int  M[10][10],i,j,pri,sec;
  //bool sec=false,pri=false;
  for(i=0;i<10;i++){
    for(j=0;j<10;j++){
      cin >> M[i] [j];
      if(i==j){
        pri=M[i][j];
      }
      if(i+j==i){
        sec=M[i][j];
      }
    }
  }
    M[4][0]=M[0][9];
  for(i=0;i<10;i++){
    for(j=0;j<10;j++){
      pri=sec;
      sec=pri;
      cout << M[i][j];
    }
  }
}*/
