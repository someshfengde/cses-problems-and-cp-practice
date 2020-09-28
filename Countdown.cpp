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
    #define int ll
    using namespace std;
    int const maxn=2e5+1;
    int const naxn=1e9;
    int a[maxn];
    int cou = 0;
    bool chk(int start,int end){
        bool flag =true;
        for(int i=start+1;i<end;i++){
            if(a[i]!=a[i-1]-1){flag = false;break;}
        }
        if(a[end-1]!=1)flag = false;
        if(flag)cou++;
        return flag;
    }
    void solve(){
    int n,k;
    cin >> n >> k;
    
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++){
        if(a[i]==k){if(chk(i,i+k));}
    }
    cout << cou << endl;
    }

    int32_t main(){
    boost;
    int t;
    cin >> t;

    int z=1;
    while(t--){
        cout <<"Case #" << z++ << ": " ;
        cou =0;
            solve();
        }
    }
