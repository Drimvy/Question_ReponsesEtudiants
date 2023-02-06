#ifndef SIGNAL_H
#define SIGNAL_H

class Signal {

public :

	//Attributs
	int m_TablEch[20];
	int m_PeriodeEchantillonage;

	//M�thodes
	void CalculerEchantillons(int Amplitude, int DutyCycle);
	void AfficherEchantillons();


private :

	int GetPeriodeExh();


};


#endif // !SIGNAL_H
