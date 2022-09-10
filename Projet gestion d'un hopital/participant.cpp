#include "Header.h"

participant::participant(string s, Personne* d)
{
	infoSalle = s;
	p = d;

}

participant::participant(participant const& a)
{
	infoSalle = a.infoSalle;
	p = a.p;
}

participant& participant::operator=(participant const& A)
{
	infoSalle = A.infoSalle;
	p = A.p;
	return *this;
}

participant::~participant()
{

}

ostream& operator<<(ostream& F, participant& S)
{
	F << "je suis" << *(S.p) << " un participant dans s : " << S.infoSalle << endl;
	return F;
}
