#include <iostream>

int main() {
    int taille;
    std::cout << "Entrez la taille du tableau : ";
    std::cin >> taille;
    
    if (taille <= 0) {
        std::cout << "La taille doit être un entier positif." << std::endl;
        return 1;
    }
    
    // 1. Allocation dynamique du premier tableau et lecture des nombres
    int* tableau1 = new int[taille];
    std::cout << "Entrez " << taille << " nombres entiers :" << std::endl;
    for (int i = 0; i < taille; ++i) {
        std::cin >> tableau1[i];
    }
    
    // 2. Allocation dynamique du second tableau et calcul des carrés
    int* tableau2 = new int[taille];
    for (int i = 0; i < taille; ++i) {
        tableau2[i] = tableau1[i] * tableau1[i];
    }
    
    // 3. Suppression du premier tableau
    delete[] tableau1;
    tableau1 = nullptr;  // Bonne pratique pour éviter les pointeurs pendants
    
    // Affichage des valeurs du second tableau
    std::cout << "Les carrés des nombres sont :" << std::endl;
    for (int i = 0; i < taille; ++i) {
        std::cout << tableau2[i] << " ";
    }
    std::cout << std::endl;
    
    // Suppression du second tableau
    delete[] tableau2;
    tableau2 = nullptr;
    
    return 0;
}
