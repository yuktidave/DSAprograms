// print the pattern:
// 1
// 21
// 321
// 4321
// 54321

#include <iostream>
using namespace std;

int main()
{
    int n = 1;
    cin >> n;

    int i = 1;

    while(i<=n)
    {
        int j = 1;
        while(j<=i)
        {
            cout << i-j+1;
            j++;
        }
        cout << endl;
        i++;
    }


}
