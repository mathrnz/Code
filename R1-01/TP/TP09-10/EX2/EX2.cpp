/*
La fonction main() comporte normalement deux paramètres... que jusqu'à présent vous avez (involontairement) ignorés :

    int argc : « argument count » qui donne le nombre d'arguments qui ont été donnés sur la ligne de lancement ;
    char *argv[ ] : « argument values » qui est un tableau de argc cases qui sont chacune un pointeur sur une chaîne C donnant un des argc arguments.

Si cette rapide indication ne vous suffit pas, je vous invite à aller lire la documentation sur le site Web [CppReference: main()].

Puisque le nom du tableau « argv » est synonyme de l'adresse de la première de ses cases, on peut dire que argv est un pointeur sur un tableau 
qui contient à son tour dans chaque case un pointeur sur un caractère qui est la première lettre de chaque argument. C'est donc en règle générale 
le premier cas de double-pointeur rencontré par le débutant en programmation C/C++. Le schéma suivant montre l'organisation de la mémoire 
pour un programme nommé « showargs » et démarré par la ligne de commande « ./showargs foo bar ».

De façon amusante, le premier argument, pointé par argv[0], est le nom sous lequel le programme a été démarré, autrement dit, le nom de l’exécutable. 
Le premier « vrai » paramètre (quand argc ≥ 1) est pointé par argv[1], et ainsi de suite.

Écrivez un programme qui affiche les valeurs de chacun de ses argc arguments à l'écran.

Saurez-vous écrire un unique programme réalisant, sur le même principe, deux comportements (ou plus) suivant le nom sous lequel il est déclenché ? 
Remarque : pour obtenir facilement un autre nom pour votre exécutable, soit vous le renommez à la main une fois compilé, 
soit vous le re-compilez en spécifiant un autre nom de résultat pour l'option « -o » de g++. Par exemple, vous pourriez faire un programme qui écrit « Hello world! » à l'écran 
s'il est déclenché sous le nom « ./hello » mais qui affiche « Bonjour monde ! » s'il est déclenché sous le nom « ./bonjour ».
Attention au piège spécial débutant : si vous écrivez :

    if(argv[0]=="./monprog") ...

vous testez l'égalité des deux « char * » (« pointeur sur le premier caractère de chaque chaîne ») ! Ce n'est pas du tout ce qu'il faut faire ! 
Vous voulez tester l'égalité du contenu des deux chaînes, ce qui se fait à l'aide de la fonction strcmp() vue en cours (partie sur les chaînes C) :

    if(strcmp(argv[0],"./monprog") == 0) ...
*/

#include <iostream>

int main(int argc, char* argv[]) {
    std::cout << "Nombre d'arguments : " << argc-1 << std::endl;
    
    (argc>1)?std::cout << "Arguments :" << std::endl:std::cout << "Aucun argument." << std::endl;
    for(size_t i=1; i<argc; ++i) {
        std::cout << i << ". " << argv[i] << std::endl;
    }

    return EXIT_SUCCESS;
}