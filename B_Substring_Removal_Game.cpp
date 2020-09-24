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
   string s;
   cin >> s;
   vector<int> b;
   int as=0;
   for(auto x:s){
       if(x=='1'){
           as++;
       }
       else if(as){
           b.pb(as);
           as=0;
       }

   }
   if(as){
        b.pb(as);
   }
   sort(b.rbegin(),b.rend());
   int ans=0;
   for(int i=0;i<b.size();i+=2){
        ans+=b[i];
   }
    cout << ans << endl;
}

int main(){
   boost;
   int t;
   cin >> t;
   while(t--)
        solve();
    
}
