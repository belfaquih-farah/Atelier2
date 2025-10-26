#include <iostream>

// Fonction pour incrémenter en utilisant des références
void incrementer(int& ref) {
    ref++;
}

// Fonction pour permuter en utilisant des références
void permuter(int& ref1, int& ref2) {
    int temp = ref1;
    ref1 = ref2;
    ref2 = temp;
}

int main() {
    int a = 6;
    int b = 12;
    
    std::cout << "Avant incrementer : a = " << a << std::endl;
    incrementer(a);
    std::cout << "Après incrementer : a = " << a << std::endl;
    
    std::cout << "Avant permuter : a = " << a << ", b = " << b << std::endl;
    permuter(a, b);
    std::cout << "Après permuter : a = " << a << ", b = " << b << std::endl;
    
    return 0;
}
