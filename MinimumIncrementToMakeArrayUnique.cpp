#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> nums = {3,2,1,2,1,7};
    int count = 0;
    sort(nums.begin(),nums.end());

    for (int i = 1; i < nums.size(); ++i) {
        if (nums[i] <= nums[i - 1]) {
            count += nums[i - 1] + 1 - nums[i];
            nums[i] = nums[i - 1] + 1;
        }
    }
    
    for (int i = 0; i < nums.size(); i++)
    {
        cout<<nums[i]<<",";
    }
    cout<<endl;
    cout<<count;
}