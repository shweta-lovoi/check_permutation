//given two strings, write a method to decide if one is a permutation of the other
#include <iostream>
#include <algorithm>
#include <string>
#include "permutation.h"

int main() {
    std::string first = "";
    std::string second = "";

    std::cout << "Enter the first word: ";
    std::cin >> first;
    std::cout << "Enter the second word: ";
    std::cin >> second;

    if(isPerm(first, second))
        std::cout << "String 1 is permutation of string 2!!!!";
    else
        std::cout << "String 1 is NOT permutation of string 2.";

    return 0;
}
