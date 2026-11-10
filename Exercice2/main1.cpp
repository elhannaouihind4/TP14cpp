
#include <iostream>
#include <exception>
using namespace std;

//  Exception personnalisee
class StockInsuffisantException : public exception {
public:
    const char* what() const noexcept override {
        return "Erreur : stock insuffisant pour effectuer la vente !";
    }
};

//  Classe Produit
class Produit {
private:
    string nom;
    int stock;

public:
    // Constructeur
    Produit(string n, int s) {
        nom = n;
        stock = s;
    }

    // Methode vendre
    void vendre(int quantite) {
        if (quantite > stock) {
            throw StockInsuffisantException();
        }

        stock -= quantite;

        cout << "Vente reussie : " << quantite << " " << nom << endl;
        cout << "Stock restant : " << stock << endl;
    }
};


int main() {

    Produit p("Ordinateur", 10);

    try {
        p.vendre(3);
        p.vendre(4);
        p.vendre(5);
    }
    catch (const StockInsuffisantException& e) {
        cout << e.what() << endl;
    }

    cout << "Fin du programme." << endl;

    return 0;
}
