#include <iostream>
#include <algorithm>
using namespace std;

int arr[1050];
int n = 0;
int s[1050];
int top = 0;

int main()
{
    int ans;
    int temp;
    while (cin >> arr[n]) n++;
    for (int i = 0; i < n; i++)
    {
        temp = upper_bound(s, s + top, arr[i]) - s;
        s[temp] = arr[i];
        top = max(temp + 1, top);
    }
    ans = top;
    top = 0;
    for (int i = 0; i < n; i++)
    {
        arr[i] = -arr[i];
        temp = upper_bound(s, s + top, arr[i]) - s;
        s[temp] = arr[i];
        top = max(temp + 1, top);
    }
    cout << max(ans, top) << endl;
    return 0;
}
