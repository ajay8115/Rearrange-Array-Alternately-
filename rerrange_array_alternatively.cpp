// CODE BY :- AJAY PAL IIT (BHU) VARANASI
#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define kk '\n'
using namespace std;

void rearrange(long long *a, int n)
{
    sort(a, a + n);

    vector<int> v;

    int i = 0, j = n - 1;
    vector<int> v;
    int k = 1;
    while (k != n)
    {
        if (k % 2 != 0)
        {
            v.push_back(a[j]);
            j--;
            k++;
        }
        else
        {
            v.push_back(a[i]);
            i++;
            k++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        a[i] = v[i];
    }
}