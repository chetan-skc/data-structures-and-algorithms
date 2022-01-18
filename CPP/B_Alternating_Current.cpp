#include <bits/stdc++.h>
using namespace std;

#define jai ios_base::sync_with_stdio(0);
#define mata cin.tie(0);
#define di cout.tie(0);
#define ll long long int

char s[1234567], st[1234567];
int main()
{
    jai mata di
    scanf("%s", s);
    int e = 0;
    for (int i = 0; s[i]; i++)
    {
        if (e > 0 && st[e - 1] == s[i])
            e--;
        else
            st[e++] = s[i];
    }
    puts(e ? "No" : "Yes");
    return 0;
}
