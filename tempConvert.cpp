// Copyright (c) 2025 Atri Sarker All rights reserved.
// .
// Created By: Atri S
// Date: May 5, 2025
// Program that asks the user for a temperature value in degrees Celsius.
// # It then displays the equivalent value in degrees Fahrenheit

#include <iostream>
#include <cstdio>
#include <string>

// DEFINE fahrenheit()
void Fahrenheit() {
        // Get the user's input as a string
        // \u00b0 is the unicode sequence for the degree symbol
        std::string userInput;
        std::cout << "Enter the temperature (\u00b0C): ";
        std::getline(std::cin, userInput);

        try {
            // Convert the user's input to a float
            float degreesCelsius = std::stof(userInput);

            // CONVERT FROM CELSIUS TO FAHRENHEIT
            float degreesFahrenheit = (9.0 / 5.0) * degreesCelsius + 32;

            // Display the result
            // \u00b0 is the unicode sequence for the degree symbol
            // Values are rounded to 2 decimal places
            printf("%.2f\u00b0C is equal to ", degreesCelsius);
            printf("%.2f\u00b0F\n", degreesFahrenheit);
        } catch (std::invalid_argument) {
            // Tell the user that their input wasn't a number
            std::cout << userInput;
            std::cout << " is not a number.\n";
        }
}
int main() {
    // CALL Fahrenheit()
    Fahrenheit();
    // Program completion message
    printf("Thanks for playing!\n");
}
