#include "iostream" 
#include "string"

using namespace std;

int main()
{
 cout << "Quel est votre nom ? >";
 string nom;
 cin >> nom;

 cout << "Quel est votre age ? >";
 unsigned int age;
 cin >> age;
 
 if(age >= 18)
   cout << nom << ", tu es majeur(e)." << endl;
 else
   cout << nom << ", tu es mineur(e)." << endl;
 return 0;
}