#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> nums = {1,2,4,4,6};
    int target = 3,num;
    sort(nums.begin(),nums.end());

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == target)
        {
            nums.insert(nums.begin()+i,target);
            num = i;
            break;
        }
        else if(nums[i] > target){
            nums.insert(nums.begin()+i,target);
            num = i;
            break;
        }
    }

    for (int i = 0; i < nums.size(); i++)
    {
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    cout<<"Position: "<<num;
    
    
}
