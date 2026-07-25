/**
 * Student Name: Ryley Carlson
 * Course: CSC450 - Programming 3
 * Module 1 Critical Thinking - Part 1
 * File Name: person.cpp
 * Due Date: 2024-07-26
 * Description: High-performance data representation script using optimized
 * compile-time string views and platform-agnostic stream flushing
 * to output localized target attributes safely.
 */

#include <iostream>
#include <string_view>
#include <ios>
#include <limits>

int main() {
    // Maximize standard input/output device pipeline execution speeds
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    // Initializing immutable string objects directly inside read-only static memory
    constexpr std::string_view firstName{"Alan"};
    constexpr std::string_view lastName{"Grant"};
    constexpr std::string_view streetAddress{"309 Raptor Way"};
    constexpr std::string_view city{"Isla Nublar"};
    constexpr std::string_view zipCode{"77279"};

    // Delivering clean, modular, formatted system profile output layout
    std::cout << "==================================================\n";
    std::cout << "           PERSONAL PROFILE MATRIX                \n";
    std::cout << "==================================================\n";
    std::cout << "First Name:     " << firstName << "\n";
    std::cout << "Last Name:      " << lastName << "\n";
    std::cout << "Street Address: " << streetAddress << "\n";
    std::cout << "City:           " << city << "\n";
    std::cout << "Zip Code:       " << zipCode << "\n";
    std::cout << "==================================================\n";
    std::cout << std::flush;

    // Platform-Agnostic Output Window Execution Hold Logic
    std::cout << "\n[Run Finished. Press ENTER key to close execution terminal...]\n";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    return 0;
}