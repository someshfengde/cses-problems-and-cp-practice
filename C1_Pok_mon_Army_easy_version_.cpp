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
int const naxn=3e5;

int a[300002];
void solve(){
   int n,q;
   cin>> n >> q;
   
   for(int i=1;i<=n;i++){
       cin>> a[i];
   }
   int sum =-1e7;
   for(int i=1;i<=n;i++){
       vector<int> pok;
       for(int j=i;j<=n;j+=2){
           pok.pb(a[j]);
       }
       int z=2;
       int cs=0;
       for(auto x:pok){
           if(z%2==0){
               cs+=x;
           }
           else{
               cs-=x;
           }
           z++;
       }
      
       sum=max(cs,sum);
   }
   cout << sum << endl;
}

int main(){
   boost;
   int t;
   cin >>t;
   while(t--)
        solve();
    
}
