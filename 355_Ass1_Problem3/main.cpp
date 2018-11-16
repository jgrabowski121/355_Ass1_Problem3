//
//  main.cpp
//  355_Ass1_Problem3
//
//  Created by Justin Grabowski on 11/16/18.
//  Copyright © 2018 Justin Grabowski. All rights reserved.
//
// This file tests the safety of the enum type in c++
//  enums can usuallly be coeced into integers

#include <iostream>

int main(int argc, const char * argv[]) {
 
    // Create to enums
    enum day {Sunday, Monday, Tuesday, Wednessday, Thursday, Friday, Saturday};
    enum animal {Ardvark, Bat, Cat, Dog, Elephant};
    
    //Test 1: two enum types with the same defined constant
    // enum feline {Lion, Bobcat, Tiger, Cat }; // Not allowed
    enum BigCat {Lion, Bobcat, Tiger};
    
    
    
    //Test 2: Add a Dog to a Sunday
    /*
    try {
        day M = Monday;
        M = Ardvark; // Should fail
    } catch (std::exception& e) {
        std::cout << e.what();
    }
    */
    
    //Test 3: Assign an enum to an iteger
    try
    {
        int myInt = 4;
        myInt = Monday;
    }
    catch (std::exception& e)
    {
        std::cout << e.what();
    }
    
    //Test 4: Increment an enum
    /*
    try {
        day M = Monday;
        M++;
    }
    catch (std::exception& e)
    {
        std::cout << e.what();
    }
    */
    
    //Test 5: Assign an enum to a double (coerce it)
    try {
        day M = Monday;
        double d = M;
    }
    catch (std::exception& e)
    {
        std::cout << e.what();
    }
    
    //Test 6: Assign an int to an enum
    /*
    try {
        day M = Monday;
        M = 4;
    }
    catch (std::exception& e)
    {
        std::cout << e.what();
    }
    */
    
    
    //Test 7: Perform division on an enum
    try {
        day M = Monday;
        int i = M / 10; // Allowed
    }
    catch (std::exception& e)
    {
        std::cout << e.what();
    }
    
    //Test 8: Define an enum and int of the same name
    /*
    try {
        day M = Monday;
        int M = 10;
        
        M++;
    }
    catch (std::exception& e)
    {
        std::cout << e.what();
    }
    
    */
    
    //Test 9: Double coerced into an enum
    // Assign an enum to a double (coerce it)
    try {
        double d = 10.5;
        d = Bat; // This is allowed
    }
    catch (std::exception& e)
    {
        std::cout << e.what();
    }
    
    //Test 10: Add two enums together
    /*
    try {
        BigCat Liger = Lion + Tiger;
       
    }
    catch (std::exception& e)
    {
        std::cout << e.what();
    }
    */
    //explicit cast in to animal
    try
    {
        int myInt = 4;
        static_cast<animal>(myInt);
    }
    catch (std::exception& e)
    {
        std::cout << e.what();
    }
    
    //add animal to int
    try
    {
        animal bingo = Dog;
        int i = 2 + bingo;
    }
    catch (std::exception& e)
    {
        std::cout << e.what();
    }
    
    return 0;
}
