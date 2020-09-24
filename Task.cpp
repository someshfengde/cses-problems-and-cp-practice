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
   ll  N, K, x1, y1, C, D, E1, E2,F;
   cin >> N >> K >> x1 >> y1 >> C >> D >> E1 >> E2 >> F;
    ll a[N];
    for(int i=0;i<N;i++){
        if(i==0){
            int temp=(C*x1+D*y1 +E1)%F; 
            int temp2 = (D*x1+C*y1 +E2)%F;
            x1 = temp;
            y1 = temp2;
            a[i] = x1+y1;
        }
        int bemp=(C*x1+D*y1 +E1)%F;
        int bemp2=(D*x1+C*y1 +E2)%F;
        x1 = bemp;
        y1 = bemp2;
        a[i] = x1 + y1;
    }
}

int main(){
   boost;
   int t;
   cin >> t;
   int c=1;
   while(t--){
       cout << "Case #" <<c << ": ";
       solve();
       c++;
   }
}
