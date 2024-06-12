#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    string jewels = "aA",stones = "aAbbb";
    int count = 0;
    sort(stones.begin(),stones.end());
    sort(jewels.begin(),jewels.end());

    for (int i = 0; i < jewels.size(); i++)
    {
        for (int j = 0; j < stones.size(); j++)
        {
            if (jewels[i] == stones[j])
            {
                count++;
            }
            
        }
        
    }
    cout<<count;
    
}