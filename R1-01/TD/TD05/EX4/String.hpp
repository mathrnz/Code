#pragma once
#include <iostream>

struct String{
    size_t allocated_size;
    char *buffer;
};

void CreateString(String & str, const size_t size=256); //Crée un string de taille 256 par défaut
void DisplayString(const String & str); //Affiche le string
size_t StringLength(const String & str); //Renvoie la taille du string ('\0' compris)
void DestroyString(String & str); //Supprime le string
void GrowString(String & str, size_t newSize); //Agrandi le string (copie temporaire, suppression de l'ancien et modification du pointeur)
void AssignString(String & str, const char *cstr); //Assigne un tableau de char au string
void ConcatenateString(String & s1, String & s2); //Ajoute deux strings