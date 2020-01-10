//
// Created by Shweta on 1/10/2020.
//

#ifndef CHECK_PERMUTATION_PERMUTATION_H
#define CHECK_PERMUTATION_PERMUTATION_H
bool isPerm(std::string first, std::string second){
    //sort the string using sort from algorithm library
    std::sort(first.begin(), first.end());
    std::sort(second.begin(), second.end());
    if(first == second)
        return true;
    else
        return false;
}
#endif //CHECK_PERMUTATION_PERMUTATION_H
