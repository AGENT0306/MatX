//
// Created by reitr on 3/15/2025.
//
#include "MatX.h"
#include <iostream>

int main() {
    SizeX test;
    test = {1,2,4};
    SizeX* test2 = new SizeX({2,4,5,67});
    std::cout << test.length() << '\n' << test2->length();
}