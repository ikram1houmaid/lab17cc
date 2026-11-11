#include "Config.h"
#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

Config::Config() {
    fichier = "config.json";
}

Config::Config(const string& fichier) {
    this->fichier = fichier;
}

string Config::getValue(const string& cle) {
    ifstream file(fichier);

    if (!file.is_open()) {
        cerr << "Erreur : impossible d'ouvrir "
             << fichier << endl;
        return "";
    }

    string ligne;

    while (getline(file, ligne)) {
        size_t position = ligne.find("\"" + cle + "\"");

        if (position != string::npos) {
            size_t deuxPoints = ligne.find(":", position);

            if (deuxPoints != string::npos) {
                size_t debut = ligne.find("\"", deuxPoints);

                if (debut != string::npos) {
                    size_t fin = ligne.find("\"", debut + 1);

                    if (fin != string::npos) {
                        return ligne.substr(
                            debut + 1,
                            fin - debut - 1
                        );
                    }
                }
            }
        }
    }

    return "";
}
