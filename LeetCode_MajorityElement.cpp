#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> nums = {1};
    int count = 0;
    int maxCount = 0;
    int majorityElement = 0;
    
    sort(nums.begin(), nums.end());
    if (nums.size() == 1)
    {
        cout<< nums[nums.size()-1];
        return 0;
    }
    
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == nums[i+1])
        {
            count++;
            if (count > maxCount) {
                maxCount = count;
                majorityElement = nums[i];
            }
        }
        else {
            count = 0;
        }
    }

    cout << majorityElement << endl;
}
