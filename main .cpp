/* Author: Andrew Booker
   Name: Working with Looping Statements in C++
   Description: Write a program to display and calculate a sales sheet for Nuka soda company
   to determine if the specified product will be discontinued
*/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{   // Initialize the variables and assign them to 0
    int totalQuantity, store,itemsSold, quantitySum, totalSold, storeRemain, finalRemain, remaining;
    double belowHalf, totalRemain, averageSold, percentSold;
    averageSold = 0;
    belowHalf = 0;
    totalQuantity = 0;
    itemsSold = 0;
    totalRemain = 0;
    remaining = 0;
    storeRemain = 0;
    store = 0;
    quantitySum = 0;
    totalSold = 0;
    // set the header to the center of the screen
    cout << setw(80) << " Welcome to Nuka Soda Company \n\n";



    // Create a for loop and prompt the user to enter the quantity and items sold for each store
    for(store = 1; store <= 12; store++)
    {
        // skip store 5 and display that it is currently closed
       if( store == 5 )
        {
           cout << "Store " << store << " is currently closed \n" << endl;
       //    store++;
        }
    else{
            cout << " Please enter the quantity for Store " << store << endl;
            cin >> totalQuantity;


        // error check the totalQuantity to make sure that negative entries are not an option
       while( totalQuantity < 0 )
         {
             if (totalQuantity < 0 )
             {
                cout << " Please Enter a WHOLE number \n" << endl;
                cout << " Please Reenter the quantity for Store " << store << endl;
                cin >> totalQuantity;
             }

         }
         //write a formula to keep a running total of the totalQuantity for all stores
         quantitySum = quantitySum + totalQuantity;


           cout << " Please enter the number of Nuka Pop sold for Store " << store << endl;
           cin >> itemsSold;

        // error check the itemsSold to make sure negative entries are not valid
       while( itemsSold < 0 )
        {
            if (itemsSold < 0 )
             {
                cout << " Please Enter a WHOLE number \n" << endl;
                cout << " Please Reenter the items sold for Store " << store << endl;
                cin >> itemsSold;
             }
        }

        do
        {
            if ( totalQuantity < itemsSold )
            {
                cout << " Items sold cannot be more than the quantity " << endl;
                cout << " Please Reenter the number of Nuka Pop sold for Store " << store << endl;
                cin >> itemsSold;
            }
        }
        while(totalQuantity < itemsSold);

           // write a formula to keep a running total of items sold for all the stores
           totalSold = totalSold+ itemsSold;

           // write a formula to calculate the remaining inventory for all the stores
           remaining = (totalQuantity - itemsSold);

           // Make a conditional statement that keeps a running total of all stores that have 0 items remaining
           remaining == 0 ? storeRemain++ : storeRemain;

           // Create a conditional statement that keeps a running total of all stores that have less than half of their original quantity
           remaining < totalQuantity / 2 ? belowHalf++ : belowHalf;

           // Make a formula to calculate the total remain of all stores
           totalRemain =  quantitySum - totalSold;

           // Calculate and display the average amount of items sold
           averageSold = (double)totalSold / 5;

           // Finally calculate and display the overall percentage of items sold
           percentSold = ( (double)totalSold / quantitySum ) * 100;

      }

    }
    // Display a sales sheet for your company
    cout << " TOTAL SUM OF ALL STORES IS " << quantitySum << endl;

    cout << " TOTAL AMOUNT SOLD IS  " << totalSold << endl;

    cout << " TOTAL NUMBER OF ITEMS REMAINING " << totalRemain << endl;

    cout << " NUMBER STORES WITH 0 ITEMS REMAINING " << storeRemain << endl;

    cout << " NUMBER OF STORES WITH LESS THAN HALF OF ORIGINAL QUANTITY " << belowHalf << endl;

    cout << setprecision(2) << fixed << showpoint;
    cout << " THE AVERAGE AMOUNT SOLD FOR ALL STORES IS " << averageSold << endl;

    cout << " THE OVERALL PERCENTAGE OF ITEMS SOLD IS " << percentSold << endl;

    // Create and if statement that displays a message if the overall percentage is over 50 percent
     if ( percentSold > 50.00)
           {
               cout << " Great job the market loves this product keep up the sales!!" << endl;
           }
     else
           {
                cout << " Sales are low please consider that this product will discontinue " << endl;
           }


    return 0;

}
