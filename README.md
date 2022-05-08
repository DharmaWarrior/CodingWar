# CodingWar
Starting of coding Journey
```
#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	
	for(int i = 0; i<T ;i++) {
	    int x,y,k;
	    cin>>x>>y>>k;
	    
	    if (x%k==0 && y%k==0) {
	        cout<<"yes"<<endl;
	    } else {
	        cout<<"no"<<endl;
	    }
	}
	return 0;
}
```
