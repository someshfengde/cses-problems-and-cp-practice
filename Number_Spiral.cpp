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
   ll y,x;
   cin >> y>> x;
   ll z = max(y,x);
   ll ans =0;
   ll z2 = (z-1)*(z-1);
   if(z2%2==0){
       if(y==z){
           ans= z2+x;
       }
       else{
           ans = z2 + 2 * z -y;
       }
   }
   else{
       if(x==z){ans = z2 + y;}
       else{
           ans = z2 + 2 * z -x;
       }
   }
   cout << ans << endl;

}

int main(){
   boost;
   int t;
   cin >>t;
   while(t--)
        solve();
    
}
