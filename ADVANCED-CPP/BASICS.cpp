// ADVANCED-CPP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>  //Preprocess Statemet 
#define print cout<<

void fun();//function is decleared

#if 1 //the following statement will include or exclude statements based on the code.
int main()
{
    fun();//calling a method defined in CPP BASIC.2
    std::print "Hello World!\n"; // replacing the Print with cout<<

#include "Endbrace.h"  // Proving that the Whole text in the Endbrace.h is pasted here
#endif
 