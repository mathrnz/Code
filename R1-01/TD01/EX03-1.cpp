#include <iostream> //inclue la bibliothèque iostream

int main() { //fonction principale
    int n1, n2; //crée deux variables de type integer

    std::cout << "Saisir un premier nombre n1="; //demande à l'utilsateur de saisir un nombre n1
    std::cin >> n1; //enregistre la saisie de l'utilisateur dans la varaible n1

    std::cout << "Saisr un deuxième nombre n2="; //demande à l'utilsateur de saisir un nombre n2
    std::cin >> n2; //enregistre la saisie de l'utilisateur dans la varaible n2

    n1 = n1 + n2; //addition
    n2 = n1 - n2; //soustraction
    n1 = n1 - n2; //soustraction

    std::cout << "Magie, maintenant" << std::endl; //écrit à l'utilisateur dans la sortie standard, retour à la ligne
    std::cout << "n1=" << n1 << std::endl; //écrit la valeur de n1 dans la sortie standard, retour à la ligne
    std::cout << "n2=" << n2 << std::endl; //écrit la valeur de n2 dans la sortie standard, retour à la ligne

    std::cout << "Job terminé." << std::endl; //écrit dans la sortie standard
    return 0; //renvoie un succès
}
