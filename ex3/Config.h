#ifndef CONFIG_H
#define CONFIG_H

#include <string>

class Config {
private:
    std::string fichier;

public:
    Config();
    Config(const std::string& fichier);

    std::string getValue(const std::string& cle);
};

#endif
