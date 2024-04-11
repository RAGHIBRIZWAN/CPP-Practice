#include<iostream>
#include<vector>
using namespace std;

int main(){

    // USING ARRAY

    int arr[] = {-1,0,1,2,-1,-4};

    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
    {
        for (int j = i+1; j < sizeof(arr)/sizeof(arr[0]); j++)
        {
            for (int k = j+1; k < sizeof(arr)/sizeof(arr[0]); k++)
            {
                if (arr[i]+arr[j]+arr[k] == 0 && i!= j && j!=k && i!=k)
                {
                    cout<<"["<<arr[i]<<","<<arr[j]<<","<<arr[k]<<"]"<<endl;
                }   
            }   
        }   
    }  
}
