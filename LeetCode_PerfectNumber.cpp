#include<iostream>
using namespace std;

int main(){
    int num,sum = 0;
    // bool valid = false;
    cin>>num;

    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            sum += i;
        }
        
    }
    if (sum == num)
    {
        cout<<sum<<endl;
        cout<<"True";
    }
    else{
        cout<<"False";
    }
    
    
}