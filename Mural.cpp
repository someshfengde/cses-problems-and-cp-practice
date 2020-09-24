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
   string s;
   int n;
   cin >> n;
   cin >>s;
   vector<int> a(n+1);
   for(int i=0;i<n;i++){
       a[i+1]=a[i]+s[i]-'0';
   }
   int l = (n+1)/2;
   int rest=0;
   for(int i=0;i+l-1<n;i++){
       int c = a[i+l]-a[i];
       rest= max(rest,c);
      // cerr << rest << endl;
   }
   cout << rest << endl;
}

int main(){
   boost;
   int t,c=1;
   cin >> t;
   while(t--){
       cout << "Case #" << c << ": ";
        solve();
        c++;
    }
}
//"miDebuggerPath": "C:\\Program Files (x86)\\mingw-w64\\i686-8.1.0-posix-dwarf-rt_v6-rev0\\mingw32\\bin\\gdb.exe",
