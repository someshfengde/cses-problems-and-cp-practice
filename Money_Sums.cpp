/*
You're my honeybunch, sugar plum
Pumpy-umpy-umpkin
You're my sweetie pie
You're my cuppycake, gumdrop
Snoogums, boogums, you're
The apple of my eye

And I love you so
And I want you to know
That I'm always be right here
And I want to sing
Sweet songs to you
Because you are so dear...

*/
#include <bits/stdc++.h>
#include<iostream>

#define boost ios::sync_with_stdio(0); cin.tie(0);
#define ll long long
#define endl '\n'
#define F first
#define S second
#define pb push_back
#define pai pair<int, int>
#define ar array

using namespace std;
int const maxn=2e9;
int const naxn=1e9;
int dp[100002];
void solve(){
      int n;
   cin >> n;
   memset(dp,0,100002);
   vector<int> coins(n);
   for(int i=0;i<n;i++){
       cin>> coins[i];
   }
  dp[0]=1;
for(int i=0;i<n;i++){
    for(int j=100010;j>=0;j--){
        if(j>=coins[i])dp[j]|= dp[j-coins[i]];
    }
}
vector<int>ans;
for(int i=1;i<1e5;i++){
    if(dp[i])ans.pb(i);
}
cout << ans.size() << endl;
for(auto x : ans){
    cout << x << " " ;
}
}

int main(){
   boost;
        solve();
    
}
