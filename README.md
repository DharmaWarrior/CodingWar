# CodingWar
Starting of coding Journey
```
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--){
	    int a,b,c,d; cin>>a>>b>>c>>d;
	    if(a<b){
	        a+=c;
	    }else{
	        b+=c;
	    }
	    if(a<b){
	        a+=d;
	    }else{
	        b+=d;
	    }
	    
	    if(a<b){
	        cout<<"S"<<endl;
	    }else{
	        cout<<"N"<<endl;
	        
	    }
	    
	}
	return 0;
}
```
