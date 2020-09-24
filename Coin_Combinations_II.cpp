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
int const naxn=1e8,mod = 1e9+7;
int n,x;
ll dp[naxn+1];
void solve(){
   
   cin >> n >> x;
   int coin[n];
   for(int i=0;i<n;i++)cin >> coin[i];
   dp[0]=1;
   for(int i=0;i<n;i++){
       for(int j=0;j<x+1;j++){
           if(coin[i]<=j){
               dp[j] +=(dp[j-coin[i]])%mod;
           }
       }
   }
   cout << dp[x] %mod ;

}

int main(){
   boost;
        solve();
    
}
