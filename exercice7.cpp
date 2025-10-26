#include <iostream>
#include <string>

void permute(std::string& s, int start) {
    if (start == s.length()) {
        std::cout << s << std::endl;
        return;
    }
    for (int i = start; i < s.length(); ++i) {
        // Échange
        char temp = s[start];
        s[start] = s[i];
        s[i] = temp;
        
        // Récursion
        permute(s, start + 1);
        
        // Rétablissement (backtrack)
        temp = s[start];
        s[start] = s[i];
        s[i] = temp;
    }
}

int main() {
    std::string s;
    std::cout << "Entrez une chaîne de caractères : ";
    std::cin >> s;
    
    std::cout << "Toutes les permutations :" << std::endl;
    permute(s, 0);
    
    return 0;
}
