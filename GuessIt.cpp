#include <iostream>
#include <cstdlib>
#include<ctime>
using namespace std;

int RandomNumber();
int getPlayerGuess();
void printAnswser(int guess, int secretNumber);

int main(int argc, char *argv[])
{   srand(time(0));
    int guess;
    
    int secretNumber = RandomNumber();

    do
    {
        guess = getPlayerGuess();
        printAnswser(guess, secretNumber);
    } while (guess != secretNumber);
    cout<<"Number:  "<< secretNumber<<" is the right answer!";
    return 0;
}
int RandomNumber()
{
    return rand() % 100 + 1;
}
int getPlayerGuess()
{
    int num;
    cout << "Guess a number (1..100)";
    cin >> num;
    if (!cin.good())
        exit(1);
    return num;
}
void printAnswser(int guess, int secretNumber)
{
    if (guess < secretNumber)
        cout << " Your number is too small!" << endl;
    else if (guess > secretNumber)
        cout << "Your num is too big!" << endl;
    else
        cout << "You Win!" << endl;
}