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
   int n,d,m;
   cin >> n >> d >> m;
   vector<int> small(n+2,0);
   vector<int> big(n+2,0);
   for(int i=0;i<n;i++){
       int x;
       cin >> x;
       if(x<=m)small.push_back(x);
       else big.push_back(x);
   }
   sort(small.rbegin(),small.rend());
   sort(big.rbegin(),big.rend());
  big.insert(big.begin(),0);
    for(int i=1;i<(int)big.size();++i){
        big[i]+=big[i-1];
    }
   ll ans =0;
   ll sma=0;
   //cout << "rem  cnt_big  maybe  ans" << endl;
   for(int i=0;i<=n;++i){
       
       int rem=n-i;
       
        int cnt_big= (rem+d)/(d+1);
      
        ll maybe=big[cnt_big];
        ans =max(ans,maybe+sma);
         //cout<< rem << " " << cnt_big << " " << maybe << " "  << ans <<  endl;
        sma+=small[i];
   }
   cout << ans << endl;
}

int main(){
   boost;
        solve();
    
}
