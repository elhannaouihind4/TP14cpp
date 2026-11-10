
#include <iostream>
#include <fstream>
#include <string>
#include <stdexcept>
using namespace std;

// Fonction lireFichier
void lireFichier(string nomFichier) {

    ifstream fichier(nomFichier);

    // Verifier si le fichier est ouvert
    if (!fichier.is_open()) {
        throw runtime_error("Erreur : impossible d'ouvrir le fichier !");
    }

    string ligne;

    // Lire le fichier ligne par ligne
    while (getline(fichier, ligne)) {
        cout << ligne << endl;
    }

    fichier.close();
}

int main() {

    try {
        lireFichier("test.txt");
    }
    catch (const exception& e) {
        cout << e.what() << endl;
    }

    cout << "Fin du programme." << endl;

    return 0;
}
