#include <iostream>
#include <math.h>
using namespace std;

int main() {
	// your code goes here
	
	int n;
	cin>>n;
	int s[10000], t[10000];
	int i;
	for(i=0; i<n; i++)
	    cin>>s[i]>>t[i];
	int diff=0, p_diff=0, w=-1;
	long sum_s=0, sum_t=0;
	i=0;
	while(i<n){
	    sum_s+=s[i];
	    sum_t+=t[i];
	    p_diff=(int)abs(sum_s-sum_t);
	    if(p_diff>diff){
	        diff=p_diff;
	        if(s[i]>t[i])
	            w=1;
	        else
	            w=2;
	    }
	    
	    i++;
	}
	
	cout<<w<<" "<<diff<<"\n";
	return 0;
}
