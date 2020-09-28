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
int n;
ar<int,3> a[nax+1];
void solve(){
   cin>> n;
   for(int i=0;i<n;i++){
       cin >> a[i][1] >> a[i][0] >> a[i][2];
   }
   sort(a,a+n);
   set<ar<int,2>> dp;
   dp.insert({0,0});
   ll ldp =0;
   for(int i=0;i<n;i++){
       auto it =dp.lower_bound({a[i][1]});
       --it;
       ldp=max(ldp,(*it)[1]+a[i][2]);
       dp.insert({a[i][0],ldp});


   }
   cout << (*--dp.end())[1]<< endl;
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
