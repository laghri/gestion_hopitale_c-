#pragma once
class Infirmier:public Personne
{
	string speatia;
public:
	Infirmier();
	Infirmier(string, string, string, int);
	friend ostream& operator <<(ostream& F, Infirmier& I);

};

