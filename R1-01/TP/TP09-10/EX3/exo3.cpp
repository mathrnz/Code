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

//For swap2 active, give 2 value, if a > b, swap between a and b
//For swap3 active, give 3 value, order to a <= b <= c
//DO NOT CALL SWAP2 AND SWAP3 AT SAME TIME IN THE MAIN

#include <iostream>
#include <cstring>

void asksmth(std::string thing, double &n)
{
    std::cout << thing << " : ";
    std::cin >> n;
}

void swap2(double *pa, double *pb)
{
    if(*pa>*pb)
        {
            double temp;
            temp = *pa;
            *pa = *pb;
            *pb = temp;
        }
}

void swap3(double *pa, double *pb, double *pc)
{
    if(*pa>*pb && *pb>*pc)
    {
        swap2(&*pa, &*pb);
        swap2(&*pb, &*pc);
        swap2(&*pa, &*pb);
    }
    else if(*pa>*pb && *pb<*pc)
    {
        swap2(&*pa, &*pb);
        if(*pb>*pc)
            swap2(&*pb, &*pc);
    }
    else if(*pa<*pb && *pb>*pc)
    {
        swap2(&*pb, &*pc);
        if(*pa>*pb)
            swap2(&*pa, &*pb);
    }
}

int main()
{
    double a;
    double b;
    double c;

    asksmth("Choisir une valeur pour a", a);
    asksmth("Choisir une valeur pour b", b);
    asksmth("Choisir une valeur pour c", c);

    std::cout << "Before swap " << a << " " << b << " " << c << std::endl;

    //swap2(&a, &b);
    swap3(&a, &b, &c);

    std::cout << "After swap " << a << " " << b << " " << c;

    return 0;
}