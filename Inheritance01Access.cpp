/*
 * =====================================================================================
 *
 *       Filename:  Inheritance01Access.cpp
 *
 *    Description:  Basic Inheritance Access
 *
 *        Created:  26/07/2020
 *
 *         Author:  Maikol Guzmán mikeguzman@gmail.com
 *   Organization:  Universidad Nacional de Costa Rica
 *
 * ====================================================================================
 */

#include <iostream>  // allows program to output data to the screen

struct Base {
public:
    int numA = 0;
protected:
    int numB = 1;
private:
    int numC = 2;
};

struct Derived: public Base {
    Derived() {
        numA=3;
        numB=3;
    }

public:
    int numD = 3;

protected:
    int numE = 4;

private:
    int numF = 5;
};

// function main begins program execution
int main(int argc, const char *argv[]) {
    std::cout << "Welcome to the UNA!" << std::endl;  // display message

    Derived derived;
    derived.numA=100;
    std:: cout << derived.numA<< std::endl;

    return 0;  // indicate that program ended successfully
}  // end function main

