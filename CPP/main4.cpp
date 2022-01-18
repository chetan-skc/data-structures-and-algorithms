#include <iostream>
#include <math.h>

using namespace std;
int main()
{
    int n;
    cin >> n;
    int rem[10];
    int i = 0;
    int j, r;

    while (n > 0)
    {
        int r = n % 10;
        rem[10 - i] = r;
        i++;
        n = n / 10;
    }

    for (j = 0; j <= 10; j++)
    {
        printf("%d ", rem[j]);
    }

    return 0;
}
