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
int const nax=2e5;
int const M=1e9;
int dp[1000001];
void solve(){
   int n;
   cin >> n;
   int na=0;
   bool flag = true;
   for(int i=1;i<=n-n/2;i++){
       if(n%2==0){
           flag =false;
               }
    
   }
   cout << na<< endl;
}

int main(){
   boost;
   int t=1,z=1;
   cin>>t;
   while(t--){
   //cout<< "Case #"<< z++ <<  ": " ;
        solve();
    }
}

