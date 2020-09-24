    #include <bits/stdc++.h>
    #define boost ios::sync_with_stdio(0); cin.tie(0);
    #define int long long
    #define endl '\n'
    #define F first
    #define S second
    #define pb push_back
    #define pai pair<int, int>

    using namespace std;
    int n,k;
    const int N = 1e5+5;
    int a[N];
    bool check(int d){
        int required=0;
        for(int i=1;i<n;i++){
            required+=(a[i+1]-a[i]-1)/d;
            if(required>k)return 0;
        }
        return 1;
    }
    int binary(int lo,int hi){
        while(lo<hi){
            int mid = (lo+hi)/2;
            if(check(mid)){
                hi = mid;
            }
            else{
                lo = mid+1;
            }
        }
        return lo;
    }
    int32_t main(){
    boost;
    int t,z=1;
    cin >> t;
    while(t--){
        cout << "Case #" <<z<< ": ";
          cin >> n >> k;
        for(int i=1;i<=n;i++){
            cin >> a[i];
        }
        int ans = binary(1, 1e9);
        cout << ans << endl;
            ++z;
        }
    }
