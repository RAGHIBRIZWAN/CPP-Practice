#include<iostream>
#include<vector>
using namespace std;

int main(){
    string s = "rat",t = "car";

    for (int i = 0; i < s.length(); i++)
    {
        for (int j = 0; j < t.length(); j++)
        {
            if (s[i] == t[j])
            {
                s.erase(s.begin()+i);
                t.erase(t.begin()+j);
                i--;
                break;
            }
        }
    }

    if(s.length() == 0 && t.length() == 0){
        cout<<"It is an anagram";
    }
    else{
        cout<<"Not an Anagram";
    }
    
}
