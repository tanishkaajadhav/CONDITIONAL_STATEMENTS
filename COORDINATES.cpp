// To find coordinates are from which quaderant

#include <iostream>
using namespace std;

class Coordinates
{
private:
    int x, y;

public:
    Coordinates(int a, int b)
    {
        x = a;
        y = b;
    }

    void Quadrant()
    {
        if (x > 0 && y > 0)
        {
            cout << "Point is in 1st Quadrant \n";
        }
            
        else if (x < 0 && y > 0)
        {
            cout << "Point is in 2nd Quadrant \n";
        }
        else if (x < 0 && y < 0)
        {
            cout << "Point is in 3rd Quadrant \n";
        }
        else if (x > 0 && y < 0)
        {
            cout << "Point is in 4th Quadrant \n" ;
        }
        else if (x == 0 && y != 0)
        {
            cout << "Point is on Y-axis \n";
        }
        else if (y == 0 && x != 0)
        {
            cout << "Point is on X-axis \n";
        }
        else
        {
            cout << "Point is at origin \n";
        }
    }
};

int main()
{
    int x, y;
    cout << "Enter coordinates (x y): ";
    cin >> x >> y;

    Coordinates qobj(x, y);
    qobj.Quadrant();

    return 0;
}

/*
OUTPUT

Testcase 1 : 
Enter coordinates (x y): 5 10
Point is in 1st Quadrant

Testcase 2 : 
Enter coordinates (x y): -3 7
Point is in 2nd Quadrant

Testcase 3 :
Enter coordinates (x y): -4 -6
Point is in 3rd Quadrant

Testcase 4 :
Enter coordinates (x y): 8 -4
Point is in 4th Quadrant

Testcase 5 :
Enter coordinates (x y): 5 0
Point is on X-axis

Testcase 6 :
Enter coordinates (x y): 0 6
Point is on Y-axis

Testcase 7 :
Enter coordinates (x y): 0 0
Point is at origin

*/