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
int n,a,b;
ll c[nax+1];
void solve(){
   cin>> n>> a >> b;
   c[0] = 0;
   for(int i=0;i<n;i++){
       cin>>c[i+1];
       c[i+1]+=c[i];
   }
   set<ar<ll,2>> se;
   ll ans =0;
   for(int i=0;i<=n;i++){
       if(i>=a){
           se.insert({c[i-a],i-a});
       }
       if(se.size()){
           ans= max(c[i]-(*se.begin())[0],ans);
       }
       if(i>=b){
           se.erase({c[i-b],i-b});
       }
   }
   cout << ans << endl;

}

int main(){
   boost;
   int t=1,z=1;
   //cin>>t;
   while(t--){
   //cout<< "Case #"<< z++ <<  ": " ;
        solve();
    }
}
