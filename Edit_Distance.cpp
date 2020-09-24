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

void solve(){
   string s;
   cin >> s;
   string s2;
   cin >> s2;
   map<int,char> mp;
   for(int i=0;i<s.length();i++){
       mp[s[i]]++;
   }
   for(int i=0;i<s2.length();i++){
      if(mp[s2[i]]>0){ mp[s2[i]]--;}
      else mp[s2[i]]++;
   }
   int res;
   for(auto x: mp){
       res+=x.first;
   }
   cout << res << endl;
}

int main(){
   boost;
        solve();
    
}
