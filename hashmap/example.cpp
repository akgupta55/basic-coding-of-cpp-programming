#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 6, 4, 5, 5, 7, 3, 8, 2, 8, 3};
    unordered_map<int, int> umap;
    for (int i = 0; i < 13; i++)
    {
        int key = arr[i];
        umap[key]++;
    }
    cout << endl;
    cout << endl;

    for (auto x : umap)
    {
        cout << x.first << " " << x.second << endl;
    }

    // find how many number comes more than onces
    int cnt = 0;
    for (auto it = umap.begin(); it != umap.end(); it++)
    {
        if ((it->second) > 1)
        {
            cnt++;
            cout << it->first << endl;
        }
    }
    cout << cnt << endl;
}