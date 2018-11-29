#include <iostream>
#include <vector>

using namespace std;

bool isArnaque (const unsigned prixInit, const vector<unsigned> & prixInternet) {
	unsigned nbPrixEnDessous (0);
	for (unsigned prix : prixInternet) {
		if (prix < prixInit) {
			++nbPrixEnDessous;
		}
	}
	return (nbPrixEnDessous >= 3);
}

int main () {

        unsigned prixInit;
        unsigned nbPrix;
        vector<unsigned> prixInternet;

        cin >> prixInit;
	cin >> nbPrix;

	for (unsigned i (0); i < nbPrix; ++i) {
		unsigned prixInternetActuel;		
		cin >> prixInternetActuel;
		prixInternet.push_back (prixInternetActuel);
	}

	for (unsigned prix : prixInternet) {
		cout << prix << endl ;
	}

	(isArnaque (prixInit, prixInternet)) ? cout << "ARNAQUE !" : cout << "Ok bon voyage, bisous, n'oublie pas de m'envoyer des photos !";
        
        return 0;
}
