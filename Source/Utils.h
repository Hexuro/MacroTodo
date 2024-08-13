#pragma once

#define elif else if

#include <iostream>
#include <string>
#include <cstdlib>
#include <sstream>

std::string GetStringFromCin() {
    while (true) {
        std::string input;
        std::getline(std::cin, input);
        if (!std::cin.fail()) {
            return input;
        }
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Invalid input. Please enter a string: ";
    }
}

int GetIntFromCin() {
    while (true) {
        std::string input;
        std::getline(std::cin, input);
        std::stringstream stream(input);
        int number;
        if (stream >> number && stream.eof()) {
            return number;
        }
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Invalid input. Please enter an integer: ";
    }
}