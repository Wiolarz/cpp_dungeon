/*

 */

#include <iostream>
#include <random>

#include "manager.h"


int choice ()
{
    int input;
    std::cin >> input;  // if user doesn't enter integer the default input will be 0
    return input;
}
int dice (int size)
{
    // author: https://stackoverflow.com/a/13445752/17491940
    std::random_device dev;
    std::mt19937 rng(dev());
    std::uniform_int_distribution<std::mt19937::result_type> dist6(1,size); // distribution in range [1, 6]

    return dist6(rng);
}