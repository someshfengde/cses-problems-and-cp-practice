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
ll a[1005];
ll int x,d;
ll works(int mi){
    for(int i=0;i<x;i++){
        if(mi%a[i]!=0){
            mi+=(a[i]-mi%a[i]);
        }
    }
    return mi<=d;
}

void solve(){
   cin >> x >> d;
   for(int i=0;i<x;i++)cin >> a[i];
   int lo=0,hi=d;
   while(lo<hi){
       ll mid =(lo+hi+1)/2;
       if(works(mid)){
           lo = mid;
       }
       else{
           hi=mid-1;
       }
   }
   cout << lo << endl;
    //check(d);
}

int main(){
   boost;
   int t;
   cin >> t;
   int a=1;
   while(t--){
       cout << "Case #" << a << ": ";
        solve();
        a++;
    }
}
