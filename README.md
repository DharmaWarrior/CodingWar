# CodingWar
Starting of coding Journey
```
#include <iostream>
using namespace std;

int main() {
	
    int T, A, B, C;
    cin>>T;
	for (int i =0 ; i<T ; i++){
	cin>>A>>B>>C;
	if (A<B && A<C) {
	    cout<<"DRAW"<<endl;
	} else if (B<C && B<A) {
	    cout<<"Bob"<<endl;
	}else {
	    cout<<"Alice"<<endl;
	}
	}
	return 0;
}
```
