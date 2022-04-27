#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<pair<float, int>> vp;
    for (int i = 1; i <= n; i++)
    {
        float a;
        cin >> a;
        vp.push_back({a, i});
    }
    sort(vp.begin(), vp.end(), greater<pair<float, int>>());
    vector<vector<pair<float, int>>> output(22);
    for (int i = 0; i < 20; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 4 * i; j < 4 * i + 4; j++)
            {
                output[i].push_back(vp[j]);
            }
        }
        else
        {
            for (int j = 4 * i + 3; j >= 4 * i; j--)
            {
                output[i].push_back(vp[j]);
            }
        }
    }
    output[20].push_back(vp[80]);
    output[20].push_back(vp[81]);
    output[21].push_back(vp[83]);
    output[21].push_back(vp[82]);

    float sum;
    for (auto a : output)
        sum += a[0].first - a[1].first;

    vector<pair<float, vector<int>>> swaps(4);
    swaps[0].first = abs(sum);
    swaps[1].second = vector<int>(1);

    float temp_sum = abs(sum);
    int bestIndex = 0;
    for (int i = 0; i < 22; i++)
    {

        float temp = abs(sum - 2 * (output[i][0].first - output[i][1].first));
        if (temp_sum > temp)
        {
            temp_sum = temp;
            swaps[1].second[0] = i;
        };
    }
    swaps[1].first = temp_sum;
    if (temp_sum < swaps[bestIndex].first)
        bestIndex = 1;

    swaps[2].second = vector<int>(2);
    temp_sum = abs(sum);
    for (int i = 0; i < 22; i++)
    {
        for (int j = i; j < 22; j++)
        {

            float temp = abs(sum - 2 * (output[i][0].first - output[i][1].first + output[j][0].first - output[j][1].first));
            if (temp_sum > temp)
            {
                temp_sum = temp;
                swaps[2].second[0] = i;
                swaps[2].second[1] = j;
            };
        }
    }
    swaps[2].first = temp_sum;
    if (temp_sum < swaps[bestIndex].first)
        bestIndex = 2;

    swaps[3].second = vector<int>(3);
    temp_sum = abs(sum);
    for (int i = 0; i < 22; i++)
    {
        for (int j = i; j < 22; j++)
        {
            for (int k = j; k < 22; k++)
            {

                float temp = abs(sum - 2 * (output[i][0].first - output[i][1].first +
                                            output[j][0].first - output[j][1].first +
                                            output[k][0].first - output[k][1].first));
                if (temp_sum > temp)
                {
                    temp_sum = temp;
                    swaps[3].second[0] = i;
                    swaps[3].second[1] = j;
                    swaps[3].second[2] = k;
                };
            }
        }
    }
    swaps[3].first = temp_sum;
    if (temp_sum < swaps[bestIndex].first)
        bestIndex = 3;

    for (auto a : swaps[bestIndex].second)
    {
        swap(output[a][0], output[a][1]);
    }

    for (auto a : output)
    {
        for (auto b : a)
            cout << b.second << "   ";
        cout << '\n';
    }

    for (auto a : output)
    {
        for (auto b : a)
            cout << b.first << "   ";
        cout << '\n';
    }

    sum = 0;
    for (auto a : output)
        sum += a[3].first - a[4].first;
    cout << sum;


    return 0;
}
