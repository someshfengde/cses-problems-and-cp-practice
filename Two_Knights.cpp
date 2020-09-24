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
   for(int k=1;k<=n;++k){
       ll a1= k*k;
       ll a2 = a1 * (a1-1)/2;
       ll b = 2 * (k - 2) * (2 * (k - 4) + 6);
    //  {
    //        a2 -= 4*(k-1)*(k-2);
    //    }
       cout << a2-b << endl;
   }
}

int main(){
   boost;
        solve();
    
}
