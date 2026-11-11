#include "Logger.h"
#include <iostream>
#include <fstream>

using namespace std;

// Initialisation de l'instance
Logger* Logger::instance = nullptr;

// Constructeur privé
Logger::Logger() {}

// Récupération de l'instance unique
Logger* Logger::getInstance() {
    if (instance == nullptr) {
        instance = new Logger();
    }

    return instance;
}

// Écriture dans le journal
void Logger::log(const string& message) {
    ofstream fichier("journal.txt", ios::app);

    if (fichier.is_open()) {
        fichier << message << endl;
        fichier.close();
    }

    cout << "[LOG] " << message << endl;
}
