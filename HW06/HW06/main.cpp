//Shayna Snyder
//CS172
//HW06
//11/8/16
#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>
#include <fstream>
#include <algorithm>
#include "Circle.hpp"
#include "Complex.hpp"

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
    //declares string variable for file name
    string filename;
    //enters user input into file name
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
    ifstream input;
    //prompts user to input values for strings year, gender, and name
    string year, gender, name;
    cout << "Enter the year (2010-2014): ";
    cin >> year;
    cout << "Enter the gender (m or f): ";
    cin >> gender;
    cout << "Enter the name: ";
    cin >> name;
    //declares string filename equal to the name of the baby name file
    string namesfile = "Babynameranking" + year + ".txt";
    ifstream infile(namesfile.c_str());
    string bname, gname, rank;
    //uses if statements to determine if name is boy or girl name
    if(gender=="m")
        bname = name;
    else if(gender=="f")
        gname = name;
    
    //14.3 The Circle class
    //Implement the relational operators (<, <=, ==, !=, >, >=) in the Circle class in Listing 10.9, CircleWithConstantMemberFunctions.h, to order the Circle objects according to their radii.
    Circle c1(3.7);
    Circle c2(0.6);
    Circle c3(1.2);
    cout << "\nOrder of Circle objects: ";
    //uses if statements and bool operators to order the circles by radii
    if(c1<=c2 && c1<=c3)
    {
        cout << c1.getRadius() << ", ";
        if(c2<=c3)
            cout << c2.getRadius() << ", " << c3.getRadius() << endl;
        else
            cout << c3.getRadius() << ", " << c2.getRadius() << endl;
    }
    else if(c2<=c3)
    {
        cout << c2.getRadius() << ", ";
        if(c1<=c3)
            cout << c1.getRadius() << ", " << c3.getRadius() << endl;
        else
            cout << c3.getRadius() << ", " << c1.getRadius() << endl;
    }
    else
    {
        cout << c3.getRadius() << ", ";
        if(c1<=c2)
            cout << c1.getRadius() << ", " << c2.getRadius() << endl;
        else
            cout << c2.getRadius() << ", " << c1.getRadius() << endl;
    }
    
    //14.7 Math: The Complex class
    
    
    
    return 0;
}
