#include <iostream>
#include <stdexcept>
using namespace std;

double diviser(int a, int b) {
    if (b == 0) {
        throw runtime_error("Erreur : division par zero impossible !");
    }

    return (double)a / b;
}

int main() {

    try {
        cout << "Test 1 : 10 / 2 = " << diviser(10, 2) << endl;
        cout << "Test 2 : 20 / 4 = " << diviser(20, 4) << endl;
        cout << "Test 3 : 15 / 0" << endl;

        cout << diviser(15, 0) << endl;
    }
    catch (const exception& e) {
        cout << e.what() << endl;
    }

    cout << "Fin du programme." << endl;

    return 0;
}
