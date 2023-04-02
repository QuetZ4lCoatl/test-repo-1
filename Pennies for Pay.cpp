//This programm calculates the amount of pennies earned over a period of working days. Each day the amount of pennies is doubled. 
//The user will input the amount of days worked and the program will calculate the amount of pennies earned over a period of time. 





#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    //Declaration of variables
    const int INCREMENTAL_AMOUNT = 2;

    int num_of_days;

    float daily_salary = .01,
        total_salary = 0;


    //This section is to prevent any user from inputting a value less than 1, if the user inputs an incorrect interger the program loops and the user can input a correct interger of days worked. 
    cout << "\nEnter number of days: ";
    while (!(cin >> num_of_days) || (num_of_days < 1))
    {
        cout << "ERROR: number of days must be \n"
            << "greater than 1 \n"
            << endl;
        cin.clear();
        cin.ignore(1200, '\n');
    }


    //This is the table displayed in the program that separates the number of days and the amount earned 
    cout << "\n   Day             Amount Earned" << endl;
    cout << "--------------------------------------\n";
    cout << setprecision(2) << fixed;


    //This section calculates the mathematics of the amount of pannies earned. This becomes a loop program if the user inputs an incorrect interger of days worked. 
    for (int i = 0; i < num_of_days; i++)
    {
        total_salary += daily_salary;
        cout << "   " << (i + 1) << "           $";
        cout << daily_salary << endl;
        daily_salary *= INCREMENTAL_AMOUNT;
    }

    //This last section displays the final calculated amount of pennies earned over a period of time. 
    cout << "\nTotal salary for " << num_of_days;
    cout << " days = $" << total_salary << endl;
    cout << endl;

    return 0;
}
