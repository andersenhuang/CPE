#include <iostream>

using namespace std;


int main()
{



    int num, c1, c2, n1, n2;
    while(cin >> num)
    {
        if(num == 0)
            break;

        cin >> c1 >> n1;
        cin >> c2 >> n2;

        int a, b, a_count = 0, b_count = 0;
        if(c1*n2 > c2*n1)
        {
            a = n2;
            b = n1;
        }
        else if(c1*n2 < c2*n1)
        {
             a = n1;
             b = n2;
        }
        else
        {
            if(n2 > n1)
            {
             a = n1;
             b = n2;
            }
            else
            {
             a = n2;
             b = n1;
            }
        }

        a_count = num / a;
        b_count = (num - a*a_count) / b;
        while(true)
        {
            if(a_count*a + b_count*b == num)
                break;

            a_count = a_count - 1;
            b_count = (num - a*a_count) / b;

            if(a_count == -1)
                break;
        }

        if(a_count == -1)
            cout << "failed" << endl;
        else if(a == n1)
            cout << a_count << " " << b_count << endl;
        else if(a == n2)
            cout << b_count << " " << a_count << endl;


    }



    return 0;
}
