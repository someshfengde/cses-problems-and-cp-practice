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
int const naxn=1e9;

void solve(){
  ll a,b,c,d;
  cin>> a >> b >> c >> d;
   ll z[5];
   z[0] = a*c;
z[1] = b*c;
z[2] = a*d;
z[3] = b*d;
ll box = -1e18;
for(int i=0;i<4;i++){
    box = max(z[i],box);
}
cout << box << endl;

}

int main(){
   boost;
        solve();
    
}
