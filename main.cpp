// Copyright (c) 2021 Daniel Pawelko All rights reserved.
//
// Created by: Daniel Pawelko
// Created on: Dec 2021
// Better Guessing Game

#include <iostream>
#include <random>

int main() {
    // main function for creating guessing game
    // define variables
	std::random_device rseed;
    std::mt19937 rgen(rseed());
    std::uniform_int_distribution<int> idist(0,9);
    const int RANDOM_NUM = idist(rgen);
	int guess;

    // process/output/input
	while (true) {
		std::cout << "What is your guess: " << std::endl;
		std::cin >> guess;

		if (guess == RANDOM_NUM) {
			std::cout << "You guess CORRECT, the number is " << RANDOM_NUM << std::endl;
			break;
		}
		std::cout << "Incorrect :(" << std::endl;
	}

    // output finished
    std::cout << std::endl;
    std::cout << "Done." << std::endl;
}
