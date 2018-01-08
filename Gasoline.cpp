/*
Author: Andrew Booker

Date:09/25/2017

Program name: Working with Equations in C++

Description: calculate the gasoline expenses to determine the budget of a trip
*/

#include <iostream>

using namespace std;

int main()
{
    //Initialized your variables for assignment
    double payedAmount1, payedAmount2, cashBack1, cashBack2, gasStation1, gasStation2,
    vehicle, netPrice1, netPrice2, netSavings, bonus1, bonus2;

    // Display a friendly heading for the user
    cout << " Welcome to budget tracker 101 " << endl;
    cout << "\n";

    // initialize your vehicle and gas station variables and assign them their appropiate values
    vehicle = 25;
    gasStation1 = 3.74;

    // calculate the total of the amount payed from the first credit card
    payedAmount1 = vehicle * gasStation1;

    // display the total amount payed and the bonus
    cout << " The total amount payed with your first card is $" << payedAmount1 << endl;
    cout << "\n";

    //Calculate and display the payed amount, cash back,and net price from the first credit card
    bonus1 = 0.03;

    cashBack1 = payedAmount1 * bonus1;
    netPrice1 = payedAmount1 - cashBack1;

    cout << " Congratulations! Your cash-back savings are $" << cashBack1 << endl;
    cout << "\n";

    cout << " The net price for your first card is now $" << netPrice1 << endl;
    cout << "\n";

    // Initialize and declare your variables for the gas per gallon and payed amount
    gasStation2 = 4.09;
    payedAmount2 = vehicle * gasStation2;

    // Display the amount payed and the cash back savings for your Fill-A-Tank card
    cout << " The total amount payed with your Fill-A-Tank card is $" << payedAmount2 << endl;
    cout << "\n";

    // Initialize calculate and display the net price and cash back
    bonus2 = 0.045;

    cashBack2 = payedAmount2 * bonus2;
    netPrice2 = payedAmount2 - cashBack2;

    cout << " Congratulations! Your cash-back savings are $" << cashBack2 << endl;
    cout << "\n";

    cout << " Your net price for your Fill-A-Tank card is $" << netPrice2 << endl;
    cout << "\n";

    //Lastly initialize, declare, and display the net savings between the two transactions
    netSavings = netPrice2 - netPrice1;

    cout << " Finally Your net savings between both transactions is $" << netSavings << endl;
    cout << "\n";

    cout << " You will save more with the first credit card" << endl;

    return 0;
}
