// Escreva um algoritmo que leia uma matriz M(5,5) e calcula as somas abaixo, escreva essas somas e a matriz.
// a) da linha 4 de M
// b) da coluna 2 de M
// c) da diagonal principal
// d) da diagonal secundária
// e) de todos os elementos da matriz M
// #include <iostream>
// using namespace std;

// int main(){
//     int m[5] [5],soma1,soma2,somap=0,j,i,somasec=0,e=0;
//     for(i=0;i<5;i++){
//       for(j=0;j<5;j++){
//           cin >> m[i] [j];
//       }
//     }
//   soma1= m[3] [0]+m[3] [1]+m[3] [2]+m[3] [3]+m[3] [4];//letra A)
//   soma2=m[0] [1]+m[0] [1]+m[0] [2]+m[0] [3]+m[0] [4];
//   for(i=0;i<5;i++){
//     for(j=0;j<5;j++){
//       if(i==j){
//         somap+=m[i] [j];
//       }else if (i+j==4){
//           somasec+=m[i] [j];
//       }
//       e+=m[i] [j];
//     }
//   }
//   cout << " a soma da linha 4 da Matriz m"<<soma1<<" "<<endl;
//   cout << " a soma da linha da coluna 2 da matriz m "<<soma2<<" "<<endl;
//   cout << "A soma da diagonal principal é de: "<<somap<<" "<<endl;
//   cout << "A soma da diagonal secundaria é de: "<<somasec<<" "<<endl;
//   cout << "A soma de todos os elementos é de: "<<e<<" "<<endl;
// }