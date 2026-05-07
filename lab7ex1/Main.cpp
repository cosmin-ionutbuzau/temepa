#include <iostream>
#include <cstring>
using namespace std;

int dp[101][101];
int W[100], P[100];

int rucsac(int n, int M) {
    if (n == 0 || M == 0) return 0;
    if (dp[n][M] != -1) return dp[n][M];

    int rez;
    if (W[n-1] > M)
        rez = rucsac(n-1, M);
    else
        rez = max(rucsac(n-1, M), rucsac(n-1, M - W[n-1]) + P[n-1]);

    dp[n][M] = rez;
    return rez;
}

int main() {
    int w[] = {10, 20, 30};
    int p[] = {60, 100, 120};
    int n = 3;
    int M = 50;

    for (int i = 0; i < n; i++) {
        W[i] = w[i];
        P[i] = p[i];
    }

    memset(dp, -1, sizeof(dp));
    cout << rucsac(n, M) << endl;

    return 0;
}
