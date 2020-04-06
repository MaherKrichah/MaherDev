// TP1.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>

using namespace std;

int calculPGCD(int num, int denom);
void Simplification(int num, int denum);

int main()
{   
    int calculPGCD(int le_num, int le_denom);
    
    void Simplification(int le_num, int le_denum);
    
}

int calculPGCD(int num, int denom) {

    int min, Div, PGCD;
    if (num < denom) {
        min = num;
    }
    else {
        min = denom;
    }

    for (Div = 1; Div <= min; Div++) {

        if (((num % Div) == 0) && ((denom % Div) == 0)) {
            PGCD = Div;
        }
    }
    cout << "Le plus grand diviseur en commun est :" << PGCD << endl;
    return PGCD;
}

void Simplification(int num, int denum) {
    cout << "saisir le numerateur:" << endl;
    cin >> num;
    cout << "saisir le denominateur:" << endl;
    cin >> denum;
    int PGCD = calculPGCD(num, denum);
    num = num / PGCD;
    denum = denum / PGCD;
    cout << "La fraction simplifier est :" << num << "/" << denum << endl;

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
