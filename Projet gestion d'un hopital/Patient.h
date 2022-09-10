#pragma once
class Patient:Personne
{
	string type;
public:
	Patient(string, string, string, int);
	friend ostream & operator << (ostream& , Patient& );
};

