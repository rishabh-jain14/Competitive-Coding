#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int i, num, mode, temp;
    long sum = 0;
    double mean, median;
    vector<int> v;
    cin>>num;
    for(i = 0; i<num; i++)
    {
        cin>>temp;
        sum += temp;
        v.push_back(temp);
    }
    mean = double(sum/double(num));
    sort(v.begin(), v.end());
    if (num%2 != 0)
    {
        median = double(v[num/2]);
    }
    else
    {
        median = (v[int(num/2) - 1] + v[int(num/2)])/2.0;
    }

    i = 0;
    int m = 0, c = 0, nc = 0;
    while(i<num)
    {
        c = 0;
        nc = v[i];
        c++;
        i++;
        while(nc == v[i])
        {
            c++;
            i++;
        }

        if(m < c)
        {
            m = c;
            mode = nc;
        }
    }

    cout<<mean<<'\n'<<median<<'\n'<<mode;
    return 0;

}
