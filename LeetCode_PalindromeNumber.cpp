#include<iostream>
#include<vector>
using namespace std;

int main(){
    int num = 121;
    string a = to_string(num);
    int b = a.size();
    int i = 0;
    int j = a.size()-1;
    while(i<j){
        if (a[i] != a[j])
        {
            cout<<"False";
            return 0;
        }
        i++;
        j--;
    }
    cout<<"true";

    
    
}