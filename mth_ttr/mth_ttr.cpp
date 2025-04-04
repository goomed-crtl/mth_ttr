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
void DisplayMenu();
int GetChoice();

int GetRandNum();
int GetRandNumSimp();
void DisplayCalc(int num1, int num2, int result);
int Add(int num1, int num2);
int Sub(int n1, int n2);
int Mult(int n1, int n2);
int Div(int n1, int n2);
void ChoiceSwitch(int choice); 
char Repeat();
void CheckAnswer(int result); 
int main()
{
    char repeat;
    do
    {
        srand(time(NULL));
        
        DisplayMenu(); 
        int GetChoice();
        int result = Add(n1, n2);
        DisplayCalc(n1, n2, n3, n4, result);
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
int GetRandNumSimp()
{
    int num1 = rand() % 10; //uses modulo to keep the number below 10 for ease of verification. 
    return num1;
}


int Add(int num1, int num2)
{
    int total = num1 + num2;
    return total;
}

int Sub(int n1, int n2)
{
    int total = n1 - n2;
    return total; 
}

int Mult(int n1, int n2)
{
    int total = n1 * n2;
    return total; 
}

int Div(int n1, int n2)
{
    int total = n1 / n2;
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

void DisplayMenu() 
{
    cout << "Choose an operation.\n";
    cout << right << setw(37) << "1. Addition\n";
    cout << right << setw(40) << "2. Subtraction\n";
    cout << right << setw(39) << "3. Multiplication\n";
    cout << right << setw(11) << "4. Division\n";
    cout << right << setw(5) << "5. Quit\n"; 
    cout << right << setw(28) << "Enter your choice (1-4): ";
}

int GetChoice()
{
    int choice;
    cin >> choice;
    while (choice < 1 || choice > 4)
    {
        cout << "That is not an available option. Please enter a number from 1-4: ";
        cin >> choice; 
    }
    return choice; 
}

void ChoiceSwitch(int choice)
{
    int n1 = GetRandNum(); // Using the same function twice since I only need one random function to make 2 numbers (as long as its properly seeded.)
    int n2 = GetRandNum();
    int n3 = GetRandNumSimp();
    int n4 = GetRandNumSimp();
    switch (choice)
    {
    case 1:
        Add(n1, n2);
        break; 
    case 2:
        Sub(n1, n2);
        break;
    case 3: 
        Mult(n3, n4);
        break;
    case 4: 
        Div(n3, n4);
        break;
    case 5: 
        cout << "Closing.";
        exit(0);
    }
}