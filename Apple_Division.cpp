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
   vector<int> a(n+1);
   ll sum=0;
   for(int i=0;i<n;i++){
       cin >> a[i];
       sum+=a[i]; 
   }
   ll ans =0;
   for(int i=0;i<1<<n;i++){
        ll cs=0;
        for(int j=0;j<n;j++){
            if(i>>j&1){
                cs +=a[j];
            }
        }
        if(cs<=sum/2){
            ans=max(ans,cs);
        }
   }
   cout << sum -2*ans << endl;
}

int main(){
   boost;
        solve();
    
}
