#include <iostream>

void ma_fonction() {
    static int compteur = 0;  
    compteur++;
    std::cout << "appel numéro " << compteur << std::endl;
}

int main() {
    ma_fonction();  // appel numéro 1
    ma_fonction();  // appel numéro 2
    ma_fonction();  // appel numéro 3

   
    return 0;
}
