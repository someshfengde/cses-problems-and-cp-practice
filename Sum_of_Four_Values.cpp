#include<iostream>
#include<unordered_map>
//#include<array>
#define boost ios::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
#define ar array
using namespace std;
void solve(){
   int n,x;
   scanf("%d%d",&n,&x);
   int a[n];
   unordered_map<int, ar<int,2>> mp;
   mp.reserve(1<<21);
   for(int i=0;i<n;i++)scanf("%d",&a[i]);
   for(int i=0;i<n;i++){
       for(int j=1+i;j<n;j++){
           if(mp.find(x-a[i]-a[j])!=mp.end()){
                ar<int,2> p=mp[x-a[i]-a[j]];
                cout << i+1 << " " << j+1 << " " << p[0]+1 <<" " <<p[1] + 1;
                return;     
           }
       }
       for(int j=0;j<i;j++){
           mp[a[i]+a[j]] = {i,j};
       }
   }
   cout << "IMPOSSIBLE" <<endl;

}

int32_t main(){
   boost;
        solve();
    
}
