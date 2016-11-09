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
    fstream inout1;
    //open a file
    inout1.open("Exercise13_1.txt");
    //if statements determine if the file already exists
    if(inout1.fail())
    {
        //creates a file if it does not already exist
        inout1.open("Exercise13_1.txt", ios::out);
    }
    else
    {
        //appends to the file if it already exists
        inout1.open("Exercise13_1.txt", ios::out | ios::app);
    }
    //writes 100 random integers into file
    for(int i=0; i<100; i++)
    {
        inout1 << rand()%1000 << " ";
    }
    //closes stream
    inout1.close();
    
    
    //13.2 Count Characters
    //Write a program that prompts the user to enter a file name and displays the number of characters in the file.
    //declaring string variable for the file name
    string filename;
    //entering user input into file name
    cout << "Enter a file name: ";
    cin >> filename;
    //if statements determine if the file exists
    fstream inout2(filename.c_str());
    if(inout2.fail())
        cout << filename << " does not exist." << endl;
    else
    {
        //if the file exists the number of characters in the file is displayed
        char s[1000]; //declares an array of 1000 bytes
        inout2.read(s,1000);
        cout << "Number of characters in " << filename << ": " << inout2.gcount() << endl;
        //appends a c-string terminator
        s[inout2.gcount()]='\0';
        //closes file
        inout2.close();
    }
    
    
    //13.5 Baby name popularity ranking
    //pg. 519
    
    
    //14.3 The Circle class
    //Implement the relational operators (<, <=, ==, !=, >, >=) in the Circle class in Listing 10.9, CircleWithConstantMemberFunctions.h, to order the Circle objects according to their radii.
    
    
    //14.7 Math: The Complex class
    //pg. 556
    
    
    return 0;
}
