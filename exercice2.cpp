#include <iostream>

int est_pair(int n) {
    return n % 2 == 0;
}

int est_multiple_de_3(int n) {
    return n % 3 == 0;
}

int main() {
    int nombre;
    std::cout << "donnez un entier : ";
    std::cin >> nombre;
    
    if (est_pair(nombre)) {
        std::cout << "il est pair" << std::endl;
    }
    if (est_multiple_de_3(nombre)) {
        std::cout << "il est multiple de 3" << std::endl;
    }
    if (est_pair(nombre) && est_multiple_de_3(nombre)) {
        std::cout << "il est divisible par 6" << std::endl;
    }
    
    return 0;
}
