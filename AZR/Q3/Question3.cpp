/* Lib standards */
#include <iostream>
using namespace std;

/* Prototypes */
void Select_Var_Flottant(float &valRetour);


int main()
{
	/* Variables locales au main */
	float var_f_1, var_f_2;

	/* Appels de fonctions */
	Select_Var_Flottant(var_f_1);
	Select_Var_Flottant(var_f_2);

	/* Message utilisateur */
	cout << "Soustracton X - Y = " << var_f_1 << "-" << var_f_2 << " = " << (var_f_1- var_f_2);

}

void Select_Var_Flottant(float &valRetour)
{
	/* Lire saisie */
	cin >> valRetour;
}