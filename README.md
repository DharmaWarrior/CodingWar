# CodingWar
Starting of coding Journey
```
#include <iostream>
using namespace std;

int main() {
	
    int T ,x , y, z;
    cin>>T;
	for (int i =0 ; i<T ; i++){
	
	cin>>x>>y>>z;
	
	int Points_Earned = x + 2*z;
	
	if (Points_Earned>=y) {
	    cout<<"YES"<<endl;
	} else {
	    cout<<"NO"<<endl;
	}
	}
	return 0;
}
```
