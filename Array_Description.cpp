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
int const maxn=100200;
int const naxn=1e9;
int const mod = 1e9 + 7;
int a[100001];
uint32_t dp[maxn + 1][102]  ;

void solve(){
   int n,m;
   cin >> n >> m;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    if(a[0] == 0){
        for(int i=1;i<=m;i++){
            dp[0][i]=1;
        }
    }
    else{
        dp[0][a[0]] = 1;
    }
    for(int i=1;i<n;i++){
        if(a[i] == 0){
            for(int j=1;j<=m;j++){
                dp[i][j] = dp[i-1][j-1] + dp[i-1][j] + dp[i-1][j+1];
                dp[i][j] %=mod;
            }
        }
        else{
             dp[i][a[i]] = dp[i-1][a[i]-1] + dp[i-1][a[i]] + dp[i-1][a[i]+1];
                dp[i][a[i]] %=mod;
        }
    }
    ll res =0;
    for(int i=1;i<=m;i++){
        res += dp[n-1][i];
        res%=mod;
    }
    cout << res << endl;
}

int main(){
   boost;
        solve();
    
}
