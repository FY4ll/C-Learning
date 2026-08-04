#include <iostream>
#include <string>
using namespace std;

int main() {
    //creation des differente variable qu'on a besoin

    double first_Number, second_Number, resultat;
    char operation;
    char recommencer;

    do
    {
     // obtention du première nombre 

    cout << "Entrée le premier chiffre: ";  // impression du texte pour l'utilisateur
    cin >> first_Number; // permet à l'utilisateur de rentrée des valeur puis on les stock dans first_number

    // obtention du deuxième nombre 

    cout << "Entrée le deuxieme chiffre: "; // impression du texte pour l'utilisateur
    cin >> second_Number; // permet à l'utilisateur de rentrée des valeur puis on les stock dans second_number
    
    // Operation choisit par l'utilisateur

    cout << "Operation voulu: Multiplication(x), Division(/), Adition(+) ou Soustraction(-)? ";
    cin >> operation;
    
    //switch afin d'avoir une option pour recommencer
    switch(operation){

        case '+':
            // Addition
            cout << "Le resultat de l'addition est: " << first_Number + second_Number;
             // Le break sert à arreter le switch 
            break;
        
        case '-':
            // Soustraction
            cout << "Le resultat de la soustraction est: " << first_Number - second_Number;
             // Le break sert à arreter le switch 
            break;

        case '*':
            // Multiplication
            cout << "Le resultat de la multiplication est: " << first_Number * second_Number;
             // Le break sert à arreter le switch 
            break;

        case '/':
            // Division
            cout << "Le resultat de la division est: " << first_Number / second_Number;
            // Le break sert à arreter le switch 
            break;

        // Sert à donner une réponse si acune case réponds à la réponse de l'utilisateur 
        default: 
            // Si le resultat n'est pas celui attendu (nombre ou symbole mathématique voulu)
            cout << "Operation Invalide ";
             // Le break sert à arreter le switch 
            break;
    };
        
      do
      {
         // Reponse de l'utilisateur afin de garder la boucle active
            cout << "\n voulez-vous recommencer?(Y/N) ";
            cin >> recommencer;
            // verification que l'entrée soit valide et sinon on envoie un message
            if (recommencer != 'Y' && recommencer != 'y' &&
                recommencer != 'N' && recommencer != 'n')
                {
                     cout<< "Merci de mettre une entrée valide";
                };
      } while (recommencer != 'Y' && recommencer != 'y' &&
         recommencer != 'N' && recommencer != 'n');
       
        

    //boucle qui vas se repeter uniquement si l'utilisateur a choisit Y ou y comme réponse 
    } while (recommencer == 'Y' || recommencer == 'y');
    
}