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
ll fun(ll int a,ll int b,ll int x,ll int y , ll int n){
   ll t = min (a-x,n);
   a-=t;
   n-=t;
   t=min(n,b-y);
   b-=t;
   return a*b;
}
void solve(){
   ll a,b,x,y,n;
   cin >> a >> b >> x >> y >> n;
   ll asna=fun(a,b,x,y,n);
   ll asnb=fun(b,a,y,x,n);
   cout << min(asna,asnb) << endl;
}

int main(){
   boost;
   int t;
   cin >> t;
   while(t--)
        solve();
    
}
