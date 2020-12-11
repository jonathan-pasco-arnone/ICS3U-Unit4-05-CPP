// Copyright (c) 2020 Jonathan Pasco-Arnone all rights reserved
//
// Created by Jonathan Pasco-Arnone
// Created on December 2020
// This program adds multiple numbers together

#include <iostream>

int main() {
    // This function takes an optional amount of numbers to be added together

    std::string counterStr;
    std::string numberStr;
    int counter;
    int number;
    int answer = 0;

    std::cout << "" << std::endl;
    std::cout << "This program adds as many numbers as you want" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "How many numbers would you like to add: ";
    std::cin >> counterStr;
    std::cout << "" << std::endl;

    try {
            counter = std::stoi(counterStr);
            while (counter > 0) {
                counter = counter - 1;
                std::cout << "Enter a number to add: ";
                std::cin >> numberStr;
                try {
                    number = std::stoi(numberStr);
                    if (!(number > 0)) {
                        continue;
                    } else {
                        answer = answer + number;
                    }
                } catch (std::invalid_argument) {
                    continue;
                }
            }
            std::cout << "The sum is " << answer << std::endl;
    } catch (std::invalid_argument) {
        std::cout << "Invalid Input, Try Again";
    }
}
