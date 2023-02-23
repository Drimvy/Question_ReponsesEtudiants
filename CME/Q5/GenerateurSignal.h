#ifndef GenerateurSignal_h
#define GenerateurSignal_h
#inculde "Signal.h"

class GenerateurSignal {

public:

	
	int ChoisirSignal();
	void ChoisirFrequence();
	void ChoisirAmplitude();
	GenerateurSignal();
	~GenerateurSignal();

protected:

private:
	int m_Frequence;
	int m_Amplitude;
	Signal MySignal;
	

};

#endif // GenerateurSignal_h
