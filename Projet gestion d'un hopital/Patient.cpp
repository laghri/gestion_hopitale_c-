#include "Header.h"

Patient::Patient(string N , string p, string s, int a):Personne(N,p,a)
{
	type = s;
}

ostream& operator<<(ostream& F, Patient& A)
{
	Personne q = A;
	F << "P------->" << q << endl;
	F << "           -nature du visit :" << A.type << endl;
	return F;
}
