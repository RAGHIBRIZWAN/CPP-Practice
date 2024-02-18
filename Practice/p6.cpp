#include <iostream>
using namespace std;

void isSorted(int *arr, int size){
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size - 1; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    int arr[] = {4,3,1,6,5,10,8};
    int size = 7;
    
    isSorted(arr, size);
    
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
