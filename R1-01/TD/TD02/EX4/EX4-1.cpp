/*
Ecrire un programme qui demande à l’utilisateur une année et affiche si celle-ci est bissextile 
ou non.  
Aide : Une année est bissextile si elle est divisible par 4 sauf si elle est divisible par 100. En revanche les 
années divisibles par 400 sont forcément bissextiles. 
Exemple : 1996 est bissextile car divisible par 4. Cependant, 1900 n'est pas bissextile car divisible par 
100 et non par 400. A contrario, 2000 est bissextile car divisible par 400. 
*/
#include <iostream>
#include "../../../includes/CommonThings/commonthings.hpp"

namespace ui = commonthings::userinput;

bool biOrNot(const int d) { //Teste si une année est bissextile ou pas
    
    if (d%400 == 0)
        return true;
    else if (d%100 == 0)
        return false;
    else if (d%4 == 0)
        return true;
    else 
        return false;

    return false;
}

int main() {
    unsigned int année;
    ui::askUser(année, "Année");
    
    std::cout << "L'année " << ((biOrNot(année))?"est ":"n'est pas ") << "bissextile" << std::endl;

    return EXIT_SUCCESS;
}