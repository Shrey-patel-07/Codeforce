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

void solve()
{
    int n;
    cin >> n;
    ll time, min_time = INT_MAX;
    string skill;
    ll first = INT_MAX, second = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> time;
        cin >> skill;
        if (skill == "00")
            continue;
        else if (skill == "10")
        {
            first = min(first, time);
        }
        else if (skill == "01")
        {
            second = min(second, time);
        }
        else
        {
            min_time = min(min_time, time);
        }
    }
    min_time = min(min_time, first + second);
    cout << (min_time == INT_MAX ? -1 : min_time) << endl;
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
