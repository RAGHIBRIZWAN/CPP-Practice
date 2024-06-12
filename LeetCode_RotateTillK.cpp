#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // USING ARRAY

    // int nums[] = {1, 2, 3, 4, 5, 6, 7};
    // int k, num;

    // cout<<"Enter value of K: ";
    // cin>>k;

    // int temp = 0;
    // while (k != 0)
    // {
    //     for (int i = sizeof(nums) / sizeof(nums[0])-1; i >= 0; i--)
    //     {
    //         temp = nums[i];
    //         nums[i] = nums[i + 1];
    //         nums[i + 1] = temp;
    //     }
    //     k--;
    // }

    // for (int i = 0; i < sizeof(nums) / sizeof(nums[0]); i++)
    // {
    //     cout << nums[i] << endl;
    // }

    // USING VECTORS

    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int k, num;

    cout << "Enter value of K: ";
    cin >> k;

    int temp = 0;
    while (k != 0)
    {
        int i = nums.size()-1;
        temp = nums[i];
        nums.pop_back();
        nums.insert(nums.begin(), temp);
        k--;
        i--;
    }

    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << endl;
    }
}