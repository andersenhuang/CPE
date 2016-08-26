#include <iostream>
#include <vector>
#include <string>
using namespace std;


int main()
{

    int m, n, t, i;
    while(cin >> m >> n >> t)
    {
        if(m<n)
        {
            int t;
            t = m;
            m = n;
            n = t;
        }

        int num = t/n;
        for(i = num ; i>0 ; i-- )
        {
            if( (t - i*n) % m == 0)
                break;
        }

        if( (t - i*n) % m != 0)
        {
            cout << (t-t%n)/n << " " << t%n <<  endl;
        }
        else
        {
            cout << i + (t- i*n)/m << endl;
        }
    }
    return 0;
}
