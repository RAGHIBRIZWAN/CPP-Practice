#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target,int count) {
        for(int i = 0; i < count; i++){
            for(int j = 1; j < count ; j++){
                if(nums[i] + nums[j] == target){
                    cout<<"["<<i<<","<<j<<"]";
                    break;
                }
            }
        }
    }
};

int main(){
    Solution sol;
    int num,count,target;
    vector<int> nums;
    cout<<"Enter the target: "<<endl;
    cin>>target;
    cout<<"How many numbers do you want to add to a vector? "<<endl;
    cin>>count;
    for(int i = 0; i < count; i++){
        cin>>num;
        nums.push_back(num);
    }
    sol.twoSum(nums,target,count);
}
