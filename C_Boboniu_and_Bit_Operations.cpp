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
   int n,m;
   cin >> n >> m ;
   ll int a[n];
   for (int i = 0; i < n; i++)
   {
       cin >> a[i];
   }
   ll int b[m];
   for(int i=0;i<n;i++){
       cin >> b[i];
   }
  ll int s=INT64_MAX;
  ll int x;
  ll int j;
  ll int ans=0;
   for(ans=0;ans<512;ans++){
       x=1;
       for(int i=0;i<n;i++){
           for(j=0;j<m;j++){
               ll int tmp=(a[i]&b[j])|ans;
               if(tmp<=ans){
                   
                   break;
               }
           } 
           if(j==m){
               x=0;
               break;
       }    }
            if(x){break;}
      
   }
   cout << ans << endl;
}

int main(){
   boost;
        solve();
    
}
