#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cout << "enter a number : " << endl;
    cin >> n;
    int originalNo = n;
    int sum = 0;
    while (n > 0)
    {
        int lastDigit = n % 10;
        sum += pow(lastDigit, 3);
        n = n / 10;
    }

    if (sum == originalNo)
    {
        cout << "The Armstrom number " << endl;
    }
    else
    {
        cout << "The Number is not a Armstrom number";
    }
    return 0;
}
