#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> nums = {1,2,3,4,4,5};
    int target = 4;
    int firstPosition = -1,lastPosition = -1;

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == target)
        {
            firstPosition = i;
            break;
        }
        
    }

    for (int i = nums.size()-1; i >= 0; i--)
    {
        if (nums[i] == target)
        {
            lastPosition = i;
            break;
        }
        
    }

    cout<<firstPosition<<" "<<lastPosition<<endl;
    
}
