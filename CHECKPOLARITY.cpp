// Find positive and negative number

#include <iostream>
using namespace std;

class CheckNumber
{
private:
    int iNum;

public:
    CheckNumber(int iNo)
    {
        iNum = iNo;
    }

    void Number()
    {
        if (iNum > 0)
            cout << "The number is positive \n";
        else if (iNum < 0)
            cout <<"The number is negative \n";
        else
            cout << "The number is zero \n";
    }
};

int main()
{
    int iNo;
    cout << "Enter a number: ";
    cin >> iNo;

    CheckNumber nobj(iNo);
    nobj.Number();

    return 0;
}

/*
OUTPUT

Testcase 1 : 
Enter a number: 3
The number is positive

Testcase 2 :
Enter a number: -983
The number is negative
*/