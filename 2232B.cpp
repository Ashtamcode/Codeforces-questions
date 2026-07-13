#include <stdio.h>
#include<vector>
#include<iostream>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while(test>0){
        int n;
        cin >> n;
        vector<int> cake(n);
        vector<int>ans(n);
        for(int i=0;i<n;i++){
            cin >> cake[i];
        }
       
        long long sum = 0;
        long long mn = LLONG_MAX;
        for(int i=0;i<n;i++){
            sum += cake[i];
            mn = min(mn, sum / (i+1));
            cout << mn << " ";
        }
       cout << endl;

        test--;
    }
}