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
ll dp[5010][5010]={};
void solve(){
   int n;
   cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)cin>> a[i];
    for(int i=n-1;i>=0;i--){
        for(int j=i+1;j<n;j++){
            if(i==j)dp[i][j] = a[i];
            else{
                dp[i][j] = max(a[i]+min(dp[i+2][j],dp[i+1][j-1]),a[j]+min(dp[i+1][j-1],dp[i][j-2]));
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){cout << dp[i][j]<< " ";}cout << endl;
    }
    cout << dp[0][n-1];
}

int main(){
   boost;
        solve();
    
}
