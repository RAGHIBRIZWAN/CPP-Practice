METHOD 1:
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int target = 1;
    bool ans = false;
    int count1 = 0,count2 = 0;
    for (int i = 0; i <= target; i++)
    {
        for (int j = 0; j <= target; j++)
        {
            if ((i*i)+(j*j) == target)
            {
                ans = true;
                count1 = i;
                count2 = j;
                break;
            }
            else{
                ans = false;
            }
            
        }
        if (ans)
        {
            break;
        }
        
        
    }

    if (ans)
    {
        cout<<count1<<" "<<count2;
    }
    else{
        cout<<"Not found";
    }
       
}

METHOD 2:
bool judgeSquareSum(int c) {
        for (long i = 0; i*i <= c; i++)
        {
            int j = c- i*i;
            int sqrtJ = sqrt(j);
                if ((i*i)+(sqrtJ * sqrtJ) == c)
                {
                    return true;
                    return 0;
                }
            }
        return false;
    }
