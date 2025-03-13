#include <iostream>
using namespace std;

int main() {
   int N,M,somma;
   N=3;
   M=3;
   cout<<"Quante sono le colonne:";
   cout<<N;
   cout<<"Quante sono le righe";
   cout<<M;
   somma=0;
   int mioMat[N][M];
   for(N=0;N<=3;N++)
   {
     for(M=0;M<=3;M++)
     {
      cout<<"Inserisci un numero:";
      cin>>mioMat[N][M];
      somma=somma+mioMat[N][M];
     }
   }
   cout<<"La somma della matrice è "<<somma<<endl;
   for(N=0;N<=3;N++)
   {
    for(M=0;M<=3;M++)
    {
     cout<<"Il numero contenuto nella matrice  di riga "<<N<<" e di colonna "<<M<<" è "<<mioMat[N][M];
    }
   }


   
}

//LEGGERE LE ISTRUZIONI NEL FILE README.md
