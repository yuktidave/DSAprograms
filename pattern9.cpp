// print the pattern:
// 12345
// 12345
// 12345
// 12345
// 12345

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
        while(j<=n)
        {
            cout << j;
            j++;
        }
        cout << endl;
        i++;
    }


}
