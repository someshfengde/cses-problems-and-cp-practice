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
#define int ll
using namespace std;
int const maxn=2e9;
int const naxn=1e9;
 int n,k;
 int boo[(int)2e5];
void sod(int subs){
    int cost = 0;
    sort(boo,boo+k);
    int pos=0;
    if(k%2){
        pos = k/2;
    }
    else {
        int zwa = min(boo[k/2],boo[(k/2)+1]);
        if(zwa == boo[k/2])pos = k/2;
        else pos = k/2+1;
    }
    for(int i=0;i<k;i++){
        cost += (abs(boo[i]-boo[pos]));
    }
    cout << cost<< " ";
}

void solve(){
  
   cin >> n >> k;
   vector<int> a(n);
   for(int i=0;i<n;i++){
       cin >> a[i];
   }
   for(int i=0;i<n-k+1;i++){ 
       int subs=0;
       int bdsm=0;
       for(int j=i;j<i+k;j++){
           subs+=a[j];
           boo[bdsm]=a[j];
           bdsm++;
       }
       sod(subs);
   }
}

int32_t main(){
   boost;
        solve();
    
}
