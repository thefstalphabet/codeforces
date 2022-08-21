    #include <bits/stdc++.h>
    using namespace std;
    void solve()
    {
        /*
        n is for total number of aarray item that we need to find
        k is to divide each element of array to obtain b
        b is for beauty
        s is for total sum of the array elements
        */
        long long int n, k, b, s;
        cin >> n >> k >> b >> s;
        vector<long long int> vec(n);
        if (s < k * b || s > k * b + n * (k - 1))
            cout << "-1" << endl;
        else
        {
            vec[0] = k * b;
            s = s - k * b;

            // doing manualy for first element
            if(s > 0) {
                vec[0] = vec[0] + min (s, k-1);
                s = s - min(s, k-1);
            }

            for (int i = 1; i < n; i++)
            {
                if (s > 0)
                {
                    vec[i] = min(s, k - 1);
                    s = s - vec[i];
                }
            }
            for (auto ele : vec)
            {
                cout << ele << " ";
            }
            cout << endl;
        }
    }
    int main()
    {
        int testCases;
        cin >> testCases;
        while (testCases--)
            solve();
        return 0;
    }

