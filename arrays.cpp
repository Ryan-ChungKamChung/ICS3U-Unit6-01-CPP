// Copyright (c) 2020 Ryan Chung Kam Chung All rights reserved
//
// Created by Ryan Chung Kam Chung
// Created in January 2021
// Program generates random numbers and finds the average

#include <iostream>
#include <iomanip>
#include <random>


int main() {
    // Generates 10 random numbers and finds average

    int random_numbers[10];
    int random_number;
    int loop_counter = 0;
    int loop_counter2 = 0;
    double sum = 0;
    double average = 0;

    for (loop_counter; loop_counter < 10; loop_counter++) {
        std::random_device rseed;
        std::mt19937 rgen(rseed());  // mersenne_twister
        std::uniform_int_distribution<int> idist(1.0, 100.0);
        random_number = idist(rgen);

        random_numbers[loop_counter] = random_number;

        if (loop_counter < 9) {
            std::cout << random_numbers[loop_counter] << " ";
        } else {
            std::cout << random_numbers[loop_counter] << std::endl;
        }
    }

    for (loop_counter2 = 0; loop_counter2 < 10; loop_counter2++) {
        sum += random_numbers[loop_counter2];
    }

    average = sum / 10;

    std::cout << std::setprecision(1) << std::fixed << average << std::endl;
}
