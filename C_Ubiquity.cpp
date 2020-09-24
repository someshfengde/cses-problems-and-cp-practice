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
const ll naxn=1e9+7;
ll power(ll x, ll y){
    ll res =1;
    for(int i=0;i<y;i++){
        res = res * x %naxn;
    }
    return res;
}
void solve(){
   ll n;
   cin >>n;
   ll ans =power(10,n)-power(9,n)-power(9,n)+power(8,n);
   ans %=naxn;
   ans= (ans+naxn)%naxn;
   cout << ans << endl;
}

int main(){
   boost;
        solve();
    
}
