#include <iostream>
using namespace std;
long long int dp[10001][10001];
long long int optimal_strategy(long long int ar[], long long int i, long long int j)
{
    if (i > j)
    {
        return 0;
    }
    if (dp[i][j] != -1)
    {
        return dp[i][j];
    }
    int q1 = ar[i] + min(optimal_strategy(ar, i + 2, j), optimal_strategy(ar, i + 1, j - 1));
    int q2 = ar[j] + min(optimal_strategy(ar, i, j - 2), optimal_strategy(ar, i + 1, j - 1));
    int q = max(q1, q2);
    dp[i][j] = q;
    return dp[i][j];
}
int main()
{
    long long int n;
    cin >> n;
    long long int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            dp[i][j] = -1;
        }
    }
    long long int ans = optimal_strategy(ar, 0, n - 1);
    cout << ans;
    return 0;
}