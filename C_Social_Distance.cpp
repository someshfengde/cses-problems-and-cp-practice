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
   ll int n,k;
   cin >> n >> k;
   string a;
   cin >> a;
   ll int count =0;
   for(int i=0;i<n;i++){
       bool asd=true;
    //    if(a[i]=='1')i+=k;
    //    else if(a[(a[i]-'0')+k]!='1' && a[(a[i]-'0')-k]!='1'){
    //        a[i] = '1';
    //        count ++;
    //        i+=k;
    //    }
     for(int j=i;j<=i+k;j++){
         if(a[j]=='1')asd=false;
         if(j-k>=0){
             if(a[j-k]=='1')asd=false;
         }
     }
    //  for(int buoy=i;buoy>=i-k && buoy>=0;buoy--){
    //      if(a[buoy]=='1')asd=false;
    //  }
       if(asd){
           a[i] ='1';
           count++;
           i+=k;
       }
   }
   cout << count << endl;
}

int main(){
   boost;
   int t;
   cin >> t;
   while(t--)
        solve();
    
}
