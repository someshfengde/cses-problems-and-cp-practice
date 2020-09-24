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
const int mod = 1e9 +7;
using namespace std;

void solve(){
   int n;
   cin >> n;
   ll int fact=1;
   ll int res=1;
   for(int i=1;i<=n;i++){
       fact*=i;
      if(i<n){ res*=2;
        res%=mod;}
        fact%=mod;
   } 
    fact-=res;
    fact%=mod;
    if(fact<0)fact+=mod;
    cout << fact << endl;
    return;

}

int main(){
   boost;
        solve();
    
}
