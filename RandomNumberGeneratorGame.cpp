#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

void easy(int r, int n)
{
    r %= 50;
    cout << "   The generaed number is between 0 and 49 \n";
    if (n < r)
    {
        cout << "User generated number: " << n << endl;
        cout << "Computer generated number: " << r << endl;
        cout << "Number is low" << endl;
    }
    else if (n == r)
    {
        cout << "User generated number: " << n << endl;
        cout << "Computer generated number: " << r << endl;
        cout << "Number is matched" << endl;
    }
    else if (n > r)
    {
        cout << "User generated number: " << n << endl;
        cout << "Computer generated number: " << r << endl;
        cout << "Number is high" << endl;
    }
}

void medium(int r, int n)
{
    r %= 100;
    cout << "   The generaed number is between 0 and 99 \n";
    if (n < r)
    {
        cout << "User generated number: " << n << endl;
        cout << "Computer generated number: " << r << endl;
        cout << "Number is low" << endl;
    }
    else if (n == r)
    {
        cout << "User generated number: " << n << endl;
        cout << "Computer generated number: " << r << endl;
        cout << "Number is matched" << endl;
    }
    else if (n > r)
    {
        cout << "User generated number: " << n << endl;
        cout << "Computer generated number: " << r << endl;
        cout << "Number is high" << endl;
    }
}

void hard(int r, int n)
{
    r %= 200;
    cout << "   The generaed number is between 0 and 199 \n";
    if (n < r)
    {
        cout << "User generated number: " << n << endl;
        cout << "Computer generated number: " << r << endl;
        cout << "Number is low" << endl;
    }
    else if (n == r)
    {
        cout << "User generated number: " << n << endl;
        cout << "Computer generated number: " << r << endl;
        cout << "Number is matched" << endl;
    }
    else if (n > r)
    {
        cout << "User generated number: " << n << endl;
        cout << "Computer generated number: " << r << endl;
        cout << "Number is high" << endl;
    }
}

int main()
{
    srand(time(0));
    cout << "   \n -------------------------------------------------------";
    cout << "   Welcome to Guessing number game \n";
    while (1)
    {
        cout << "   Please select the difficulty level\n";
        cout << "   1: Easy \n";
        cout << "   2: Medium \n";
        cout << "   3: Hard \n";
        cout << "   4: Exit\n";

        int level;
        cin >> level;
        int r, n;
        r = rand();
        switch (level)
        {
        case 1:
            cout << "Enter the number: ";
            cin >> n;
            easy(r, n);
            break;
        case 2:
            cout << "Enter the number: ";
            cin >> n;
            medium(r, n);
            break;
        case 3:
            cout << "Enter the number: ";
            cin >> n;
            hard(r, n);
            break;
        case 4:
            return 0;
        }
    }
}