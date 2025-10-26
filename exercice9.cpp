#include <iostream>
#include <cmath>

class vecteur3d {
private:
    float x, y, z;

public:
    // Constructeur avec valeurs par défaut
    vecteur3d(float x = 0, float y = 0, float z = 0) : x(x), y(y), z(z) {}

    // Fonction d'affichage
    void affiche() const {
        std::cout << "(" << x << ", " << y << ", " << z << ")" << std::endl;
    }

    // Fonction pour la norme
    float norme() const {
        return std::sqrt(x * x + y * y + z * z);
    }

    // Fonction coincide
    bool coincide(const vecteur3d& v) const {
        return (x == v.x && y == v.y && z == v.z);
    }

    // Fonctions pour la somme de 2 vecteurs
    // Par valeur
    vecteur3d somme(const vecteur3d& v) const {
        return vecteur3d(x + v.x, y + v.y, z + v.z);
    }

    // Par adresse
    void somme(const vecteur3d* v, vecteur3d* result) const {
        result->x = x + v->x;
        result->y = y + v->y;
        result->z = z + v->z;
    }

    // Par référence
    void somme(const vecteur3d& v, vecteur3d& result) const {
        result.x = x + v.x;
        result.y = y + v.y;
        result.z = z + v.z;
    }

    // Fonctions pour le produit scalaire
    // Par valeur
    float produitScalaire(const vecteur3d& v) const {
        return x * v.x + y * v.y + z * v.z;
    }

    // Par adresse
    void produitScalaire(const vecteur3d* v, float* result) const {
        *result = x * v->x + y * v->y + z * v->z;
    }

    // Par référence
    void produitScalaire(const vecteur3d& v, float& result) const {
        result = x * v.x + y * v.y + z * v.z;
    }

    // Fonctions normax
    // Par valeur
    vecteur3d normax(const vecteur3d& v) const {
        return (norme() > v.norme()) ? *this : v;
    }

    // Par adresse
    void normax(const vecteur3d* v, vecteur3d* result) const {
        *result = (norme() > v->norme()) ? *this : *v;
    }

    // Par référence
    void normax(const vecteur3d& v, vecteur3d& result) const {
        result = (norme() > v.norme()) ? *this : v;
    }
};

int main() {
    vecteur3d v1(1.0, 2.0, 3.0);
    vecteur3d v2(4.0, 5.0, 6.0);
    vecteur3d result;
    float scalarResult;

    std::cout << "Vecteur v1 : ";
    v1.affiche();
    std::cout << "Vecteur v2 : ";
    v2.affiche();

    // Test somme par valeur
    vecteur3d sumVal = v1.somme(v2);
    std::cout << "Somme par valeur : ";
    sumVal.affiche();

    // Test somme par adresse
    v1.somme(&v2, &result);
    std::cout << "Somme par adresse : ";
    result.affiche();

    // Test somme par référence
    v1.somme(v2, result);
    std::cout << "Somme par référence : ";
    result.affiche();

    // Test produit scalaire par valeur
    float psVal = v1.produitScalaire(v2);
    std::cout << "Produit scalaire par valeur : " << psVal << std::endl;

    // Test produit scalaire par adresse
    v1.produitScalaire(&v2, &scalarResult);
    std::cout << "Produit scalaire par adresse : " << scalarResult << std::endl;

    // Test produit scalaire par référence
    v1.produitScalaire(v2, scalarResult);
    std::cout << "Produit scalaire par référence : " << scalarResult << std::endl;

    // Test coincide
    std::cout << "Coïncident : " << (v1.coincide(v2) ? "Oui" : "Non") << std::endl;

    // Test norme
    std::cout << "Norme de v1 : " << v1.norme() << std::endl;
    std::cout << "Norme de v2 : " << v2.norme() << std::endl;

    // Test normax par valeur
    vecteur3d maxVal = v1.normax(v2);
    std::cout << "Normax par valeur : ";
    maxVal.affiche();

    // Test normax par adresse
    v1.normax(&v2, &result);
    std::cout << "Normax par adresse : ";
    result.affiche();

    // Test normax par référence
    v1.normax(v2, result);
    std::cout << "Normax par référence : ";
    result.affiche();

    return 0;
}
