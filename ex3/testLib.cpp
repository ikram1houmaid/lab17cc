#include <iostream>
#include "Logger.h"
#include "Config.h"

using namespace std;

int main() {

    cout << "===== TEST DE LA BIBLIOTHEQUE UTIL =====" << endl;

    // 1. Utilisation de Logger
    Logger* logger = Logger::getInstance();

    logger->log("Demarrage du programme");
    logger->log("Test de la bibliotheque libutil");

    // 2. Utilisation de Config
    Config config("config.json");

    string application = config.getValue("application");
    string version = config.getValue("version");
    string author = config.getValue("author");

    cout << "\n===== CONFIGURATION =====" << endl;

    cout << "Application : " << application << endl;
    cout << "Version : " << version << endl;
    cout << "Auteur : " << author << endl;

    logger->log("Fin du programme");

    return 0;
}
