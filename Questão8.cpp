//Na teoria dos sistemas, define-se como elemento minimax de uma matriz o menor elemento da linha onde
//se encontra o maior elemento da matriz. Escreva um algoritmo que leia uma matriz 10 X 10 de númros e
//encontre seu elemento minimax, mostrando também sua posição. 

/*#include <iostream>
using namespace std;

int main(){
int   matriz[10][10],maior=0,menor=9999,i,j,p,linha,auxlinha[linha];
  for(i=0;i<10;i++){
    for(j=0;j<10;j++){
      cin >>matriz[i][j];
      if(maior>matriz[i][j]){
        maior=matriz[i][j];
        linha=i;
      }
    }
  }
  for(j=0;j<10;j++){
    auxlinha[j]=matriz[linha][j];
    if(auxlinha[j]<menor){
      menor=auxlinha[j];
      p=j;//coluna aonde o minimax está
    }
  }
  cout << "O elemento minimax é: "<<menor<<" "<<endl;
  cout << "Sua posiçao dentro da matriz e de"<<linha<<p<<endl;
}*/