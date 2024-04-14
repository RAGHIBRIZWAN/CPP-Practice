#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums1 = {-1,0,0,3,3,3,0,0,0};
    int m = 6;
    vector<int> nums2 = {1,2,2};
    int n = 3;

    for (int i = 0; i < nums1.size(); i++)
    {
        if (m <= 0 )
        {
            nums1.erase(nums1.begin() + i);
            i--;
        }
        m--;
    }
    for (int i = nums2.size() - 1; i >= 0; i--)
    {
        if (n > 0)
        {
            nums1.push_back(nums2[i]);
        }
        n--;
    }

    sort(nums1.begin(), nums1.end());

    for (int i = 0; i < nums1.size(); i++)
    {
        cout << nums1[i] << " ";
    }

    return 0;
}
