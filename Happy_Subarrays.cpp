#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    int i = 1;
    while (i <= t)
    {
        int N;
        cin >> N;
        int anss = 0;

        vector<int> A(N);
        for(int i=0;i<N;i++)
        {

            cin >> A[i];
        }
        for(int i=1;i<N+1;i++)
        {
            for(int j=0;j<N; j++)
            {
                if (j + i <= N)
                {
                    int counttt = 0;

                    for(int k=j;k< j + i;k++)
                    {
                        
                        counttt += A[k];
                        if (counttt < 0)
                        {
                            counttt = 0;
                            break;
                        }
                    }
                    if (counttt > 0)
                    {
                        anss += counttt;
                    }
                }
            }
        }
         cout << "Case #" << i << ": " << anss << endl;
        i++;
    }
    return 0;
}