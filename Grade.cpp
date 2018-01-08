/* Author: Andrew Booker
   Name: Working with conditional statements in C++
   Description: Write a program to help teachers determine a student's letter grade
*/
#include <iostream>

using namespace std;

int main()
{
    //Initialize your variables for grades, points, and points needed;
    char grade;
    int points, pointsNeeded;

    // Prompt the user to enter the students points to be graded
    cout << " Please Enter the students points: ";
    cin >> points;

    // Make an if statement to check the users input and make sure that whole numbers less than 1100 are entered
    if(points < 0 || points > 1100)
    {
        cout << " Please enter a WHOLE number less than 1100";
    }
    else
    {


    /* Make a conditional if statement for the letter grades displaying their earned grade and the
       points needed for the next next letter grade */
    if( points >= 951 && points <= 1100)
    {
        grade = 'A';
        cout << " Congratulations! the student's grade is: " << grade << endl;
    }
    else if( points >= 801 && points <= 950)
        {
        pointsNeeded = 951 - points;
        grade = 'B';
        cout << " Congratulations! the student's grade is: " << grade << endl;
        cout << " the student needed " << pointsNeeded << " more points to reach the next grade" << endl;
        }
       else if ( points >= 651 && points <= 800)
        {
        pointsNeeded = 801 - points;
        grade = 'C';
        cout << " Congratulations! the student's grade is: " << grade << endl;
        cout << " the student needed " << pointsNeeded << " more points to reach the next grade" << endl;
        }
       else if ( points >= 501 && points <= 650)
        {
        pointsNeeded = 651 - points;
        grade = 'D';
        cout << " Congratulations! the student's grade is: " << grade << endl;
        cout << " the student needed " << pointsNeeded << " more points to reach the next grade" << endl;
        }
         if ( points >= 0 && points <= 500)
        {
        pointsNeeded = 501 - points;
        grade = 'F';
        cout << " Congratulations! the student's grade is: " << grade << endl;
        cout << " the student needed " << pointsNeeded << " more points to reach the next grade" << endl;

        }
        else
        {
           return 0;
        }

       }

}
