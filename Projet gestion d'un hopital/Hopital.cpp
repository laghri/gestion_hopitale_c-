#include "Header.h"

Hopital::Hopital(string n, string a)
{
	adress = a;
	Nom = n;
	TableM = new Medcin * [10];
	TableI = new Infirmier * [10];
	TableP = new Patient * [10];
	nM = 0;
	nP = 0;
	nI = 0;
	
}

void Hopital::AjouterM()
{
	string N, P, sp;
	int a;
	cout << "Bonjour veillez donner les information de ce medecin(e):" << endl;
	cout << "    -Donner le Nom:" << endl;
		cin >> N;
	cout << "    -Donner le prenom:" << endl;
		cin >> P;
    cout << "    -Donner l'age :" << endl;
		cin >> a;
	cout << "    -Donner la spetacialite:" << endl;
		cin >> sp;
		Medcin *M=new Medcin(N, P, sp, a);
		TableM[nM] = M;
		nM++;
		cout << "Merci ce Medecin a ete ajouter  -_-" << endl;

}

void Hopital::AjouterP()
{
	string N, P, sp;
	int a;
	cout << "Bonjour veillez donner les information de ce Patient(e):" << endl;
	cout << "    -Donner le Nom:" << endl;
	cin >> N;
	cout << "    -Donner le prenom:" << endl;
	cin >> P;
	cout << "    -Donner l'age :" << endl;
	cin >> a;
	cout << "    -Donner la nature de visite:" << endl;
	cin >> sp;
	Patient *M=new Patient(N, P, sp, a);
	TableP[nP] = M;
	nP++;
	cout << "Merci ce Patient a ete ajouter  -_-" << endl;
}

void Hopital::AjouterI()
{
	string N, P, sp;
	int a;
	cout << "Bonjour veillez donner les information de ce Infermier(e):" << endl;
	cout << "    -Donner le Nom:" << endl;
	cin >> N;
	cout << "    -Donner le prenom:" << endl;
	cin >> P;
	cout << "    -Donner l'age :" << endl;
	cin >> a;
	cout << "    -Donner la spetacialite:" << endl;
	cin >> sp;
	Infirmier *M=new Infirmier(N, P, sp, a);
	TableI[nM] = M;
	nI++;
	cout << "Merci ce Infirmier a ete ajouter  -_-" << endl;
}

void Hopital::creeParticipant()
{
	string N, P;
	cout << "donner le nom et le prenom de ce participant:" << endl;
	cin >> N;
	cin >> P;
	cout << "une minute s'il vous plait pour verifier des information" << endl;
	for (int i = 0; i < nM; i++) {
		int a = 0;
		if (TableM[i]->getN() == N && TableM[i]->getP() == P) {
			a = 1;
			cout << "c'est Le medecin:" << N << P << endl;
			string sall;
			cout << "D'accord maintenant dans les info sur la salle" << endl;
			cin >> sall;
			participant A(sall, TableM[i]);
		}

		if (a == 0) {
			for (int j = 0; j < nI; j++) {
				int k = 0;
				if (TableI[j]->getN() == N && TableI[j]->getP() == P) {
					k = 1;
					cout << "c'est L'infermier:" << N << P << endl;
					string sall;
					cout << "D'accord maintenant dans les info sur la salle" << endl;
					cin >> sall;
					participant A(sall, TableI[j]);
				}
				else if (k == 0) {
					cout << "Desole" << endl;
				}
			}

		}
	}
}

	


ostream& operator<<(ostream& F, Hopital& O)
{
	cout << "---------------------------------Hopital:" << O.Nom << "Adresse:" << O.adress<<"-------------------------" << endl;
	
	cout << "                ----------------------Medecins-------------------" << endl;
	for (int i = 0; i < O.nM; i++) {
		F << *(O.TableM[i]) << endl;
	}
	cout << "                ----------------------Infirmier-------------------" << endl;
	for (int k = 0; k < O.nI; k++) {
		F << *(O.TableI[k]) << endl;
	}
	cout << "                ----------------------Patient-------------------" << endl;
	for (int j = 0; j < O.nP; j++) {
		F << *(O.TableP[j]) << endl;
	}
	return F;
}
