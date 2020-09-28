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
int const nax=1e8+1;
int const M=1e5;
ll c[(int)2*100*(int)1e5+1];
int n,a[M];
void solve(){
   cin >> n;
   int s1=0,s2=0;
   for(int i=0;i<n;i++){
       cin>>a[i];
       if(a[i]<0)s1-=a[i];
       else s2+=a[i];
   }
   ll ans = 0;
   int t=0;
   ++c[s1];
  for(int i=0;i<n;i++){
      t+=a[i];
      for(int j=0;j*j<=s2;j++){
          if(s1+(t-j*j)>=0)ans+=c[s1+(t-j*j)];
      }
      ++c[s1+t];
  }
  
   cout << ans << endl;
   memset(c,0,4*(s1+s2+1));
}

int32_t main(){
   boost;
   int t=1,z=1;
   cin>>t;
   while(t--){
   cout<< "Case #"<< z <<  ": " ;
        solve();
        z++;
    }
}
