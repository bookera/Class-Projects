/* Author: Andrew Booker
   Name: Working with Input and Formatted output in C++
   Description: Write a program to do the cost estimations for carpet installation
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Initialize your variables, make sure to make the tax constant and the room name a char data type
    string room;
    const double TAX = 0.057;
    const double LABOR = 6.03;
    int length, width;
    double pricePerYard, padding, totalFeet, totalYards, carpetCost,
     subTotal, totalCost, laborCost, salesTax;


    // Center the welcome text then prompt and display the users room name
    cout << setw(70) << " Welcome to Andrew's Carpet Calculator! (Trial Edition)" << "\n\n" << endl;
    cout << "Please enter the name of the room you are carpeting:";
    cin >> room;

    // Prompt the user to enter the length, width, price, and padding then display the results
    cout << "Enter the length in feet:";
    cin >> length;

    cout << "Enter the width in feet:";
    cin >> width;

    cout << "Enter the price of the carpet per yard:$";
    cin >> pricePerYard;

    cout << "Enter the padding cost:$";
    cin >> padding;

    // Display the total square feet and square yards for the room
    cout << setw(70) << " Here is your carpet estimate for " << room << endl;
    cout << "\n\n";

    // Calculate and display the total square feet and yards of the room
    totalFeet = length * width;
    cout << "The total square feet of " << room << " is " << totalFeet << endl;

    totalYards = totalFeet / 9;
    cout << "The total square yards of " << room << " is " << totalYards << endl;
    cout << "\n\n";

    // Displays the results in a fixed amount of decimals to the second decimal place makes them neat
    cout << setprecision(2) << fixed;

    // Display the total cost of the carpet, labor, and padding neatly aligned
    carpetCost = totalYards * pricePerYard;
    cout << "The total cost of the carpet needed is:" << setw(10) << "$" << carpetCost << endl;

    laborCost = LABOR * totalYards;
    cout << "The total cost of labor(at $6.03/yard):" << setw(10) << "$" << laborCost << endl;

    cout << "Padding Cost:" << setw(36) << "$" << padding << "\n\n" << endl;

    // Finally calculate and display the subtotal,tax and grand total
    subTotal = padding + laborCost + carpetCost;
    cout << "Subtotal:" << setw(40) << "$" << subTotal << endl;

    salesTax = subTotal * TAX;
    cout << "Tax:" << setw(45) << "$" << salesTax << endl;

    totalCost = salesTax + subTotal;
    cout << "Your total is:" << setw(35) << "$" << totalCost << endl;

    return 0;
}
