// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Marwan Mashaly
// Created on: October 2019
// This program shows all rgb colour combinations

#include <iostream>


int main() {
    // this function uses a nested loop
    int counter1;

    // process & output
    for (counter1 = 1000; counter1 < 2001; counter1 ++) {
        std::cout <<  counter1 << " ";
        if (counter1 % 5 == 0) {
            std::cout << "";
            std::cout << "\n";
        }
    }
}
