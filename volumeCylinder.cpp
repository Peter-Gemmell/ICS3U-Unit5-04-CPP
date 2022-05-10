// Copyright (c) 2022 Peter Gemmell All rights reserved

// Created by Peter Gemmell
// Created on March 2022
// This program calculates the cost of pizza using constants

#include <iostream>
#include <string>
#include <cmath>

float volumeCylinder(float radius, float height) {
    // calculate volume
    float volume;

    // process
    volume = M_PI * (radius * radius) * height;

    // output
    return volume;
}

int main() {
    // this function gets the user input

    std::string radiusString;
    std::string heightString;
    float radiusUser;
    float heightUser;
    float volumeCylinderRounded;
    // input
    std::cout << "Enter the radius of cylinder in cm : ";
    std::cin >> radiusString;
    std::cout << "Enter the height of cylinder in cm : ";
    std::cin >> heightString;
    try {
        radiusUser = std::stof(radiusString);
        heightUser = std::stof(heightString);
        // call functions
        volumeCylinderRounded = volumeCylinder(radiusUser, heightUser);
        std::cout << "The volume of the cylinder with a radius of " << radiusUser
        << " and height of " << heightUser << " is "
        << volumeCylinderRounded << " cm³." << std::endl;
    } catch (std::invalid_argument) {
        std::cout << "Invalid number entered, please try again." << std::endl;
    }
    std::cout << "\nDone." << std::endl;
}
