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
   int n,k;
   cin >> n >> k;
   int ans[n];
   ar<int,3> a[n];
   for(int i=0;i<n;i++){
       cin >> a[i][1] >> a[i][0];
       a[i][2] = i;
   }
   sort(a,a+n);
   set<ar<int,2>> s;
   int ans2 =0;
   for(int i=0;i<n;i++){
    auto it = s.lower_bound({a[i][1]+1});
    if(it!=s.begin()){--it;
    ans[a[i][2]] = (*it) [1];
    s.erase(it);}
    else
    ans[a[i][2]] = s.size();
    if(s.size()<k){
       s.insert({a[i][0] ,ans[a[i][2]]});
       ans2 ++;
    }
   }
   cout << ans2 << endl;


}

int main(){
   boost;
        solve();
    
}
