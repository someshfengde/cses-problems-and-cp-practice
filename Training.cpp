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
#define int long long
#define F first
#define S second
#define pb push_back
#define pai pair<int, int>

using namespace std;

void solve(){
   int n,p;
   cin >> n >> p;
   vector<int>a(n);
   for(int i=0;i<n;i++){
       cin >> a[i];
   }
   sort(a.begin(),a.end());
   ll sum[n+1];
   sum[0]=0;
   for(int i=0;i<n;i++){
       sum[i+1]=sum[i]+a[i];
   }
   ll res = 1e18;
   for(int j=p-1;j<n;j++){
       ll bum = sum[j+1]-sum[j-(p-1)];
       ll cost = a[j] * p - bum;
       res = min(res,cost);
   }
   cout << res << endl;
}

int32_t main(){
   boost;
   int t;
   cin >>t;
   int c=1;
   while(t--){
        cout << "Case #" << c << ": ";
        solve();
        c++;
    }
}
