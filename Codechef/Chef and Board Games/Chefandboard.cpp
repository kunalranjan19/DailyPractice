#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n,a;
	cin>>t;
	while(t--){
	    cin>>n;
	    a=0;
	    for(int i=1;i<=n;i=i+2){
	        a+=(n-i+1)*(n-i+1);
	    }
	    cout<<a<<endl;
	}
	return 0;
}
