/**
 * Student Name: Ryley Carlson
 * Course: CSC450 - Programming III
 * Module 1 Critical Thinking Assignment
 * File Name: CSC450_CT1_mod1-1.cpp
 * Due Date: 2024-07-26
 */

/* Simple Program with a few Errors for Correction Please be sure to correct all outlined errors. */

#include<iostream>
// FIXED: Removed legacy <conio.h> header to ensure cross-platform compilation

// Standard namespace declaration
using namespace std;

// Main Function
int main() {
    // Standard Output Statement
    cout << "Welcome to this C++ Program" << endl;

    // FIXED: Added missing double quotes around the text string literal
    cout << "I have corrected all errors for this program." << endl;

    // Wait For Output Screen
    // FIXED: I ended up replacing the non-standard getch() with standard cin.get() to hold the window open until the user presses the ENTER key
    cin.get();

    // Main Function return Statement
    // FIXED: Added in the missing standard exit code
    return 0;
}