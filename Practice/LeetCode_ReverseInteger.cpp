#include<iostream>
#include<vector>
using namespace std;

int main(){
    // METHOD 1:
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


    //METHOD 2:
     int reverse(int x) {
int reversed = 0;
while (x != 0) {
        int digit = x % 10;
        x /= 10;
        if (reversed > INT_MAX / 10 || reversed < INT_MIN / 10) return 0;
        reversed = reversed * 10 + digit;
    }
    return reversed;
    }
}
