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
int const MAXN = 1e5 + 5;
int cnt[MAXN]={0};
int main(){
   int n;
   cin >> n;
   int cnt2=0,cnt4=0;
   for(int i=1;i<=n;i++){
       int x;
       cin >> x;
       cnt2-=cnt[x]/2;
       cnt4-=cnt[x]/4;
       cnt[x]++;
       cnt2+=cnt[x]/2;
       cnt4+=cnt[x]/4;
   }
   int q;
   char type;
   int x;
   cin >> q;
   for(int i=1;i<=q;i++){
       cin >> type >>x;
       cnt2-=cnt[x]/2;
       cnt4-=cnt[x]/4;

       if(type =='+')cnt[x]++;
       else cnt[x]--;
       cnt2+=cnt[x]/2;
       cnt4+=cnt[x]/4;
       if(cnt4>=1 && cnt2>=4)cout << "YES" << endl;
       else cout << "NO" << endl;
   }
}