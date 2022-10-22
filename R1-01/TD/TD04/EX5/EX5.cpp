/*
Il existe plusieurs types de clavier avec des emplacements différents pour chaque touche. On peut
décrire (une partie d’) un clavier azerty par la chaine :
"azertyuiopqsdfghjklmwxcvbn?"

Le clavier qwerty utilisé par exemple dans les pays anglophones a comme chaine correspondante :
"qwertyuiopasdfghjkl;zxcvbnm"

Si on pense écrire sur un clavier azerty quand on est en fait sur un clavier qwerty, la phrase
"the quick brown fox jumps over the lazy dog"
devient
"the auick brozn fox ju;ps over the lqwy dog"

Écrivez de façon structuré un logiciel pour faire la conversion d’un phrase écrite sur un clavier
différent du vrai clavier de l’ordinateur. Les claviers doivent être représentés dans le code du
logiciel comme les chaines mentionnées ci-dessus.
*/

#include <iostream>

void azToQw(const char strqw[200], char str[200]) { //Conversion azerty vers qwerty
    for(size_t i=0; i<200; ++i) {
        str[i]=strqw[i];
        
        /*
        if(strqw[i] == 'q')
            str[i]='a';
        else if(strqw[i] == 'w')
            str[i]='z';
        else if(strqw[i] == 'a')
            str[i]='q';
        else if(strqw[i] == ';')
            str[i]='m';
        else if(strqw[i] == 'z')
            str[i]='w';
        else if(strqw[i] == 'm')
            str[i]='?';
        */

       switch(strqw[i]) {
        case 'q':
            str[i]='a';
            break;
        
        case 'w':
            str[i]='z';
            break;
        
        case 'a':
            str[i]='q';
            break;
        
        case ';':
            str[i]='m';
            break;

        case 'z':
            str[i]='w';
            break;

        case 'm':
            str[i]='?';
            break;
        
        default:
            break;
       }
    }

}

int main() {
    char msg[200]="the auick brozn fox ju;ps over the lqwy dog";
    char msgaz[200];
    azToQw(msg, msgaz);
    for(size_t i=0; i<200; ++i) {
        std::cout << msgaz[i];
    }
    std::cout << std::endl;
}