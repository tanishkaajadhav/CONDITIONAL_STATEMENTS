// Enter last 5 digits of your PRN in an integer and print each digit of this number in reverse on separate line

#include <iostream>
using namespace std;

class ReverseDigits
{
private:
    int iNum;

public:
    ReverseDigits(int iNo)
    {
        iNum = iNo;
    }

    void DisplayReverse()
    {
        cout << "Digits in reverse order : \n";
        for (int iCnt = 0 ; iCnt < 5 ; iCnt++)
        {
            int digit = iNum % 10;
            cout << digit << "\n";
            iNum = iNum / 10;
        }
    }
};

int main()
{
    int prn;
    cout << "Enter last 5 digits of your PRN: ";
    cin >> prn;

    ReverseDigits pobj(prn);
    pobj.DisplayReverse();

    return 0;
}

/*
OUTPUT
Enter last 5 digits of your PRN: 23510
Digits in reverse order :
0
1
5
3
2
*/