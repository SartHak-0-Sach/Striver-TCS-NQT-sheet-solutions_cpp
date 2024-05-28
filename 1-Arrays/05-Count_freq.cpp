#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    if (n <= 3)
        {
            cout << "NO SOLUTION" << endl;
            exit(0);
        }

    if (n == 4)
    {
        cout << "2 4 1 3" << endl;
        exit(0);
    }

    vector<int> ans;

    for (int i = 1; i <= n; i += 2)
        ans.push_back(i);

    for (int i = 2; i <= n; i += 2)
        ans.push_back(i);

    for (int i = 0; i < n; i++)
        cout << ans[i] << endl;

    return 0;
}