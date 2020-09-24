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

using namespace std; 
int n,k,p;
int a[1000][1000];
int dp[51][2000];
int solve(){
   cin >> n >> k >>p;
   dp[0][0] =0;
   for(int i=0;i<n;i++){
       memcpy(dp[i+1], dp[i], sizeof(dp[0]));
       for(int j=0,s=0;j<k;j++){
           
           cin >> a[i][j];
           s+=a[i][j];
            for(int l=0;l+j+1 <= p;l++){
            dp[i+1][l+j+1] = max(dp[i][l]+s,dp[i+1][l+j+1]);
            }
       }
   }
   return dp[n][p];

}

int main(){
   boost;
   int t;
   cin >>t;
   for(int i=1;i<=t;i++){
        int x=solve();
        cout << "Case #"<< i <<": " << x << endl;
        }
    
}
