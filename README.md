# CodingWar
Starting of coding Journey
#include <iostream>
using namespace std;

```
class shop
{

    int itemId[100]; // by default they are private entities
    int itemPrice[100];
    int counter;

public:
    void initcounter(void) { counter = 0; } // initiate the counting
    void setPrice(void);                    // Ask rate from user
    void displayPrice(void);                // Display the given rate
};

void shop ::setPrice(void)
{
    cout << "Enter Id of your item no." << counter + 1 << endl;
    cin >> itemId[counter]; //  '[]' helps in bifurcating the entries
    cout << "Enter price of your item" << endl;
    cin >> itemPrice[counter]; //  '[]' helps in bifurcating the entries
    counter++;                 //  help in increasing the counting by 1 each time
}

void shop ::displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "the price of Item with Id" << itemId[i] << " is " << itemPrice[i] << endl;
    }
}
int main()
{

    shop dukaan;
    dukaan.initcounter();
    for (int i = 0; i < 3; i++)
    {
        dukaan.setPrice();
    }
    dukaan.displayPrice();
    return 0;
}
```
