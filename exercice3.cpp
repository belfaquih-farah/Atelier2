#include <iostream>

int main() {
    const int TAILLE = 10;
    int tableau[TAILLE];
    
    // Lecture des 10 nombres
    std::cout << "Entrez 10 nombres entiers :" << std::endl;
    for (int i = 0; i < TAILLE; ++i) {
        std::cin >> tableau[i];
    }
    
    // Recherche du plus grand et du plus petit
    int max = tableau[0];
    int min = tableau[0];
    for (int i = 1; i < TAILLE; ++i) {
        if (tableau[i] > max) {
            max = tableau[i];
        }
        if (tableau[i] < min) {
            min = tableau[i];
        }
    }
    
    // Affichage des résultats
    std::cout << "Le plus grand nombre est : " << max << std::endl;
    std::cout << "Le plus petit nombre est : " << min << std::endl;
    
    return 0;
}
