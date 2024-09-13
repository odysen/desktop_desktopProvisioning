#include <iostream>
#include "cli.h"

void cli::log(std::string message) {
    std::cout << "[LOG] ";
    std::cout << message << std::endl;
}

void cli::error(std::string message) {
    std::cout << "[ERR] ";
    std::cout << message << std::endl;
}

void cli::okay(std::string message) {
    std::cout << "[OK] ";
    std::cout << message << std::endl;
}