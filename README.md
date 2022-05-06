# CodingWar
Starting of coding Journey
```
#include <iostream>
using namespace std;

int main() {
	
    int T, M, N, K;
    cin>>T;
	for (int i =0 ; i<T ; i++){
	cin>>M>>N>>K;
	int Time_Consumed = K*N ;
	
	if (Time_Consumed<M) {
	    cout<<"YES"<<endl;
	} else {
	    cout<<"NO"<<endl;
	}
	}
	return 0;
}
```
