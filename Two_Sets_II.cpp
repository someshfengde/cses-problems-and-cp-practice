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
int const naxn=1e9+7;
int n;
ll dp[500*(500+1)/2];
void solve(){
   cin >> n;
   int s = n*(n+1)/2;
   if(s&1){
       cout << 0 << endl;
       return;
   }
   s/=2;
   dp[0] =1;
   for(int i=1;i<=n;i++){
       for(int j=i*(i+1)/2;j>=i;j--){
           dp[j] =(dp[j]+dp[j-i])%naxn;
       }
   }
   cout << dp[s]*((naxn+1)/2)%naxn<< endl;
}

int main(){
   boost;
        solve();
    
}
