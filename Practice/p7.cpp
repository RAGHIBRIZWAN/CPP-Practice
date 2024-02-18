#include <iostream>
using namespace std;

void removeDuplicates(int *arr, int& size){
    for(int i = 0; i < size; i++){
        for(int j = i + 1; j < size; j++){
            if(arr[i] == arr[j]){
                for(int k = j; k < size - 1; k++){
                    arr[k] = arr[k+1];
                }
                size--;
                
            }
        }
    }
}

int main() {
    int arr[] = {1,2,3,2,4,5,4,6};
    int size = 8;
    
    removeDuplicates(arr, size);

    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
