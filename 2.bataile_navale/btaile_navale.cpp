#include <iostream>
#include <string>
using namespace std;

int main(){
    // mise en place de l'array pour definire la position des <batteaux> 
    bool bateaux[4][4]{
       {1,1,0,0},
       {0,0,0,0},
       {0,0,1,0},
       {0,0,1,0} 
    };
    int toucher; //variable qui vas stocker le nombre de <bateaux> toucher 
    int positionX; // permet d'aller chercher dans notre array bateau l'élément voulu dans une ligne
    int positionY; // permet d'aller chercher dans notre array bateau la ligne qui vas etre utiliser
    do
    {
        // Récuperation des input utilisateur
       cout << "Rentrer une coordonnée Y(nombre): ";
       cin >> positionY;
       cout << "Rentrer une coordonnée X: ";
       cin >> positionX;

        if(bateaux[positionY][positionX]){
            cout << "Touché!\n";
            toucher++;
            bateaux[positionY][positionX] = 0;
       }else{
            cout << "Raté!\n";
       };
    } while (toucher != 4);
     
    
}
