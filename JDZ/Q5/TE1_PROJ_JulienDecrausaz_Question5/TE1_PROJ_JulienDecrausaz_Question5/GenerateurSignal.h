#ifndef GENERATEURSIGNAL_H
#define GENERATEURSIGNAL_H

#include "Signal.h"

class GenerateurSignal{

private :

	//Attributs
	int m_Frequence;
	int m_Amplitude;

	//M�thodes
	int ChoisirSignal();
	void ChoisirFrequence();
	void ChoisirAmplitude();

	//Composition
	Signal monSignal;
};


#endif // !GENERATEURSIGNAL_H

