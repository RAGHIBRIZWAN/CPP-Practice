#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

int main()
{

    // USING ARRAY

    // int arr[] = {-1,0,1,2,-1,-4};

    // for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
    // {
    //     for (int j = i+1; j < sizeof(arr)/sizeof(arr[0]); j++)
    //     {
    //         for (int k = j+1; k < sizeof(arr)/sizeof(arr[0]); k++)
    //         {
    //             if (arr[i]+arr[j]+arr[k] == 0 && i!= j && j!=k && i!=k)
    //             {
    //                 cout<<"["<<arr[i]<<","<<arr[j]<<","<<arr[k]<<"]"<<endl;
    //             }

    //         }

    //     }

    // }

    // int arr[] = {-1, 0, 1, 2, -1, -4};
    // int a = sizeof(arr) / sizeof(arr[0]);
    // for (int i = 0; i < a - 2; i++)
    // {
    //     int j = i + 1;
    //     int k = j + 1;
    //     while (j < a - 1 || k < a)
    //     {
    //         if (arr[i] + arr[j] + arr[k] == 0 && i != j && j != k && i != k)
    //         {
    //             cout << "[" << arr[i] << "," << arr[j] << "," << arr[k] << "]" << endl;
    //         }
    //         j++;
    //         k++;
    //     }
    // }

    // USING VECTOR:
    vector<int> nums = {-2,0,1,1,2};
    vector<vector<int>> ans;
    int a = nums.size() - 1;
    for (int i = 0; i < a - 1; i++)
    {
        int j = i + 1;
        int k = j + 1;
        while (j < a && k < nums.size())
        {
            if (nums[i] + nums[j] + nums[k] == 0 && i != j && j != k && i != k)
            {
                ans.push_back({nums[i], nums[j], nums[k]});
            }
            k++;
            if (k == a+1)
            {
                j++;
                k = j + 1;
            }
        }
    }

    for (int i = 0; i < ans.size(); i++)
    {
        sort(ans[i].begin(), ans[i].end());
    }

    sort(ans.begin(), ans.end());

    ans.erase(unique(ans.begin(), ans.end()), ans.end());

    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}