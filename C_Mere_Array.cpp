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
   vector<int> a(n);
   vector<int> b(n);
   int mi=10e8;
    for(int i=0;i<n;i++){cin >> a[i];b[i]=a[i];mi=min(a[i],mi);}
    sort(b.begin(),b.end());
    bool flag=1;
    for(int i=0;i<n;i++){if(a[i]!=b[i])flag=0;}
    if(flag==1){cout <<"YES" << endl;return;}
    else{

        for(int i=0 ;i<n;i++){
            if(a[i]==b[i]){continue;}
            else if(a[i]%mi!=0){
                cout << "NO" << endl;
                return;
            }
        }
        cout << "YES"<< endl;

    }
}

int main(){
   boost;
   int t;
   cin >> t;
   while(t--)
        solve();
    
}