/*
Dans la fonction main() de votre programme, définissez-y deux variables réelles (de type double) nommées a et b. Demandez à l'utilisateur une valeur pour chacune.

Écrivez une fonction echange2() qui reçoit en paramètre deux pointeurs sur des double. La fonction doit contrôler que la valeur 
du premier réel est inférieure à celle du second et, si ce n'est pas le cas, les permuter.

En utilisant votre fonction echange2() dans le main(), vérifiez que, après son appel, la valeur de votre variable a est inférieure à celle de b en les affichant à l'écran.

Ajoutez dans votre main() une troisième variable de type double nommée c.

On désire maintenant écrire une fonction ordonne3() qui puisse manipuler ces trois variables a, b et c passées en paramètre et faire en sorte qu'après son appel, 
on ait toujours la situation a ≤ b ≤ c, éventuellement en permutant leurs valeurs si nécessaire. Saurez-vous comment utiliser, à l'intérieur de ordonne3(), 
plusieurs appels à echange2() pour réaliser cela ?

Vous aurez trouvé la solution demandée si vous respectez les critères suivants :

    il n'y a pas de if() dans ordonne3(), ni dans le main() ;
    les seules lecture (« cin >> ... ») et d'affichageu (« cout << ... ») sont dans le main() ; il n'y en a aucune dans echange2() ni dans ordonne3() ;
    vous n'avez pas utilisé de passage par référence.

En cas de doute, demandez l'avis d'un de l'enseignant qui surveille la séance.
*/

#include <iostream>
#include "../../../includes/CommonThings/commonthings.hpp"

void ordonne3(double *pa, double *pb, double *pc) { //Ordonne a b et c dans l'ordre croissant
    double tmp=*pa;
    
    if(*pa < *pb && *pb < *pc)
        //a b c
        return;
    else {
        if(*pb < *pa && *pa < *pc) {
            // b a c
            *pa=*pb;
            *pb=tmp;
        } else if (*pc < *pb && *pb < *pa){
            //c b a
            *pa=*pc;
            *pc=tmp;
        } else {
            //b c a
            *pa=*pb;
            *pb=*pc;
            *pc=tmp;
        }

    }
}

int main(int argc, char *argv[]) {
    double a, b, c;
    commonthings::userinput::askUser(a, "A?");
    commonthings::userinput::askUser(b, "B?");
    commonthings::userinput::askUser(c, "C?");

    ordonne3(&a, &b, &c);

    std::cout << "A:" << a << ", B:" << b << ", C:" << c << std::endl;

    return EXIT_SUCCESS;
}