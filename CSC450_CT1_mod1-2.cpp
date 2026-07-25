/**
 * Student Name: Ryley Carlson
 * Course: CSC450 - Programming III
 * Module 1 Critical Thinking Assignment
 * File Name: CSC450_CT1_mod1-2.cpp
 * Due Date: 2024-07-26
 */

#include<iostream>
// FIXED: Removed legacy <conio.h> header for modern compilation compatibility

// Standard namespace declaration
using namespace std;

// Main Function
int main() {
    double myMoney = 1000.50; // this should be printed out

    // Standard Output Statement
    // FIXED: Restored the missing stream insertion operators (<<)
    cout << "Please be sure to correct all syntax errors in this program" << endl;

    // FIXED: Added the missing closing double quote after the word "program."
    cout << "I have corrected all errors for this program." << endl;

    // FIXED: Appended the myMoney variable to the stream so the data actually prints
    cout << " The total amount of money available is = " << myMoney << endl;

    // Wait For Output Screen
    // FIXED: Used standard library cin.get() to safely pause the terminal window
    cin.get();

    // Main Function return Statement
    return 0;
}
