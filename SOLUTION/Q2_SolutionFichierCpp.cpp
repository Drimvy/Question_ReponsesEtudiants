//--- librairie standart ---//
#include <iostream>		// lib entr�e - sortie  
#include <iomanip>

//-- utilisation du namespace std pour limitation �criture --// 
using namespace std; 

//-- d�claration de prototype --//
void Select_Var_Flottant(float &valRetour);

//-- programme principale --// 
int main()
{
	//--- d�claration de variable interne ---//
	float varF1, varF2;

	//-- appel de fonction --//
	Select_Var_Flottant(varF1);
	Select_Var_Flottant(varF2);

	//-- message utilisateur --// 
	//printf("soustraction mode affichage flottant : X - Y  = %1.3e - %1.3e = %1.3e", var_f_1, var_f_2, (var_f_1 - var_f_2));
	cout.precision(3); 
	cout << setiosflags(ios::scientific) << "soustraction mode affichage flottant : X - Y  = " << varF1 << " - " << varF2 << " = " << (varF1 - varF2); 

	return 0;
}

void Select_Var_Flottant(float &valRetour)
{
	//--- fonction pour la lire la saisie d'un cha�ne de caract�re ---//
	cin >> valRetour;
}
