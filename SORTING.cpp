#include<iostream>
#include<vector>
using namespace std;

int main(){

  // BUBBLE SORT
    vector<int> arr = {12,45,23,51,8};
    // int arr[] = {12,45,23,51,8};
    // int n= sizeof(arr)/sizeof(arr[0]);
    // int counter = 1;
    int n = arr.size();
    bool check = false;
    
    //METHOD 1: 

    // while (counter<n)
    // {
    //     for (int i = 0; i < n-counter; i++)
    //     {
    //         if(arr[i] > arr[i+1]){
    //             int temp = arr[i];
    //             arr[i] = arr[i+1];
    //             arr[i+1] = temp;
    //         }
    //     }
    //     counter++;
    // }

    //METHOD 2:

    for (int i = 0; i < n-1; i++)
    {
        check = false;
        for (int j = 0; j < n-1-i; j++)
        {
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
				check = true;
            }
        }
        if(!check){
            break;
        }
    }
    

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<",";
    }
}

//SELECTION SORT:

void SelectionSort(int *arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

//INSERTION SORT:

for (int i = 1; i < arr.size(); i++)
    {
        int current = arr[i];
        int j = i-1;
        while (arr[j] > current && j >= 0)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = current;
    }

// SHELL SORT

for (int gap = n/2; gap > 0; gap /= 2)
    {
        for (int i = gap; i < n; i++)
        {
            int key = arr[i];
            int j = i;

            for (; j >= gap && arr[j-gap] > key; j -= gap)
            {
                arr[j] = arr[j - gap];
            }
            arr[j] = key;
        }
    }

// COMB SORT

int GNP(int gap)
{
    gap = (gap*10)/13;

    if (gap < 1)
        return 1;
    return gap;
}

int main(){
    vector<int> a = {12,45,23,51,8};
    int n = a.size();

    int gap = n;
    bool swapped = true;

    while (gap != 1 || swapped == true)
    {
        gap = GNP(gap);

        swapped = false;

        for (int i = 0; i < n - gap; i++)
        {
            if (a[i] > a[i+gap])
            {
                int temp = a[i];
                a[i] = a[i+gap];
                a[i+gap] = temp;
                swapped = true;
            }
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
