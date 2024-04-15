#include<iostream>
using namespace std;

int main(){
    int num;
    cin>>num;
    bool valid = false;

    for (long long i = 0; i <= num; i++)
    {
        if (i*i == num)
        {
            valid = true;
            break;
        }
        
    }

    if (valid)
    {
        cout<<"True";
    }
    else{
        cout<<"False";
    }
    
    
}
