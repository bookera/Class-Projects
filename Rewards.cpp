/* Author: Andrew Booker
   Name: conditional statements in C++
   Description: Write a program that calculates and displays the discounts based on reward level
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Initialize your variables, making sure to make a constant for the max discount
    double discount, finalSale, salesAmount, addDiscount, totalDis;
    const double MAX_DISCOUNT = 30.00;
    char reward;

    // Prompt the user to enter the initial sales amount and reward level
    cout << setw(80) << " Welcome to Andrew's Discount Jewelry Outlet \n\n";
    cout << "Please enter the sales amount" << endl;
    cin >> salesAmount;
    cout << "Please enter your reward level (G) (S) or (B)" << endl;
    cin >> reward;

    // make a switch statement for the rewards memberships
    switch (reward)
    {
        case 'G':
        case 'g':   // apply the discount and additional discount  for a gold membership
                    discount = 0.12;
                    addDiscount = 0.035;

                    if (salesAmount < 200 )
                     {
                       totalDis = salesAmount * discount;
                     }
                    else
                     {

                        totalDis = (salesAmount * discount) + (salesAmount - 200) * addDiscount;
                     }
                     // make a conditional statement for the max discount and display the results
                     totalDis = totalDis > 30.00 ? MAX_DISCOUNT : totalDis;
                     finalSale = salesAmount - totalDis;
                     cout << "Reward type: Gold" << endl;
                     cout << setprecision(2) << fixed;
                     cout << "Your rewards discount is: $" << totalDis << endl;
                     cout << "The final sale amount is: $" << finalSale << endl;
                     break;

         case 'S':
         case 's':   // apply the discount and additional discount  for a silver membership
                    discount = 0.08;
                    addDiscount = 0.0225;

                    if (salesAmount < 200 )
                     {
                       totalDis = salesAmount * discount;
                     }
                    else
                     {

                        totalDis = (salesAmount * discount) + (salesAmount - 200) * addDiscount;
                     }

                     totalDis = totalDis > 30.00 ? MAX_DISCOUNT : totalDis;
                     // calculate and display the final sales amount with the discount applied
                     finalSale = salesAmount - totalDis;
                     cout << "Reward type: Silver" << endl;
                     cout << setprecision(2) << fixed;
                     cout << "Your rewards discount is: $" << totalDis << endl;
                     cout << "The final sale amount is: $" << finalSale << endl;
                     break;

         case 'B':
         case 'b':   // apply the discount and additional discount  for a bronze membership
                    discount = 0.04;
                    addDiscount = 0.0175;

                    if (salesAmount < 200 )
                     {
                       totalDis = salesAmount * discount;
                     }
                    else
                     {

                        totalDis = (salesAmount * discount) + (salesAmount - 200) * addDiscount;
                     }

                     totalDis = totalDis > 30.00 ? MAX_DISCOUNT : totalDis;
                     finalSale = salesAmount - totalDis;
                     cout << "Reward type: Bronze" << endl;
                     cout << setprecision(2) << fixed;
                     cout << "Your rewards discount is: $" << totalDis << endl;
                     cout << "The final sale amount is: $" << finalSale << endl;
                     break;
          // display a message if the user enters the wrong rewards type
          default:   cout << "\n You did not enter a valid reward type";
    }

    return 0;
}
