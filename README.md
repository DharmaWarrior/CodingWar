# CodingWar
Starting of coding Journey
```#include <iostream>
using namespace std;


class employee {
    static int count ; // bydefault it starts with initial value of 0
    int id;

    public:

    void setdata(void){
        cout<<"Enter the id "<<endl;
        cin>>id;
        count ++;
    }
    void getdata(void){
        cout<<"the id of this employee is "<<id<<" and this is employee number "<<count<<endl;
    }
    static void getcount(void){

        //  cout<<id;   cant be used it will show error because normal entities cant be used in static entities
        cout<<"the value of count is "<<count<<endl;
    }
};


int employee :: count;    //using this as static variable and default value is 0

int main(){


    employee saar, rohan, raju;
    
    saar.setdata();
    saar.getdata();
    emloyee :: getcount();

    rohan.setdata();
    rohan.getdata();
    emloyee :: getcount();    
    
    raju.setdata();
    raju.getdata();
    emloyee :: getcount();
    
    return 0;
}
```
