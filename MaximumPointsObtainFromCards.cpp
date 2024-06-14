#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> cardPoints = {11,49,100,20,86,29,72};
    int k = 4;
    int i = 0, j = cardPoints.size()-1,sum = 0;

    while(k > 0){
        if (cardPoints[i] > cardPoints[j]) {
            sum += cardPoints[i];
            i++;
        } else {
            sum += cardPoints[j];
            j--;
        }
        k--;
    }
    cout<<sum;
}