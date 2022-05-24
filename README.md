# CodingWar
Starting of coding Journey
```
#include <iostream>
using namespace std;


void Roundoff (int A[],int n) {
    
     for (int i =0; i<n; i++) {
        if (A[i]<38) {
            cout<<A[i]<<endl;
        } else{
          int c[] = {A[i]%10};
     if (c[i]<5){
        c[i] = 5-c[i];
        if (c[i]<3) {
            c[i] = A[i] + c[i];
        } else {
            c[i] = A[i];
        }
     } else if (c[i]==5) {
         c[i] = A[i];
     }else {
         c[i] = c[i]-5;
         if (c[i]<3) {
             c[i] = A[i];
         }else {
             c[i] = (A[i]/10);
             c[i] = c[i]*10 + 10;
         }
     }
     cout<<c[i]<<endl;
     }   
        }
        
}
int main (){
    int n;
    cin>>n;
    int B[n];
    for (int i = 0; i<n;i++) {
        cin>>B[i];
    }
    Roundoff(B,n);
    
    return 0;
    
}
```
