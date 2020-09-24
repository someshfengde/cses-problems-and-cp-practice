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
   int n;
   cin >> n;
   vector<int> a(n);
   int cnt0=0;
   int cnt1=0;
   for(int i=0;i<n;i++){
       cin >> a[i];
       if(!a[i])cnt0++;
   }
   cnt1=n-cnt0;
   if(cnt0 >=n/2){
       cout << cnt0 << endl;
       for(int i=0;i<cnt0;i++){
           cout << 0 << " ";
       }
       cout << endl;
   }
   else {
       cout << cnt1 - cnt1%2 << endl;
       for(int i=0;i<cnt1-cnt1%2;i++){
           cout << 1 << " " ;
       }
       cout << endl;
   }
}

int main(){
   boost;
   int t;
   cin >>t;
   while(t--)
        solve();
    
}
