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
int dp[5005][5001];
void solve(){
   string s;
   cin >> s;
   string s2;
   cin >> s2;
   for(int i=1;i<=s.size();i++){
       dp[i][0] = i;
   }
   for(int j=1;j<=s2.size();j++){dp[0][j] = j;}
   for(int i=1;i<=s.size();i++){
       for(int j=1; j<=s2.size();j++){
           dp[i][j] = 1e9;
           if(s[i-1]==s2[j-1])dp[i][j] = dp[i-1][j-1];
           dp[i][j] = min({dp[i][j]-1, dp[i-1][j] ,dp[i][j-1] ,dp[i-1][j-1]})+1;
       }
   }
   cout << dp[s.size()][s2.size()];
}
int main(){
   boost;
        solve();
    
}
