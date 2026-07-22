#include <stdio.h>
#include<vector>
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<vector<int>> a;
    for(int i=0;i<n;i++){
        vector<int>passengers(2);
        cin >> passengers[0] >> passengers[1];
        a.push_back(passengers);
    }

    
    int passenger = a[0][1];
    int maxcap =passenger;
    for(int i=1;i<n;i++){
        passenger += a[i][1];
        passenger -= a[i][0];
        maxcap = max(maxcap,passenger);
    }
    cout << maxcap;
    
}