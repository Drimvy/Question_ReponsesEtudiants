#ifndef UTILISATEUR_H 
#define UTILISATEUR_H 

class GenSignal; 

class User
{
	public:

		//-- attribut --//
		GenSignal* pt_GenSignal; 


		//-- m�thode --// 
		void ConfigurerGen();
		void ObserverSignal();

}; 
#endif 


