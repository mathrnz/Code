/*
Un angle est exprimé généralement en degré dont le symbole est °. Un degré correspond à 1/360e 
du tour complet d’un cercle. L’angle peut aussi est exprimé comme le rapport entre la longueur d’un 
arc et son rayon. Ainsi, la valeur en rad (symbole du radian) d’un cercle complet (soit 360°) est de 
2×𝜋 (circonférence du cercle). Ainsi, si l’on considère un angle 𝛼 alors on a les relations suivantes : 
𝛼𝑟𝑎𝑑 =𝛼𝑑𝑒𝑔 × 𝜋/180 et, 𝛼𝑑𝑒𝑔 =𝛼𝑟𝑎𝑑 ×180/𝜋 . 
 
1) En prenant soin de séparer définitions et déclarations, utilisez un espace de nom pour créer un 
   module nommé « Degree ». Ce module doit permettre de : 
    a) Convertir un angle en degré vers un angle en radian 
    b) Convertir un angle en radian vers un angle en degré 
2) Ecrire un programme principal permettant de tester les fonctionnalités du module. 
*/

#include <iostream>
#include "../../../includes/CommonThings/commonthings.hpp"

namespace ui = commonthings::userinput;

namespace converts {
    double degToRad(double deg); //Retourne la valeur en radians
    double radToDeg(double rad); //Retourne la valeur en degrés
    const double pi = 3.141592653589793238;
}

double converts::degToRad(double deg) {
    return deg*(converts::pi/180);
}

double converts::radToDeg(double rad) {
    return rad*(180/converts::pi);
}

int main() {
    double deg;
    ui::askUser(deg, "Angle en degrés");
    std::cout << deg << "°=" << converts::degToRad(deg) << "rad" << std::endl;

    double rad;
    ui::askUser(rad, "Angle en radians");
    std::cout << rad << "rad=" << converts::radToDeg(rad) << "°" << std::endl;

    return EXIT_SUCCESS;
}