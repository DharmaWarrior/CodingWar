# CodingWar
Starting of coding Journey
```
#include <iostream>
using namespace std;

int main() {
	
    int T ,x , m, d;
    cin>>T;
	for (int i =0 ; i<T ; i++){
	
	cin>>x>>m>>d;
	
	int Time_Taken = m*x;
	
	if (Time_Taken>=(x + d)) {
	    cout<<x + d<<endl;
	} else {
	    cout<<Time_Taken<<endl;
	}
	}
	return 0;
}
```
