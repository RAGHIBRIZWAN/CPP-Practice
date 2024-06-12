    #include <iostream>
    #include<algorithm>
    #include <vector>
    using namespace std;

    int main()
    {
        vector<int> nums = {1,1,2,3,3,4,4,8,8};
        int count;

        if (nums.size() == 1)
        {
            count = nums[0];
            cout<< count;
        }
        
        for (int i = 0; i < nums.size(); i+=2)
        {
            if (nums[i] != nums[i+1] && nums[i] != nums[i-1])
            {
                cout<<nums[i];
            }
            
        }

        // for (int i = 0; i < nums.size(); i++)
        // {
        //     if(i == 0 && nums[i] != nums[i+1]){
        //         count = nums[i];
        //     }
        //     else if(i == nums.size() - 1 && nums[i] != nums[i - 1]){
        //         count = nums[i];
        //     }
        //     else if(nums[i] != nums[i - 1] && nums[i] != nums[i + 1]){
        //         count = nums[i];
        //     }
        // }
        // cout<<count;
        
    }