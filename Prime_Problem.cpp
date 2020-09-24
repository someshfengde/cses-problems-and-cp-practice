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
#define int ll
using namespace std;
int const maxn=2e9;
int const naxn=1e9;


void solve(){
   int n;
   cin >> n;
 int cnt =0;
   for(int i=1;i<=n*5;i++){
       bool flag = 1;
       if(i==1 || i==0)continue;
       for(int j=2;j<=i/2;j++){
           if(i%j==0){
               flag = 0;
               break;
           }
       }
      
       if(flag == 1){
           cnt++;
           cout << i << endl;
       }
       if(cnt==n){
           break;
       }
   }
}

int32_t main(){
   boost;
        solve();
    
}
