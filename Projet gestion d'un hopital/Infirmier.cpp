#include "Header.h"

Infirmier::Infirmier():Personne()
{
	speatia = "Normal";
}

Infirmier::Infirmier(string N, string P, string s, int a):Personne(N,P,a)
{
	speatia = s;
}

ostream& operator<<(ostream& F, Infirmier& I)
{
	Personne P = I;
	F << "I------>" << P<< endl;
    F <<"         speatialite:" << I.speatia << endl;
	return F;

}
