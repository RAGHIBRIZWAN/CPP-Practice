#include<iostream>
using namespace std;

int main(){
    string s = "Hello";
    int a = s.size()-1;
    for (int i = 0; i < s.length()/2; ++i)
    {
        char temp = s[i];
        s[i] = s[a];
        s[a] = temp;
        --a;
    }

    for (int i = 0; i < s.size(); i++)
    {
        cout<<s[i]<<" ";
    }
    
    
}
