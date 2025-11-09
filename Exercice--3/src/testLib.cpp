#include "Logger.h"
#include "Config.h"

int main() {
    Logger::getInstance().log("Message test");
    std::string valeur = Config::getInstance().get("clé");
    return 0;
}
