#include <bits/stdc++.h>
#include <chrono>
using namespace std;

// --------------------------define-------------------------------

#define nline "\n"
#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

#define loop(s, e) for (int i = s; i < e; i++)

#define ll long long int

#define nll unsigned long long

#define lld long double

#define yes cout << "YES" << endl

#define no cout << "NO" << endl

#define mod 1000000007

#define unmap unordered_map<long long int, long long int>

#define dsort(a) sort(a.begin(), a.end(), greater<int>())

#define pb push_back

#define vll vector<long long int>

#define vin(v)                  \
    ;                           \
    for (int i = 0; i < n; i++) \
    {                           \
        int u;                  \
        cin >> u;               \
        v.push_back(u);         \
    }

#define ttt          \
    int TESTCASE;    \
    cin >> TESTCASE; \
    while (TESTCASE--)

#define arrin(a, n)                         \
    for (int INPUT = 0; INPUT < n; INPUT++) \
    cin >> a[INPUT]

#define arrout(a, n)                       \
    for (ll INPUT = 0; INPUT < n; INPUT++) \
    cout << a[INPUT] << " "

#define rep(i, j, n) for (int i = j; i <= n; i++)

#define f(i, n) for (int i = 1; i < n; i++)

#define val(n)   \
    long long n; \
    cin >> n

// --------------------------solve----------------------------------
long long n, m, ans, bj;
int a[1005][1005];
int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};

void dfs(int x, int y)
{
    if (a[x][y] == 0)
        return;
    bj += a[x][y];
    a[x][y] = 0;
    for (int i = 0; i < 4; i++)
    {
        int ux = x + dx[i], uy = y + dy[i];
        dfs(ux, uy);
    }
}

// ----------------------------main---------------------------------

int main()
{
    fastio();
    int t;
    cin >> t;
    while (t--)
    {
        ans = 0;
        cin >> n >> m;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                cin >> a[i][j];
            }
        }
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                if (a[i][j])
                {
                    bj = 0;
                    dfs(i, j);
                    ans = max(ans, bj);
                }
            }
        }
        cout << ans << endl;
    }
}