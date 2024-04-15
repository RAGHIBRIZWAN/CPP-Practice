#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> nums = {8,19,4,2,15,3};
    int original = 4;
    bool found = true;
    
    while (found) {
        found = false;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == original) {
                original *= 2;
                found = true;
                break;
            }
        }
    }
    
    cout<<original;
}
