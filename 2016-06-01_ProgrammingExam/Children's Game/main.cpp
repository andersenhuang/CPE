#include <iostream>
#include <string.h>
using namespace std;

int get_len(string a)
{
    int i = 0;

    while(a[i]!= '\0')
    {
        i++;
    }

    return i;
}

int get_small(string a, string b )
{
    int len = 0;
    len = (get_len(a)>get_len(b)?get_len(b):get_len(a));

    for(int i = 0; i<len;i++)
    {
        if((int)a[i] > (int)b[i])
        {
            return 0;
        }
        else if((int)a[i] < (int)b[i])
        {
            return 1;
        }
    }
    return  get_len(a)>get_len(b) ? 1 : 0 ;
}

int get_largest(string a[], int num)
{


    for(int i=0; i<num-1 ; i++ )
    {
        for(int j=i+1; j<num ; j++ )
        {
            if(get_small(a[i],a[j]) != 0)
            {
                string t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }

    string output= "";
    for(int i=0; i<num ; i++ )
    {
        output = output + a[i];
    }
    cout<<output<<endl;

    return 0;
}



int main(void)
{
    int num;

    while(cin>>num)
    {
        if(num == 0)
            break;

        string a[num];
        for(int i=0 ; i<num ; i++)
        {
            cin >> a[i];
        }
        get_largest(a, num);
    }
    return 0;
}
