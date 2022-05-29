# CodingWar
Starting of coding Journey
```
#include<iostream>

using namespace std;

 class rectangle {
 private:

    int length;
    int breadth;

 public:

 rectangle(int l,int b) {  //here we have used pointers which gonna directly access the main function 
    length = l;
    breadth = b;
 }

 int area() {                    //here we have not used pointers so which gonna make another structure  
    return length*breadth ;
 }

 void changelength(int l){  //here we have used pointers which gonna directly access the main function 
    length = l;
 }
 };
 int main  () {
    rectangle r(10,5);

     r.area();
     r.changelength(20);
} 
```
