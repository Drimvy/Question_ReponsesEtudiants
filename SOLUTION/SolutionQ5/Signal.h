#ifndef SIGNAL_H 
#define SIGNAL_H 

class Signal 
{
	public:

		//-- attribut --// 

		//-- m�thode --// 
		virtual void CaclulerEch(int A, int DC); 
		void AfficherEch(); 

	protected:
		//-- attribut --// 
		int m_tbEch[20]; 
		int m_periodeEch; 

		//-- m�thode --// 

	private : 
		//-- m�thode --// 
		int GetPeriodeEch(); 

};


#endif 


