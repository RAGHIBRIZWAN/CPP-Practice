#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

void easy(int r,int n){
    r %= 50;
    cout << "   The generaed number is between 1 and 50 \n";
    if(n<r){
       cout << "Number is low";
    }
    else if(n==r){
        cout<<"Number is matched";
    }
    else if(n>r){
        cout<<"Number is high";
    }
}

void medium(int r, int n){
    r %= 100;
    cout << "   The generaed number is between 1 and 50 \n";
    if(n<r){
       cout << "Number is low";
    }
    else if(n==r){
        cout<<"Number is matched";
    }
    else if(n>r){
        cout<<"Number is high";
    }
}

void hard(int r, int n){
    r %= 100+100;
    
    if(n<r){
       cout << "Number is low";
    }
    else if(n==r){
        cout<<"Number is matched";
    }
    else if(n>r){
        cout<<"Number is high";
    }
}

int main()
{
    char again;
    srand(time(0));
    cout << "   \n -------------------------------------------------------";
    cout << "   Welcome to Guessing number game \n";
    while(1)
    {
    cout << "   Please select the difficulty level\n";
    cout << "   1: Easy \n";
    cout << "   2: Medium \n";
    cout << "   3: Hard \n";
    cout << "   4: Exit\n";

    int level;
    cin >> level;
    int r,n;
    r = rand();
    cout<<"Enter the number: ";
    cin>>n;
    
            switch(level){
                case 1:
                cout << "   The generaed number is between 1 and 50 \n";
                easy(r,n);
                break;
                case 2:
                medium(r,n);
                cout << "   The generaed number is between 51 and 100 \n";
                break;
                case 3:
                hard(r,n);
                cout << "   The generaed number between 101 and 200 \n";
                break;
                case 4:
                return 0;
            }

       }
}
