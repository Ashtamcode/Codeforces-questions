#include <stdio.h>
#include<vector>
#include<iostream>
using namespace std;
int main()
{
    int n;;
    cin >> n;
    vector<int> opinion(n);
    for(int i=0;i<n;i++){
        cin >> opinion[i];
    }
    bool flag = false;
    for(int i=0;i<n;i++){
        if(opinion[i] == 1){
            flag = true;
            break;
        }
        
    }
    if(flag){
        cout << "HARD";
    }else{
        cout << "EASY";
    }
}