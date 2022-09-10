#include"Header.h"

Personne::Personne()
{
	this->Non = "laghrissi";
	this->prenom = "ahmed";
	this->age = 20;

}

Personne::Personne(string N, string P, int A)
{
	this->age = A;
	this->prenom = P;
	this->Non = N;
}

Personne::Personne(Personne const& p) {

	this->prenom = p.prenom;
	this->age = p.age;
	this->Non = p.Non;

}

Personne& Personne::operator=(Personne& p)
{
	this->age = p.age;
	this->prenom = p.prenom;
	this->Non = p.Non;
	return p;
}



string Personne::getN()
{
	return this->Non;
}

string Personne::getP()
{
	return this->prenom;
}

int Personne::getA()
{
	return this->age;
}

void Personne::SetA(int a)
{
	this->age = a;

}

void Personne::setP(string p)
{
	this->prenom = p;
}

void Personne::setN(string n)
{
	this->Non = n;
}

bool Personne::operator==(Personne A)
{
	if (this->Non == A.Non && this->prenom == A.prenom && this->age == A.age)

		return true;
	else return false;
}


ostream& operator <<(ostream& flux, Personne& p)
{
	flux << "[" << p.Non << "," << p.prenom << "," << p.age << "]";
	return flux;
}

ostream& operator>>(ostream& flux, Personne& P)
{
	cout << "donner le nom" << endl;
	cin >> P.Non;
	cout << "donnerv le prenom" << endl;
	cin >> P.prenom;
	cout << "donner l'age" << endl;
	cin >> P.age;
	return flux;
}


