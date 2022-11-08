#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    int c,a;
	    string s=" ";
	    cin>>s;
	    c=0;
	    for(int i=0;i<n;i++){
	      if(s[i]=='1'&&s[i+1]=='0')
	        c++;
	    }
	    cout<<c<<endl;
	}
	return 0;
}
