#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    float x[n];
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }

    sort(x, x + n, greater<float>());

    float a[85];
    for (int i = 1; i <= 84; i++)
    {
        a[i] = x[i - 1];
    }

    float d[23][5] = {0};
    int k = 1;
    while (k <= 80)
    {
        for (int i = 1; i <= 20; i++)
        {
            for (int j = 1; j <= 4; j++)
            {
                d[i][j] = a[k++];
            }
        }
    }
    d[21][1] = a[81];
    d[21][2] = a[82];
    d[22][1] = a[84];
    d[22][2] = a[83];

    for (int i = 2; i <= 20; i += 2)
    {
        swap(d[i][4], d[i][1]);
        swap(d[i][3], d[i][2]);
    }

    // for (int i = 1; i <= 22; i++)
    // {
    //     for (int j = 1; j <= 4; j++)
    //     {
    //         cout << d[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    float c1, c2, c3, c4;
    for(int i=1; i<=22; i++){
        c1 += d[i][1];
        c2 += d[i][2];
        c3 += d[i][3];
        c4 += d[i][4];
    }
    float p = c1-c2;
    float q = c3-c4;
    cout << p << q << endl;
    
    vector<float> c;
    vector<float> b;

    for(int i=1; i<=22; i++){
        c.push_back(d[i][1] - d[i][2]);
    }
    for(int i=1; i<=22; i++){
        b.push_back(d[i][3] - d[i][4]);
    }

    int p1 = INT_MAX;
    if(p != 0){
        for(int i=1; i<=22; i++){
            int p2 = abs(c[i]-(p/2));
            p1 = min(p1, p2);
        }
        for(int i=1; i<=22; i++){
            if(c[i]==p1+(p/2)){
                swap(d[i][1], d[i][2]);
                break;
            }
        }
    }

    p1 = INT_MAX;
    if(q != 0){
        for(int i=1; i<=22; i++){
            int p2 = abs(b[i]-(q/2));
            p1 = min(p1, p2);
        }
        for(int i=1; i<=22; i++){
            if(b[i]==p1+(q/2)){
                swap(d[i][3], d[i][4]);
                break;
            }
        }
    }

    for(int i=1; i<=22; i++){
        c1 += d[i][1];
        c2 += d[i][2];
        c3 += d[i][3];
        c4 += d[i][4];
    }
    p = c1-c2;
    q = c3-c4;
    cout << p << q << endl;

    for (int i = 1; i <= 22; i++)
    {
        for (int j = 1; j <= 4; j++)
        {
            cout << d[i][j] << " ";
        }
        cout << endl;
    }



    return 0;
}
