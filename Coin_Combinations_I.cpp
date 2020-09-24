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
int const maxn=2e9, mod = 1e9+7;
int const naxn=1e6+1;
ll dp[naxn];
void solve(){
   int n,x;
   cin >> n>> x;
   int c[n];
   dp[0] =1 ;
   for(int i=0;i<n;i++)cin >> c[i];
   for(int i=1;i<=x;i++){
       for(int j=0;j<n;j++){
            if(i-c[j]>=0){
                dp[i] +=(dp[i-c[j]])%mod;
            }
       }
   }
   cout << dp[x]%mod << endl;
}

int main(){
   boost;
        solve();
    
}
