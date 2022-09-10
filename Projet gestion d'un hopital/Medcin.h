#pragma once
class Medcin:public Personne
{
	string speatialite;
public:
	Medcin();
	Medcin(string, string,string, int);
	friend ostream & operator <<(ostream& F, Medcin& M);

};

