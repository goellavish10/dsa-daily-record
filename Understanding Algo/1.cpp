#include <iostream>
using namespace std;

int main()
{
    long int n, sum = 0;
    cin >> n;

    while (n >= 0)
    {
        sum += n;
        n--;
    }

    cout << sum << endl;
    cout << "END OF PROGRAM" << endl;
    return 0;
}