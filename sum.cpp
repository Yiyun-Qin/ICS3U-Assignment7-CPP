// Copyright (c) 2022 Yiyun Qin All rights reserved
//
// Created by Yiyun Qin
// Created in June 2022
// This is a math program, calculating the sum of numbers in the list

#include <iostream>
#include <string>
#include <list>

float Total(std::list<float> numberList) {
    // This function calculates the sum

    // process & output
    float total = 0;
    for (float aNumber : numberList) {
        total = total + aNumber;
    }
    return total;
}


int main() {
    // This function does try and catch
    std::string aNumberString;
    std::list<float> numberList;
    float aNumber;
    float answer;

    // input
    std::cout << "This program calculates the sum of the numbers you entered."
    << std::endl;
    std::cout << "Please enter 1 number at a time. Enter -1.0 to end."
    << std::endl;

    // process
    std::cout << "" << std::endl;
    while (1) {
        std::cout << "Please enter a number: ";
        std::cin >> aNumberString;
        try {
            aNumber = std::stof(aNumberString);
            if (aNumberString != "-1.0") {
                numberList.push_back(aNumber);
            } else {
                break;
            }
        } catch (std::invalid_argument) {
            std::cout << "Invalid number!" << std::endl;
        }
    }
    answer = Total(numberList);
    std::cout << "\nThe sum of all numbers is " << answer << ".";
    std::cout << "\n\nDone." << std::endl;
}
