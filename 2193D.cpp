#include <stdio.h>
#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;


int main()
{
    int t;
    cin >> t;
    while(t>0){
        int n;
        cin >> n;
        vector<int> strenght(n);
        vector<int> sword_strikes(n);
        for(int i=0;i<n;i++){
            cin >>strenght[i];
        }
        for(int i=0;i<n;i++){
            cin >>sword_strikes[i];
        }
        sort(strenght.begin(),strenght.end());
        vector<long long> prefix_strikes(n);
        prefix_strikes[0] = sword_strikes[0];
        for(int i=1;i<n;i++){
            prefix_strikes[i] = prefix_strikes[i-1] + sword_strikes[i];
        }
        long long ans=0;
        for(auto &sword:strenght){
            auto it = lower_bound(strenght.begin(),strenght.end(),sword);
            long long usable = strenght.end() - it;
            auto lvls = upper_bound(prefix_strikes.begin(),prefix_strikes.end(),usable);
            int completed = lvls - prefix_strikes.begin();
            ans = max(ans, 1LL* sword * completed);
            
        }
        cout << ans << endl;
        t--;
    }
}