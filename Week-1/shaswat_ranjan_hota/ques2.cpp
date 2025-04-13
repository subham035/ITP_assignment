#include <iostream>
using namespace std;
bool checkTri(int a, int b, int c, int cc)
{
    if(cc == 3)
      return true;
    else if(a + b > c)
      return checkTri(b, c, a, cc+1);
    else 
      return false;
}
void checkType(int a, int b, int c)
{
    if(a == b && b == c)
      cout << "Equilateral" << endl;
    else if(a == b || b == c)
      cout << "Isoceles" << endl;
    else
      cout << "Scalene" << endl;  
}
int main()
{
    int a, b, c;
    cout << "Enter the 3 sides of Triangle : " ;
    cin >> a >> b >> c;
    if(checkTri(a, b, c, 0))
    {
        cout << "Triangle can be formed of type - ";
        checkType(a, b, c);
    }
    else 
       cout << "Triangle cannot be formed" << endl;
    return 0;
}
