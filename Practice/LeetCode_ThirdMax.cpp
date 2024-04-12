#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> nums = {1,2,3,2,4,5};
    int count = 0,num;
    sort(nums.begin(),nums.end());
    if (nums.size() <= 2)
    {
        cout<<nums[nums.size()-1]<<endl;
        return 0;
    }
    
    for (int i = nums.size()-1; i >= 0; i--)
    {
        if (nums[i] != nums[i-1])
        {
            count++;
            if(count == 3){
                num = i;
                break;
            }
        }
    }
    cout<<nums[num]<<endl;
}
