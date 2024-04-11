#include<iostream>
using namespace std;

int main()
{
    bool isPowerOfTwo(int n) {
        if(n==1){
            return true;
        }
        else if(n <= 0){
            return false;
        }
        while(n > 1){
            if(n%2 != 0){
                return false;
                break;
            }
            n = n / 2;
        }
        return true;
    }
}
