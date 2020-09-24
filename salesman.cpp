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

using namespace std;
int const maxn=2e9;
int const naxn=1e9+7;

void solve(){
   double totalpay,onepay;
   int days;
   cin>> totalpay >> onepay >> days;
   double p = totalpay;
    double lo =  1e-16 ,hi = 1000 ,m;
    while(hi/lo>1+1e-14){
        m=(hi+lo)/2;
        bool z = false;
        for(int i=0;i<days;i++){
            p*= (1+m);
            p-=onepay;
            if(p<0){z=true;}
        }
        if(z){
            lo = m;
        }
        else hi = m;
    }
    cout << m*120<< endl;

}

int main(){
   boost;
        solve();
    
}
