#include <bits/stdc++.h>
#include <chrono>
using namespace std;

// --------------------------define-------------------------------

#define nline "\n"
#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

// #define loop(s, e) for (int i = s; i < e; i++)

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

#define loop(n) for (int i = 0; i < n; i++)

#define val(n)   \
    long long n; \
    cin >> n

// --------------------------solve----------------------------------

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> input(n + 1, 0);

    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        input[a]++, input[b]++;
    }
    map<int, int> mp;

    for (int i = 1; i <= n; i++)
    {
        mp[input[i]]++;
    }
    vector<int> v;
    for (auto i : mp)
        v.push_back(i.second);

    sort(v.begin(), v.end());
    if (v.size() == 3)
        cout << v[1] << ' ' << v[2] / v[1] << endl;
    else
        cout << v[0] - 1 << " " << v[1] / (v[0] - 1) << endl;
}

// ----------------------------main---------------------------------

int main()
{
    fastio();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}