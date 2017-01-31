#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int n;
double x[1000], y[1000];

double dist(int i1, int i2){
    return hypot(x[i1 % n] - x[i2 % n], y[i1 % n] - y[i2 % n]);
}

int main()
{
    double ans = 0;
    int j, k;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> x[i] >> y[i];
    j = n;
    k = n + 1;
    while (k < 2*n)
    {
        while (!(dist(j, k) > dist(j, k - 1) && dist(j, k) > dist(j, k + 1)))
            k++;
        ans = max(ans, dist(j, k));
        j++;
    }
    cout << ans << endl;
    return 0;
}
