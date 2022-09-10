#pragma once
class Hopital
{
	Medcin** TableM;
	Infirmier** TableI;
	Patient** TableP;
	string adress;
	string Nom;
	int nM;
	int nP;
	int nI;
	//string  TableSalle[10];
public:

	Hopital(string, string);
	void AjouterM();
	void AjouterP();
	void AjouterI();
	friend ostream& operator <<(ostream& F, Hopital& O);
	void creeParticipant();


};

