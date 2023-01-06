#include <bits/stdc++.h>
using namespace std;
void solution()
{
    int r1, r2;
    cin >> r2 >> r1;
    int n;
    cin >> n;
    int an1 = 0;
    int an2 = 0;
    vector<int> a1;
     vector<int> a2;
    for (int i=0; i < n; i++)
    {

        int x, y;
        cin >> x >> y; 
        int d1 = x * x;
        int d2 = y * y;
        int dis = r1 + r2;
        dis = dis * dis;
        d2 += d1;
       
        if (dis >= d2)
        {
            
            a1.push_back(d2);
            an1++;
        }
    }
    int m;
    cin >> m;
    for (int i=0; i < m; i++)
    {

        int x, y;
        cin >> x >> y; 
          int d1 = x * x;
        int d2 = y * y;
        int dis = r2 + r1;
     
        d2 += d1;
        dis = dis * dis;

        if (dis >= d2)
        {
           
            a2.push_back(d2); 
            an2++;
        }
    }
    sort(a1.begin(), a1.end());
    sort(a2.begin(), a2.end());
    if (m > 0 && a1.size() > 0 && a2.size() > 0)
    {
        an1 = 0, an2 = 0;
        if (a1[0] < a2[0])
        {
            an1 = lower_bound(a1.begin(), a1.end(), a2[0]) - a1.begin();
        }
        else
        {
            an2 = lower_bound(a2.begin(), a2.end(), a1[0]) - a2.begin();
        }
    }
    cout << an1 << " " << an2 << endl;
}

int main()
{
    int t;
    cin >> t;

    int i = 1;
    while (i <= t)
    {
        cout << "Case #" << i << ": ";
        solution();
        i++;
    }
    return 0;
}