#include <iostream>

int main() {
    // 1. Déclaration d'un entier a
    int a = 82;  // Valeur arbitraire pour l'exemple
    
    // 2. Déclaration d'une référence vers cet entier ref_a
    int& ref_a = a;
    
    // 3. Déclaration d'un pointeur vers cet entier p_a
    int* p_a = &a;
    
    // 4. Affichage des variables, leurs adresses et la valeur pointée
    std::cout << "Valeur de a : " << a << std::endl;
    std::cout << "Valeur de ref_a (référence) : " << ref_a << std::endl;
    std::cout << "Valeur pointée par p_a : " << *p_a << std::endl;
    
    std::cout << "Adresse de a : " << &a << std::endl;
    std::cout << "Adresse de ref_a (même que a) : " << &ref_a << std::endl;
    std::cout << "Adresse stockée dans p_a : " << p_a << std::endl;
    std::cout << "Adresse du pointeur p_a : " << &p_a << std::endl;
    
    return 0;
}
