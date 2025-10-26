#include <iostream>
using namespace std;

class Complexe {
private:
    double reel;
    double imag;

public:
    // Constructeurs
    Complexe() : reel(0), imag(0) {}
    Complexe(double r, double i) : reel(r), imag(i) {}

    // Méthodes d'affichage
    void afficher() const {
        cout << "(" << reel << " , " << imag << ")";
    }

    // Saisie d’un complexe
    void saisir() {
        cout << "  Partie reelle : ";
        cin >> reel;
        cout << "  Partie imaginaire : ";
        cin >> imag;
    }

    // Opérations
    Complexe operator+(const Complexe &c) const {
        return Complexe(reel + c.reel, imag + c.imag);
    }

    Complexe operator-(const Complexe &c) const {
        return Complexe(reel - c.reel, imag - c.imag);
    }

    Complexe operator*(const Complexe &c) const {
        return Complexe(reel * c.reel - imag * c.imag, reel * c.imag + imag * c.reel);
    }

    Complexe operator/(const Complexe &c) const {
        double denom = c.reel * c.reel + c.imag * c.imag;
        return Complexe((reel * c.reel + imag * c.imag) / denom,
                        (imag * c.reel - reel * c.imag) / denom);
    }

    bool operator==(const Complexe &c) const {
        return (reel == c.reel && imag == c.imag);
    }
};

int main() {
    Complexe c1, c2, resultat;
    int choix;

    cout << "=== CALCUL SUR NOMBRES COMPLEXES ===" << endl;
    cout << "Saisir le premier nombre complexe : " << endl;
    c1.saisir();
    cout << "Saisir le deuxieme nombre complexe : " << endl;
    c2.saisir();

    do {
        cout << "\n=== MENU ===" << endl;
        cout << "1. Addition" << endl;
        cout << "2. Soustraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Egalite" << endl;
        cout << "0. Quitter" << endl;
        cout << "Votre choix : ";
        cin >> choix;

        switch (choix) {
            case 1:
                resultat = c1 + c2;
                cout << "Somme = ";
                resultat.afficher();
                cout << endl;
                break;
            case 2:
                resultat = c1 - c2;
                cout << "Difference = ";
                resultat.afficher();
                cout << endl;
                break;
            case 3:
                resultat = c1 * c2;
                cout << "Produit = ";
                resultat.afficher();
                cout << endl;
                break;
            case 4:
                resultat = c1 / c2;
                cout << "Division = ";
                resultat.afficher();
                cout << endl;
                break;
            case 5:
                if (c1 == c2)
                    cout << "Les deux nombres sont egaux." << endl;
                else
                    cout << "Les deux nombres sont differents." << endl;
                break;
            case 0:
                cout << "Fin du programme." << endl;
                break;
            default:
                cout << "Choix invalide !" << endl;
        }

    } while (choix != 0);

    return 0;
}
