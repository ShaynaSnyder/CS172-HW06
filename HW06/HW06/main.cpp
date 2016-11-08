//Shayna Snyder
//CS172
//HW06
//11/8/16
#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>
#include <fstream>

using namespace std;

int main()
{
    //13.1 Create a text file
    //fstream object
    fstream inout;
    //open a file
    inout.open("Exercise12_1.txt");
    //if statements determine if the file already exists
    if(inout.fail())
    {
        //creates a file if it does not already exist
        inout.open("Exercise12_1.txt", ios::out);
    }
    else
    {
        //appends to the file if it already exists
        inout.open("Exercise12_1.txt", ios::out | ios::app);
    }
    //writes 100 random integers into file
    for(int i=0; i<100; i++)
    {
        inout << rand()%1000 << setw(1);
    }
    //closes stream
    inout.close();
    
    
    //13.2 Count Characters
    //Write a program that prompts the user to enter a file name and displays the number of characters in the file.
    
    
    //13.5 Baby name popularity ranking
    //pg. 519
    
    
    //14.3 The Circle class
    //Implement the relational operators (<, <=, ==, !=, >, >=) in the Circle class in Listing 10.9, CircleWithConstantMemberFunctions.h, to order the Circle objects according to their radii.
    
    
    //14.7 Math: The Complex class
    //pg. 556
    
    
    return 0;
}
