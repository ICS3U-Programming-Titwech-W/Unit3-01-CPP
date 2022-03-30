// Copyright (c) 2022 Titwech Wal All rights reserved.
//
// Created by: Titwech.w
// Date: Mar.29.2022
// his program asks the user for the subtotal and the tax
// percentage. Then calculates and displays the HST
// and total.
#include <iostream>
#include <iomanip>


int main() {
  // Declare constants
  const float TAX_RATE = 0.13;

  // Declare variables
  float subtotal, tax, total;

  // Gets the user input
  std::cout << "Enter the subtotal: ";
  std::cin >> subtotal;

  // Calcuates total
  tax = subtotal * TAX_RATE;
  total = subtotal  + tax;

  // Displays total
  std::cout << "You entered a subtotal of $" << std::fixed;
  std::cout << std::setprecision(2) << std::setfill('0') << subtotal << "\n";
  std::cout << "The HST is $" << std::fixed;
  std::cout << std::setprecision(2) << std::setfill('0') << tax << "\n";
  std::cout << "And the total is $" << std::fixed;
  std::cout << std::setprecision(2) << std::setfill('0') << total << "\n";
}
