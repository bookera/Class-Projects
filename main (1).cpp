/* Author: Andrew Booker
   Name: Advanced Looping Implementations in C++
   Description: Write a program to have a user calculate the average, commission, and total sales for Mary, Tom, and Chris
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // declare and initialize your variables for Mary, Chris, and Tom make the commission a constant
    const double COM = 0.17;
    double totalSales, averageSales, taverageSales, caverageSales, maverageSales, tomCommission, tomSales, chrisCommission, chrisSales,
    maryCommission, marySales, salesAmount;
    char salesPerson;
    int tomCOunt,chrisCount,maryCount, numSales;
    chrisCommission = 0;
    caverageSales = 0;
    chrisSales = 0;
    chrisCount = 0;
    maryCommission = 0;
    maverageSales = 0;
    marySales = 0;
    maryCount = 0;
    tomCommission = 0;
    tomSales = 0;
    tomCOunt = 0;
    taverageSales = 0;
    salesAmount = 0;
    totalSales = 0;

    // Create a do while statement to loop the whole program until the user enters the character Z
    do
    {
        // Prompt the user to enter the initials for the salesperson of their choosing
        cout << "Please enter the initials for Tom, Chris, or Mary " << endl;
        cin >> salesPerson;

        // Make a switch statement that will run all the calculations as well as user input for each sales person
        switch (salesPerson)
        {
               // user enters t for tom
                case 'T':
                        cout << " Please enter the number of sales for Tom " << endl;
                        cin >> numSales;

                        // Error check to make sure the user can only enter up to 5 sales at a time
                        while(numSales > 5)
                        {
                             cout << " Can only hold 5 sales at a time \n" << endl;
                             cout << " Please reenter the number of sales for Tom " << endl;
                             cin >> numSales;
                        }

                        // Error check to make sure the user only enters a whole number
                        while(numSales < 0)
                        {
                            cout << " Reenter a valid WHOLE number \n" << endl;
                            cout << " Please reenter the number of sales for Tom " << endl;
                            cin >> numSales;
                        }

                        // Make a for loop to keep a running total for the salesamount, tomsales and tomcount
                        for (int input = 0; input < numSales; input++)
                         { cout << " Please enter the sales amount for Tom" << endl;
                           cin >> salesAmount;
                           while( salesAmount < 0)
                           {
                            cout << " Reenter a valid WHOLE number" << endl;
                            cin >> salesAmount;
                           }
                           tomSales += salesAmount;
                           tomCOunt = tomCOunt + 1;

                         }
                         // Calculate toms commission by multiplying his sales by the commission rate
                           tomCommission = ( tomSales * COM);
                           break;

            // user enters c for chris
            case 'C':
                        cout << " Please enter the number of sales for Chris " << endl;
                        cin >> numSales;

                        // Error check to make sure the user can only enter up to 5 sales at a time
                        while(numSales > 5)
                        {
                             cout << " Can only hold 5 sales at a time \n" << endl;
                             cout << " Please reenter the number of sales for Chris " << endl;
                             cin >> numSales;
                        }

                        // Error check to make sure the user only enters a whole number
                        while(numSales < 0)
                        {
                            cout << " Reenter a valid WHOLE number \n" << endl;
                            cout << " Please reenter the number of sales for Chris " << endl;
                            cin >> numSales;
                        }
                        // Make a for loop to keep a running total for the salesamount, chrissales and chriscount
                        for (int input = 0; input < numSales; input++)
                         { cout << " Please enter the sales amount for Chris" << endl;
                           cin >> salesAmount;

                           // error check to make sure the user doesn't enter a negative number for the salesamount
                           while( salesAmount < 0)
                           {
                            cout << " Reenter a valid WHOLE number" << endl;
                            cin >> salesAmount;
                           }
                             chrisSales += salesAmount;
                             chrisCount++;
                         }
                         // Calculate toms commission by multiplying his sales by the commission rate
                            chrisCommission = ( chrisSales * COM);
                            break;

            // user enters M for mary
            case 'M':

                        cout << " Please enter the number of sales for Mary " << endl;
                        cin >> numSales;
                        // Error check to make sure the user can only enter up to 5 sales at a time
                        while(numSales > 5)
                        {
                             cout << " Can only hold 5 sales at a time \n" << endl;
                             cout << " Please reenter the number of sales for Mary " << endl;
                             cin >> numSales;
                        }

                         // Error check to make sure the user only enters a whole number
                        while(numSales < 0)
                        {
                            cout << " Reenter a valid WHOLE number \n" << endl;
                            cout << " Please reenter the number of sales for Mary " << endl;
                            cin >> numSales;
                        }

                         // Make a for loop to keep a running total for the salesamount, marysales and marycount
                        for (int input = 0; input < numSales; input++)
                         { cout << " Please enter the sales amount for Mary" << endl;
                           cin >> salesAmount;
                           while( salesAmount < 0)
                           {
                            cout << " Reenter a valid WHOLE number" << endl;
                            cin >> salesAmount;
                           }
                             marySales += salesAmount;
                             maryCount++;
                         }
                             // Calculate toms commission by multiplying his sales by the commission rate
                             maryCommission = ( marySales * COM);
                             break;
                default:
                        // If user enters a lower case z prompt them to make it uppersase to end the program
                        if ( salesPerson == 'z')
                        {
                            cout << " To terminate z must be uppercase \n" << endl;
                        }
                        // If not tell user that they can only enter T, C, or M
                        else
                        {
                        cout << " ***UPPER CASE T, C, or M MUST BE ENTERED*** \n" << endl;
                        }


        }
            // use the running totals for each salesperson then divide by the number of sales to find the average sales
            taverageSales = (tomSales / tomCOunt);
            maverageSales = (marySales / maryCount);
            caverageSales = (chrisSales / chrisCount);
    }while( salesPerson != 'Z');

             // When the user enters z display a final report for all sales representatives
             cout << setprecision(2) << fixed << showpoint;
             cout << " Total sales amount for Tom $" << tomSales << endl;
             cout << " Commission earned for Tom $" << tomCommission << endl;
             cout << " The average for Tom $" << taverageSales << "\n" << endl;

             cout << " Total sales amount for Chris $" << chrisSales << endl;
             cout << " Commission earned for Chris $" << chrisCommission << endl;
             cout << " The average for Chris $" << caverageSales << "\n" << endl;

             cout << " Total sales amount for Mary $" << marySales << endl;
             cout << " Commission earned for Mary $" << maryCommission << endl;
             cout << " The average for Mary $" << maverageSales<< endl;

             return 0;

}
