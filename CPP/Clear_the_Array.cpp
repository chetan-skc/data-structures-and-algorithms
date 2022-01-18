/
{
    Driver Code Starts
#include <bits/stdc++.h>
        using namespace std;

    // } Driver Code Ends
    class Solution
    {
    public:
        // Function to return a list of integers denoting spiral traversal of matrix.
        vector<int> spirallyTraverse(vector<vector<int>> matrix, int r, int c)
        {
            // code here
            vector<int> ans;
            int minr = 0;
            int minc = 0;
            int maxr = r - 1;
            int maxc = c - 1;
            int tne = r * c;
            int cnt = 0;
            while (cnt < tne)
            {
                // top
                for (int i = minr, j = minc; j <= maxc && cnt < tne; j++)
                {
                    ans.push_back(arr[i][j]);
                    cnt++;
                }
                minr++;
                // right
                for (int i = minr, j = maxc; i <= maxr && cnt < tne; i++)
                {
                    ans.push_back(arr[i][j]);
                    cnt++;
                }
                maxc--;
                // bottom
                for (int i = maxr, j = maxc; j >= minc && cnt < tne; j--)
                {
                    ans.push_back(arr[i][j]);
                    cnt++;
                }
                maxr--;
                // left
                for (int i = maxr, j = minc; i >= minr && cnt < tne; i--)
                {
                    ans.push_back(arr[i][j]);
                    cnt++;
                }
                minc++;
            }
            return ans;
        }
    };

    // { Driver Code Starts.
    int main()
    {
        int t;
        cin >> t;

        while (t--)
        {
            int r, c;
            cin >> r >> c;
            vector<vector<int>> matrix(r);

            for (int i = 0; i < r; i++)
            {
                matrix[i].assign(c, 0);
                for (int j = 0; j < c; j++)
                {
                    cin >> matrix[i][j];
                }
            }

            Solution ob;
            vector<int> result = ob.spirallyTraverse(matrix, r, c);
            for (int i = 0; i < result.size(); ++i)
                cout << result[i] << " ";
            cout << endl;
        }
        return 0;
    } // } Driver Code Ends