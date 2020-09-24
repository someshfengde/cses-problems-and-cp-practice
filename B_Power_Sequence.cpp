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
   int a[n];
   for(int i=0;i<n;i++)cin >> a[i];
   sort(a,a+n);
  ll int cost=INT64_MAX;
  //cout << cost << endl;
  //2147483647
   for(int i=1;pow(i,n)<1e18;i++){
      ll int sum=0,k=1;
       for(int j=0;j<n;j++){
           sum+=abs(a[j]-k);
           k*=i;  
       }
       cost=min(sum,cost);
   }
  cout << cost << endl;
}

int main(){
   boost;
        solve();
    
}
