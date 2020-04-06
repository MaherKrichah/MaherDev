// TP1_V2.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
using namespace std;

void nbFraction();

int main()
{
    nbFraction();
}

void afficher(int nbFraction, numerateur[i], denominateur[i]) {
    int i, PGCD;
    for (i = 0; i <= nbFraction ; i++) {

        PGCD = calculPGCD(numerateur[i], denominateur[i]);

        cout << numerateur[i] << '/' << denominateur[i] << "  " << numerateur[i] / PGCD << '/' << denominateur[i] / PGCD << endl;
    }
}

void nbFraction()
{
    int i, nbFraction, num = 0, denom = 0;

    cout << "Saisir le nombre de fractions a analyser: ";
    cin >> nbFraction;

    
    for (i = 1; i <= nbFraction; i++) {
        cout << "Entrer le numerateur " << i << "\n";
        
        if (num > 0) {
            cin >> num;
        }
        else {
            cout << "Le numerateur doit etre plus grand que zero! \n";
            cout << "Entrer un autre numerateur: " << "\n";
            cin >> num;
            
        }

        cout << "Entrer le denominateur " << i << "\n";
        
        if (denom > 0) {
            cin >> denom;
        }
        else {
            cout << "Le denominateur doit etre plus grand que zero! \n";
            cout << "Entrer un autre denominateur: " << "\n";
            cin >> denom;
        }
    }

    
}


// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
