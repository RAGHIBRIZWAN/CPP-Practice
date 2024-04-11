#include<iostream>
#include<vector>
using namespace std;

int main(){
    int num = 1534236469;
    string b = to_string(num);
    int i = 0;
    int j = b.size()-1;

    while (i < j)
    {
        if (b[i] == '-')
        {
            i++;
        }
        
        int temp = b[i];
        b[i] = b[j];
        b[j] = temp;

        i++;
        j--;
    }
  
    int c = stoi(b);  
    cout<<c;
}
