#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    long long c[n],a;
	    for(int i=0;i<n;i++){
	        cin>>c[i];
	    }
	    a=0;
	    long long m=998244353;
	    for(int j=0;j<n;j++){
	        a=a+c[j];
	        a=a%m;
	    }
	    a=(a*(a-1))%m;
	    cout<<a<<endl;
	}
	return 0;
}
