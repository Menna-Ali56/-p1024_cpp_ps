#include <iostream>

using namespace std;

int main()
{
    float x, y ,z;
    int xx, yy;
    char r;

    cout << "Enter the first number: \n";
    cin >> x;

    cout << "Enter the second number: \n";
    cin >> y;

    cout << "Enter the operator / * - + % : \n";
    cin >> r;

        switch (r)
        {
            case  '/' :
                if(x != 0 && y == 0 )
                {
                    cout << "Math error: cannot divide by 0 \n";
                }
                else if (x == 0 && y == 0)
                {
                    cout << "Infinite number of solution= (0/0) undefined quantity. \n";
                }
                else
                {
                     z= x/y;
                     cout << "(" << x << ") / "  "(" << y <<") =" << z <<"\n";
                }
                break;

            case '*':
                 z= x*y;
                 cout << "(" << x << ") * "  "(" << y <<") =" << z <<"\n";
                 break;

            case '+':
                 z= x+y;
                 cout << "(" << x << ") + "  "(" << y <<") =" << z <<"\n";
                 break;

            case '-':
                 z= x-y;
                 cout << "(" << x << ") - "  "(" << y <<") =" << z <<"\n";
                 break;


            case '%':
                 xx= (int) x;
                 yy= (int) y;

                 if (xx == x && yy == y)
                 {
                     z= xx % yy;
                 cout << "(" << xx << ") % "  "(" << y <<") =" << z <<"\n";
                 }
                 else
                 {
                     cout << "cannot execute modulo operation for floating point numbers.";
                 }

                 break;

             default:
                cout <<"Invalid character in operator \n";
                break;
        }

}
