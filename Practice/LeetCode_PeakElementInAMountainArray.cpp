#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> arr = {0,1,0};
    int max = 0, ans = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == max)
        {
            ans = i;
        }
        
    }
    

    cout<<ans;
    
}
