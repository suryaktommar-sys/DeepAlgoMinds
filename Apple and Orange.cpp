#include <bits/stdc++.h>
using namespace std;

void countApplesAndOranges(
    int s, int t,
    int a, int b,
    vector<int> apples,
    vector<int> oranges)
{
    int appleCount = 0;
    int orangeCount = 0;

    for (int x : apples) {
        int pos = a + x;
        if (pos >= s && pos <= t)
            appleCount++;
    }

    for (int x : oranges) {
        int pos = b + x;
        if (pos >= s && pos <= t)
            orangeCount++;
    }

    cout << appleCount << endl;
    cout << orangeCount << endl;
}

int main() {
    int s, t;
    cin >> s >> t;

    int a, b;
    cin >> a >> b;

    int m, n;
    cin >> m >> n;

    vector<int> apples(m);
    vector<int> oranges(n);

    for (int i = 0; i < m; i++)
        cin >> apples[i];

    for (int i = 0; i < n; i++)
        cin >> oranges[i];

    countApplesAndOranges(s, t, a, b, apples, oranges);

    return 0;
}