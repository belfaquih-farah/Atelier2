#include <iostream>
#include <string>

class Voiture {
private:
    std::string marque;
    std::string modele;
    int annee;
    float kilometrage;
    float vitesse;

public:
    // Constructeur par défaut
    Voiture() : marque("Inconnue"), modele("Inconnu"), annee(0), kilometrage(0.0f), vitesse(0.0f) {}

    // Constructeur avec paramètres
    Voiture(std::string m, std::string mod, int a, float km, float v) 
        : marque(m), modele(mod), annee(a), kilometrage(km), vitesse(v) {}

    // Méthode accelerer
    void accelerer(float valeur) {
        vitesse += valeur;
    }

    // Méthode freiner
    void freiner(float valeur) {
        vitesse -= valeur;
        if (vitesse < 0) {
            vitesse = 0;
        }
    }

    // Méthode afficherInfo
    void afficherInfo() {
        std::cout << "Marque: " << marque << std::endl;
        std::cout << "Modèle: " << modele << std::endl;
        std::cout << "Année: " << annee << std::endl;
        std::cout << "Kilométrage: " << kilometrage << " km" << std::endl;
        std::cout << "Vitesse: " << vitesse << " km/h" << std::endl;
    }

    // Méthode avancer
    void avancer(float distance) {
        kilometrage += distance;
    }

    // Destructeur
    ~Voiture() {
        std::cout << "La voiture " << marque << " " << modele << " est détruite." << std::endl;
    }
};

int main() {
    // Exemple d'utilisation
    Voiture v1;  // Constructeur par défaut
    v1.afficherInfo();
    std::cout << std::endl;

    Voiture v2("Toyota", "Corolla", 2020, 15000.0f, 0.0f);  // Constructeur avec paramètres
    v2.afficherInfo();
    std::cout << std::endl;

    v2.accelerer(50.0f);
    v2.avancer(100.0f);
    v2.afficherInfo();
    std::cout << std::endl;

    v2.freiner(30.0f);
    v2.afficherInfo();
    std::cout << std::endl;

    return 0;  // Les destructeurs seront appelés ici
}
