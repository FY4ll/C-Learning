#include <iostream>
#include <string>

using namespace std;

int main() {
    //creation des differente variable qu'on a besoin

    double first_Number, second_Number, resultat;
    char operation;

    // obtention du première nombre 

    cout << "Entrée le premier chiffre: ";  // impression du texte pour l'utilisateur
    cin >> first_Number; // permet à l'utilisateur de rentrée des valeur puis on les stock dans first_number

    // obtention du deuxième nombre 

    cout << "Entrée le deuxieme chiffre: "; // impression du texte pour l'utilisateur
    cin >> second_Number; // permet à l'utilisateur de rentrée des valeur puis on les stock dans second_number
    
    // Operation choisit par l'utilisateur

    cout << "Operation voulu: Multiplication(x), Division(/), Adition(+) ou Soustraction(-)";
    cin >> operation; 
    
    //mise en place de la condition pour crée notre calculette
    if (operation = 'x'){

        // code pour la multiplication 
        resultat = first_Number*second_Number;
        cout << "la multiplication donne: " << resultat;

    }else if(operation = '/'){

        // code pour la division
        resultat = first_Number/second_Number;
        cout << "la division donne: " << resultat;
    
    }else if (operation = '0')
    {
        // code pour l'addition
        resultat = first_Number+second_Number;
        cout << "l'addition donne: " << resultat;

    }else if(operation = '-'){
        // code pour la soustraction
        resultat = first_Number-second_Number;
        cout << "la soustraction donne: " << resultat;
    }else{
        cout << "Merci de rentrée une valeur! ";
    };
}