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
int dp[501][501];
void solve(){
   int a,b;
   cin >> a >> b;   
   for(int i=1;i<=a;i++){
       for(int j=1;j<=b;j++){
           if(i^j)dp[i][j]= 1e9;
           for(int k =1;k<i;k++)
           dp[i][j] = min(dp[i][j],dp[k][j] + dp[i-k][j]+1);
           for(int k=1;k<j;k++)
           dp[i][j] = min(dp[i][j],dp[i][k]+dp[i][j-k]+1);
       }
   }
   cout << dp[a][b];

}

int main(){
   boost;
        solve();
    
}
