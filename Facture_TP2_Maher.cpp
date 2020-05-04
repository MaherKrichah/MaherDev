#include <iostream>

using namespace std;

class ElementFacturable {
    virtual int calculateTaxes(int numNights, int meals) = 0;
    virtual int calculateTaxes(bool spa, bool gym) = 0;
};

class FacturableParUnite: public ElementFacturable {
    public:
        int calculateTaxes(int numNights, int meals) {
            int tax = 0;
            tax = (numNights * 100 * 13 / 100) + (meals * 20 * 13 / 100);
            return tax;
        }
        
        int calculateTaxes(bool spa, bool gym) {
            return 0;
        }
};

class FacturableFraisFixe: public ElementFacturable {
    public:
    int calculateTaxes(bool spa, bool gym) {
        int tax = 0;
        if(spa == true) {
            tax += (75 * 15 / 100);
        }
        if(gym == true) {
            tax += (50 * 15 / 100);
        }
        return tax;
    }
    
    int calculateTaxes(int numNights, int meals) {
        int tax = 0;
        return tax;
    }
};

class App {
    int numNights;
    int meals;
    bool spa;
    bool gym;
    
    public:
    void displayMenu() {
        cout << "\n";
        cout << "1.	Ajouter des nuitées\n";
        cout << "2.	Ajouter des repas\n";
        cout << "3.	Ajouter un accès au spa\n";
        cout << "4.	Ajouter un accès au gym\n";
        cout << "5.	Afficher la facture et quitter\n";
        cout << "Faites votre choix: \n";
        cout << "\n";
    }
    
    void processChoice(int choice) {
        int tmpNumMeals = 0;
        int tmpNumNights = 0;
        
        switch(choice) {
            case 1:
                if(numNights > 0) {
                    throw std::invalid_argument("Nuits déjà ajoutées à la facture");
                } else {
                    cin >> tmpNumNights;
                    
                    if(tmpNumNights <= 0) {
                        throw std::invalid_argument("La valeur d’entrée doit être supérieure à 0");
                    } else {
                        numNights = tmpNumNights;
                    }
                }
            break;
            case 2:
                cin >> tmpNumMeals;
                if(tmpNumMeals <= 0) {
                    throw std::invalid_argument("La valeur d’entrée doit être supérieure à 0");
                } else {
                    meals = tmpNumMeals;
                }
            break;
            case 3:
                if(spa == false) {
                    spa = true;
                } else {
                    throw std::invalid_argument("Accès au spa déjà ajouté à la facture");
                }
            break;
            case 4:
                if(gym == false) {
                    gym = true;
                } else {
                    throw std::invalid_argument("Accès au gymnase déjà ajouté à la facture");
                }
            break;
            case 5:
            break;
            default:
            cout << "Choix Invalid \n";
        }
    }
    
    public:
    void runProg() {
        int choice = 0;
        while(choice != 5) {
            try {
                displayMenu();
				cin >> choice;
                processChoice(choice);
            }
            catch(const std::invalid_argument& e) {
                cout << e.what() << endl;
            }
        }
        
        int tax = 0;
        FacturableParUnite parUnit;
        tax += parUnit.calculateTaxes(numNights, meals);
        FacturableFraisFixe fixed;
        tax += parUnit.calculateTaxes(spa, gym);
        cout << "Total Nuitées: " << numNights << endl;
        cout << "Total Repas: " << meals << endl;
        cout << "Acces au Spa: " << spa << endl;
        cout << "Access au Gym: " << gym << endl;
        cout << "Taxes: " << tax << endl;
        
        int total = numNights * 100 + meals * 20;
        if(spa == true) {
            total += 75;
        }
        if(gym == true) {
            total += 50;
        }
		
		total += tax;
		
        cout << "Total: " << total;
    }
};

int main()
{
    App obj;
    obj.runProg();
    return 0;
}
