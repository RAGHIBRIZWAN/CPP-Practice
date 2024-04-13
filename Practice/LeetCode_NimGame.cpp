#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// Short Trick: If n % 4 == 0, You will always lose. Else you can win.

int main(){
    int n;
    int player = 0;
    int opponent = 0;

    cout<<"Enter the value of n: ";
    cin>>n;

    while (n >= 0)
    {
        cout<<"Player's Turn: ";
        cin>>player;
        if (player == 1 || player == 2 || player == 3)
        {
            if (player <= n)
            {
                n -= player;
                cout<<"Player pickup "<<player<<" stone"<<endl;
            }
            else{
                cout<<"Wrong Input"<<endl;
                return 0;
            }
            
            if (n  == 0)
            {
                cout<<"Player wins"<<endl;
                return 0;
            }
            
        }
        else{
            cout<<"Wrong input"<<endl;
            return 0;
        }

        cout<<"Opponent's turn: ";
        cin>>opponent;

        if (opponent == 1 || opponent == 2 || opponent == 3)
        {
            if (opponent <= n)
            {
                n -= opponent;
                cout<<"Opponent pickup "<<opponent<<" stone"<<endl;
            }
            else{
                cout<<"Wrong Input"<<endl;
                return 0;
            }
            
            if (n  == 0)
            {
                cout<<"Opponent wins"<<endl;
                return 0;
            }
            
        }
        else{
            cout<<"Wrong input";
            return 0;
        }
    }
    
}
