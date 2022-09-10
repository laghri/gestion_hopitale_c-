#pragma once
class participant
{
	string infoSalle;
	Personne* p;
public:
	
	participant(string,Personne*d);
	participant(participant const&);
	participant& operator=(participant const&);
	~participant();
	friend ostream &operator <<(ostream& F, participant& S);



};

