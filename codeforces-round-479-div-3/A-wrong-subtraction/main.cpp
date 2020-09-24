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
#include <iostream>
#define boost ios::sync_with_stdio(0); cin.tie(0);
#define ll long long
#define endl '\n'
#define F first
#define S second
#define pb push_back
#define pai pair<int, int>
using namespace std;
void solve(){
  ll int n,a;
   cin >> n ;
   cin >> a;
   while(a>0){
      if(n%10 == 0){
         n=n/10;
      }
      else n--;
      a--;
   }
   cout << n << endl;


}

int main(){
   boost;
   int t=1;
  // cin >> t;
   while(t--)
        solve();
    return 0;
}

