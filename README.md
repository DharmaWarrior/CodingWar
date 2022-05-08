# CodingWar
Starting of coding Journey
```
#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	for(int i=0;i<t;i++) {
	    int n,a,b,c[2]={0};
	    cin>>n>>a>>b;
	    int arr[n];
	    for (int z=0; z<n; z++) {
	        
	        cin>>arr[i];
	        if(arr[i]==a)
	        c[0]++;
	        if(arr[i]==b)
	        c[1]++;
	    }
	        double probability = (c[0]*c[1]*1.0)/(n*n*1.0);
	        cout<<probability<<endl;
	    
       }
       return 0;
}
```
