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
int GetRandNum();
void DisplayCalc(int num1, int num2, int result);
int AddBothNums(int num1, int num2);
char Repeat();
void CheckAnswer(int result); 
int main()
{
    char repeat;
    do
    {
        srand(time(NULL));
        int num1 = GetRandNum(); // Using the same function twice since I only need one random function to make 2 numbers (as long as its properly seeded.)
        int num2 = GetRandNum();
        int result = AddBothNums(num1, num2);
        DisplayCalc(num1, num2, result);
        CheckAnswer(result);
        repeat = Repeat();

        cout << endl; //formatting so the addition display isnt smushed into the "would you like to repeat" text.
    } while (repeat == 'y');
}

int GetRandNum()
{
    int num1 = rand() % 100; //uses modulo to keep the number below 100 for ease of verification. 
    return num1;
}


int AddBothNums(int num1, int num2)
{
    int total = num1 + num2;
    return total;
}

void DisplayCalc(int num1, int num2, int result)
{
    cout << "  " << num1 << endl << "+ " << num2 << "\n" << "----" << endl;
}

char Repeat()
{
    char repeat;
    cout << "\n Would you like to try another problem? (y/n) ";

    cin >> repeat;
    if (repeat == 'n')
    {
        cout << "Closing.";
    }
    return repeat;
}

void CheckAnswer(int result)
{
    int answer;
    cin >> answer;
    if (answer == result)
    {
        cout << "That's correct! Congrats! \n";
    }
    else
    {
        cout << "That's incorrect! The answer was: " << result << endl;
    }
}