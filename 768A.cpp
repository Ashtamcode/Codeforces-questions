#include <stdio.h>
#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
   int n;
   
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin >>a[i];
   }
   int count=0;
   int max= *max_element(a.begin(),a.end());
   int min = *min_element(a.begin(),a.end());



   for(int i=0;i<n;i++){
    if(min < a[i] && max > a[i]){
        count++;
    }
   }
   cout << count;
}