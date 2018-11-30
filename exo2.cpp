#include <iostream>
#include <vector>
#include <utility>

using namespace std;

const unsigned KHARUHI (1);

unsigned abso (const int x) {
    return (x < 0) ? -x : x;
}

int decalageDeCePays (const unsigned pays, const vector<pair<unsigned, int>> & decalageParPays) {
    for (pair<unsigned, int> paire : decalageParPays)
        if (paire.first == pays)
            return paire.second;
    return -13;
}

int main() {

    vector<unsigned> decalages;
    unsigned decalageHaruhi (0);
    unsigned decalageJoseph (0);

    pair<unsigned, int> decalageDuPays;
    vector<pair<unsigned, int>> decalageParPays;

    unsigned nbPays;
    unsigned nbVoyages;

    cin >> nbPays;

    for (unsigned i (0); i < nbPays; ++i) {
        unsigned pays;
        int decalage;
        cin >> pays >> decalage;
        decalageDuPays = make_pair (pays, decalage);
        decalageParPays.push_back(decalageDuPays);
    }

    cin >> nbVoyages;

    for (unsigned i (0); i < nbVoyages; ++i) {
        unsigned perso, pays;
        cin >> perso >> pays;
        (perso == KHARUHI) ? decalageHaruhi = abso (decalageDeCePays (pays, decalageParPays)) : decalageJoseph = abso (decalageDeCePays (pays, decalageParPays));
        decalages.push_back(decalageHaruhi + decalageJoseph);
      }

    for (unsigned dec : decalages)
        cout << dec << endl;

    return 0;
}

