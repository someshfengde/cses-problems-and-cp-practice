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
const int maxe = 2e5;
ar<int,2> a[maxe];
void solve(){
   int n;
   cin >> n;
   for(int i=0;i<n;i++){
       cin >> a[i][1] >> a[i][0];
   }
   sort(a,a+n);
   ll ans =0 , l=0;
   for(int i=0;i<n;i++){
       if(a[i][1]>=l){
           ++ans;
           l=a[i][0];
       }
   }
   cout << ans <<endl;  
   
}

int main(){
   boost;
        solve();
    
}
