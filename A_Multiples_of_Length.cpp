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
    int a[n];
    for(int i=0;i<n;i++)cin >> a[i];
    if(n==1){
        for(int i=0;i<3;i++){
            cout << 1 << " " << 1 << endl;
            cout << -1 * a[0] << endl;
            a[0]=0;
        }
        return;
    }
    cout << 1 << " " << n << endl;
    for(int i=0;i+1<n;i++){
        cout << -1 * a[i]*n << " "  << 0 <<endl;
    }
    cout << 1 <<" " << n-1 << endl;
    for(int i=0;i+1<n;i++)cout << a[i]*n-1 << " ";cout << endl;
    cout << n << " " << n << endl; 
    cout << -1 * a[n-1] << endl;
    return;
}

int main(){
   boost;   
        solve();
    
}
