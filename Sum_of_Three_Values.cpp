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
int const naxn=1e9;

void solve(){
   int n,x;
   cin >> n>> x;
   ar<int,2> a[n];
   for(int i=0;i<n;i++)cin >> a[i][0],a[i][1]=i;
   sort(a,a+n);
   for(int i=0;i<n;i++){
       ll x2 = x-a[i][0];
       for(int j=i+1,k=n-1;j<k;j++){
           while(j<k && a[j][0]+a[k][0]>x2)k--;
           if(j<k &&a[j][0]+a[k][0]==x2){
               cout << a[i][1]+1 << " " << a[j][1]+1<< " " << a[k][1]+1 <<endl;
               return ;
           }

       }
   }
   cout <<"IMPOSSIBLE"<<endl;

}

int main(){
   boost;
        solve();
    
}
