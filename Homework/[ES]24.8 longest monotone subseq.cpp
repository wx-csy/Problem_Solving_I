#include <iostream>
#include <algorithm>
using namespace std;

int arr[1050];
int n = 0;
int s[1050];
int top = 0;

int main()
{
    int ans = 0;
    while (cin >> arr[n]) n++;
    for (int i = 0; i < n; i++)
    {
        while (top != 0 && s[top - 1] > arr[i]) top--;
        s[top] = arr[i];
        top++;
        ans = max(ans, top);
    }
    top = 0;
    for (int i = 0; i < n; i++)
    {
        while (top != 0 && s[top - 1] < arr[i]) top--;
        s[top] = arr[i];
        top++;
        ans = max(ans, top);
    }
    cout << ans << endl;
    return 0;
}
