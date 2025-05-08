// Copyright (c) 2025. Joseph Wondimagnehu. All rights reserved.
//
// Created by: Joseph Wondimagnehu
// Date: May 8, 2025
/* This program finds the area of a triangle
using another function, given the base and
height from the user. */

/* Include the iostream library for
input and output functionalities. */
#include <iostream>
/* Include the string library to
adhere to style guidelines. */
#include <string>

// Define a function to calculate the area of a triangle.
void CalcArea(float base, float height) {
    // Set the area result to the triangle area formula.
    float areaResult = (1.0 / 2.0) * base * height;

    // Display the area result to the user.
    std::cout << "\nThe area of the triangle "
    << "is " << areaResult << "cm^2.\n";
}

// Runs the main function.
int main() {
    // Declare the user base variable as a string.
    std::string userBaseStr;
    // Declare the user height variable as a string.
    std::string userHeightStr;

    // Ask the user for the base in cm.
    std::cout << "\nEnter the base of the triangle (cm): ";
    // Store the input in the user base string variable.
    std::cin >> userBaseStr;

    // Try to validate the user base input.
    try {
        // Attempt to convert the user base string into a float.
        float userBaseFloat = std::stof(userBaseStr);
        // Ask the user for the height in cm.
        std::cout << "Enter the height of the triangle (cm): ";
        // Store the input in the user height string variable.
        std::cin >> userHeightStr;

        // Try to validate the user height input.
        try {
            // Attempt to convert the user height string into a float.
            float userHeightFloat = std::stof(userHeightStr);
            /* Check if the user entered a base
            and height greater than zero. */
            if ((userBaseFloat > 0) && (userHeightFloat > 0)) {
                /* Call the function to calculate
                the area of the user's triangle. */
                CalcArea(userBaseFloat, userHeightFloat);
            } else {
                /* Otherwise, the user entered zero
                for the base, height, or both. */
                /* Display to the user that they must enter
                a base and height greater than zero. */
                std::cout << "\nBase and height must be "
                << "greater than zero.\n";
            }
        }
        /* Runs if std::stof() could not convert the
        user's height string input into a float. */
        catch (std::invalid_argument) {
            /* Display to the user that they did not
            enter a valid number for the height. */
            std::cout << "\n" << userHeightStr
            << " is not a valid number.\n";
        }
    }
    /* Runs if std::stof() could not convert the
    user's base string input into a float. */
    catch (std::invalid_argument) {
        /* Display to the user that they did not
        enter a valid number for the base. */
        std::cout << "\n" << userBaseStr
        << " is not a valid number.\n";
    }
}
