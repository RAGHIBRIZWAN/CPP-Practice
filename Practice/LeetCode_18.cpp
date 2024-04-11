#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> nums{1,2,3,2,1};
    int left = 0;
    int right = nums.size() - 1;

    while (left < right) {
        if (nums[left] != nums[right]) {
            cout<<"false";
            return 0;
        }
        left++;
        right--;
    }
    cout<<"true";
       
}
