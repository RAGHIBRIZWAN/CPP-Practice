#include<iostream>
using namespace std;

int main(){
    string s;
    int n = 0;
    cout<<"Enter the string: ";
    cin>>s;

    for (int i = 0; i < s.size(); i++)
    {
        if(s[i] == 'I'){
            n += 1;
        }
        else if(s[i] == 'V'){
            if(s[i-1] != ' ' && s[i-1] == 'I'){
                n += 3; 
            }
            else{
                n += 5;
            }
        }
        else if(s[i] == 'X'){
            if(s[i-1] != ' ' && s[i-1] == 'I'){
                n += 8; 
            }
            else{
                n += 10;
            }
        }
        else if(s[i] == 'L'){
            if(s[i-1] != ' ' && s[i-1] == 'X'){
                n += 30; 
            }
            else{
                n += 50;
            }
        }
        else if(s[i] == 'C'){
            if(s[i-1] != ' ' && s[i-1] == 'X'){
                n += 80; 
            }
            else{
                n += 100;
            }
        }
        else if(s[i] == 'D'){
            if(s[i-1] != ' ' && s[i-1] == 'C'){
                n += 300; 
            }
            else{
                n += 500;
            }
        }
        else if(s[i] == 'M'){
            if(s[i-1] != ' ' && s[i-1] == 'C'){
                n += 800; 
            }
            else{
                n += 1000;
            }
        }
        else{
            n = 0;
        }
    }

    cout<<n;
}
