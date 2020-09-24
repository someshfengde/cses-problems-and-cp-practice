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

void solve(){
  ll int x1,x2,x3;
  cin >> x1 >> x2 >> x3;
  ll int y1,y2,y3;
  cin >> y1 >> y2 >> y3;
  ll int pos=min(x3,y2);
  ll int ans=0;
  ans += 2LL*pos;               
  y2-=pos;
  x3-=pos;
  ll int maxi=max(0LL,y3-x3-x1);
  ans-=2LL*maxi;
  cout << ans    << endl;
  cerr << ans << endl;
}

int main(){
   boost;
   int t;
   cin >> t;
   while(t--)
        solve();
    
}
