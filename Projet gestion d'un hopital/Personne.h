#pragma once
class Personne
{
protected:
	string Non;
	string prenom;
	int age;
	//constructeur
public:
	Personne();
	Personne(string, string, int);
	Personne(Personne const&);
	Personne& operator =(Personne&);
	//getter et setter
	string getN();
	string getP();
	int getA();
	void SetA(int);
	void setP(string);
	void setN(string);
	bool operator ==(Personne A);
	friend ostream& operator <<(ostream& flux, Personne& p);
	friend ostream& operator>>(ostream& flux, Personne& P);



};


