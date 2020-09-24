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
#define MOD 1000000007
using namespace std;
int const maxn=2e9;

int const naxn=1e9+7;
int grid[10000][10000];
ll dp [10000][10000];
void solve(){
   int n;
   cin >> n;
   for(int i=0;i<n;i++){
       for(int j=0;j<n;j++){
           char x;
           cin >> x;
           if(x=='.')grid[i][j] = 1;
           else grid[i][j] = 0;

       }
   }
   if(grid[0][0]==0){
       cout << 0 << endl;
       return;
   }
   for(int i=0;i<=n;i++){
       dp[i][0] = 0;
       dp[0][i] = 0;
   }
   if(grid[0][0] == 1)dp[0][1]=1;
   //uppper left to lower right 
   for(int i=1;i<=n;i++){
       for(int j=1;j<=n;j++){

          if(grid[i-1][j-1])
           {dp[i][j] = dp[i-1][j] + dp[i][j-1];}
           else dp[i][j] = 0;
           dp[i][j]%=MOD;
       }
   }
   cout << dp[n][n];
   

}

int main(){
   boost;
        solve();
    
}

