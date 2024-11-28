#include <bits/stdc++.h>
using namespace std;

#define all(a) a.begin(), a.end()
#define fastio ios_base::sync_with_stdio(0); cin.tie(0)

int lin[1000];
int col[1000];
int diag;

int main() {
    fastio;

    int n; cin>>n;
    int board[n][n];

    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin>>board[i][j];

    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            lin[i]+=board[i][j];
            col[j]+=board[i][j];
        }
        diag+=board[i][i];
    }



}