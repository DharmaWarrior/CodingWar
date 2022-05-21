# CodingWar
Starting of coding Journey
```
#include <iostream>
using namespace std;

int main()
{
    int A[5] = {0, 1, 2, 3, 4};

    for (auto x : A)
    { // if we dont know the data type of array A we can simply use #auto or even int if we already know
        cout << x << endl;
    }
    return 0;
}

int main()
{
    int A[5] = {0, 1, 2, 3, 4};

    for (int i = 0; i < 5; i++)
    { // here we have to definen range of arrays and data type too so we dont prefer this..
        cout<<A[i
    }
    << endl;
}
return 0;
}

int main()
{
    int A[5] = {0, 1, 2, 3, 4};

    for (int x : A)
    { // it will print each element with an increment of 1 however real value won't change
        cout << ++x << endl;
    }
    return 0;
}

int main()
{
    int A[5] = {0, 1, 2, 3, 4};

    for (int &x : A)
    { // it will print each element with an increment of 1 however real value will change
        cout << ++x << endl;
    }
    return 0;
}

int main()
{
    int A[5] = {0, 1, 2, 3, 4};
    int sum = 0;
    for (int i = 0; i < 5; i++)
    { // it will find sum we must define initially that sum should be 0.
        sum = sum + A[i];
    }
    cout << "the sum is  " << sum << endl;
    return 0;
}

int main()
{
    int A[5] = {0, 1, 2, 3, 4};
    int max;
    max = A[0];

    for (int i = 0; i < 5; i++)
    { // it will find max amongst all.
        if (A[i] > max)
        {
            max = A[i];
        }
    }
    cout << "the max is " << max << endl;
    return 0;
}

int main()
{
    int A[n];
    int n, i;
    cin >> n;
    cout << "enter the numbers";
    for (int i = 0; i < n; i++)
    { // it will find index of a key....
        cin >> A[i];
    }
    cout << "Enter key ";
    int key;
    cin >> key;

    for (i = 0; i < n; i++)
    {
        if (key == A[i])
        {
            cout << i << endl;
        }
    }
    return 0;
}


//Code to define structure

struct card
{
    int face;
    int color;
    int shape;

};
int main() {
    struct card c;             /* declaration   (if we use instead c as)*/ deck[52];//it will give array of different cards
    struct card c = {0,1,1};   // declaration + initialisation   

    c.face =1;
    c.color =0;
    c.shape=0;

    cout<<c.face<<endl;
    
    return 0;
}

int main() {
    int a=10;
    int A[5] = {2,3,4,5,6};
    int *p;
    p =A;
    //for an array we dont use & howver for normal variable we define p =&a
    //every pointer takes same amount of memory irrespective of their data type
    
    cout<<&a<<endl;
    return 0;
}
```
