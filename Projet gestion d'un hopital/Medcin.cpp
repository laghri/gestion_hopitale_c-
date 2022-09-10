#include "Header.h"

Medcin::Medcin():Personne()
{
	speatialite = "Generale";

}

Medcin::Medcin(string N, string p, string S, int a):Personne(N,p,a)
{
	speatialite = S;
}

ostream& operator<<(ostream& F, Medcin& M)
{
	Personne P = M;
	F << "M---->" << P << endl;
	F << "      -speatialite:" << M.speatialite << endl;
	return F;


}
