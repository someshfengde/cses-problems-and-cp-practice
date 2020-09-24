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
   map<int , int > mp;
   int q;
   cin >> q;
   while(q--){
   char a;
   cin >> a;
   if(a=='a'){
      int a,b;
      cin >> a >> b;
      mp[a]=b;
   }
   else if(a=='b'){
      int x;
      cin >> x;
      if(mp.find(x)==mp.end()){
         cout << -1 << " ";
      }
      else {
         cout << mp[x] << " ";
      }
   }
   else if(a=='c'){
      for(auto box:mp){
         cout << box.first << " " << box.second << " ";
      }
   }
   
   }
   cout << endl;
   
}

int main(){
   boost;
   int t=0;
   cin >> t;
   while(t--)
        solve();
    
}
