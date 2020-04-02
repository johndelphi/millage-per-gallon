// question 36 mid terrm.cpp : This file contains the 'main' function. Program execution begins and ends there.
//john michael cosc 1336
//a program that calculates a car’s gas mileage.

#include <iostream>
using namespace std;
int main()
{
    double numOfGallons, numOfMiles;//create  storage for variables to work with
    cout << "Enter the number of gallons of gas the car can hold:";   //Reads total gallons. 

    // prompt user to enter number of miles 
    cin >> numOfGallons;
    cout << "Enter the number of miles it can be driven on a full tank: ";
    //Reads total miles.
    cin >> numOfMiles;
    cout << "The mileage of the car is: " << numOfMiles / numOfGallons << " miles per gallon." << endl;   //Displays mileage car can travel in one gallon. 
}