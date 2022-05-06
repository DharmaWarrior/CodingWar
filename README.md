# CodingWar
Starting of coding Journey
```
#include <iostream>
using namespace std;

int main() {
    int T ,n ,x ,p ;
    cin>>T;
	for (int i =0 ; i<T ; i++){
	
	cin>>n>>x>>p;
	int Total_Marks = 3*x + -1*(n-x);
	if (Total_Marks>=p) {
	    cout<<"PASS"<<endl;
	} else {
	    cout<<"FAIL"<<endl;
	}
	}
	return 0;
}
```
