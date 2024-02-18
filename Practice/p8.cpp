#include <iostream>
using namespace std;

void say(string *arr, int num){
    for(int i = 0; i < sizeof(num)-1; i++){
        int temp = num % 10;
        num /= 10;
        
        for(int i = 0; i < 5; i++){
            if(i == temp){
                cout << arr[i] << " ";
                break;
            }
        }
    }
}

int main(){
    string arr[5] = {"zero","one","two","three","four"};
    int num;
    cin >> num;
    
    say(arr, num);
    
    return 0;
}
