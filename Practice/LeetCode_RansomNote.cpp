#include<iostream>
using namespace std;

int main(){
    string ransomNote ="fihjjjjei", magazine ="hjibagacbhadfaefdjaeaebgi";
    bool check = false;
    if (magazine.size() < ransomNote.size())
    {
        cout<<"False";
        return 0;
    }

    for (int i = 0; i < ransomNote.size(); i++)
    {
        check = false;
        for (int j = 0; j < magazine.size(); j++)
        {
            if (ransomNote[i] == magazine[j])
            {
                check = true;
                magazine.erase(magazine.begin()+j);
                break;
            }         
        }
        if (!check)
        {
            break;
        }
        
    }

    if (check)
    {
        cout<<"True";
    }
    else{
        cout<<"False";
    }
    
    
}
