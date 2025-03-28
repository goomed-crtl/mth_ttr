/*
Title: Chapter 5 Exerise 17 - Math Tutor
File Name: mth_ttr.cpp
Programmer: Nicholas Woolston
Date: 28/03/2025 (DD/MM/YYYY)
Requirements: Write code that generates 2 random numbers to be added together. Display the numbers to the user and put a break in the code while the user
gets the answer. Have the answer be displayed after the user presses button.
*/

#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <conio.h> 
using namespace std;
int GetRandNum1();
int GetRandNum2();
int AddBothNums(int num1, int num2);


int main()
{
    char repeat;
    do
    {
        srand(time(NULL));
        int answer;
        int num1 = GetRandNum1();
        int num2 = GetRandNum2();
        int result = AddBothNums(num1, num2);

        cout << "  " << num1 << endl << "+ " << num2 << "\n" << "----" << endl;
        cin >> answer; 
        if (answer == result)
        {
            cout << "That's correct! Congrats! \n";
        }
        else
        {
            cout << "That's incorrect! The answer is: " << result << endl; 
        }
        cout << "Would you like to try another problem? (y/n) ";
        
        cin >> repeat; 
        if (repeat == 'n')
        {
            cout << "Closing.";
        }
    } while (repeat == 'y');
}

int GetRandNum1()
{
    int num1 = rand() % 100;
    return num1;
}

int GetRandNum2()
{
    int num2 = rand() % 100;
    return num2;
}

int AddBothNums(int num1, int num2)
{
    int total = num1 + num2;
    return total;
}