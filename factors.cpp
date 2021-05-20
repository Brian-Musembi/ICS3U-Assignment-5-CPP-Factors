// Copyright (c) 2021 Brian Musembi, All rights reserved
//
// Created by Brian Musembi
// Created on May 2021
// This program finds the factors of any number inputted by the user

#include <iostream>
#include <string>


int main() {
    // This function finds the factors of any number inputted by the user

    std::string numberString;
    int number;
    int loopCounter = 0;

    std::cout << "This program finds the factors of any number"
    << "  inputted by the user." << std::endl;

    // Process
    while (true) {
        std::cout << "Input any positive integer: ";
        std::cin >> numberString;

        try {
            number = std::stoi(numberString);
            if (number < 0) {
                throw std::invalid_argument("");
            }

            break;
        } catch (std::invalid_argument) {
            std::cout << numberString << " isn't a valid input! "
                      << "Please try again." << std::endl;
        }
    }

    std::cout << "The factors of " << number << " are: ";

    for (loopCounter = 1; loopCounter < number + 1; loopCounter++) {
        if (number % loopCounter == 0) {
            if (loopCounter < number) {
                if (loopCounter == 1) {
                    std::cout << "[";
                    }

                std::cout << loopCounter << ", ";
        } else {
            std::cout << loopCounter << "";
                }
        }
    }
    std::cout << "]";
}
