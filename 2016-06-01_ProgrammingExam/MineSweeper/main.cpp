#include <iostream>
#include <vector>
#include <string>
using namespace std;


int main()
{

    int num;
    while(cin>>num)
    {
        if(num == 0)
            break;
        for(int n=0; n<num;n++)
        {

            int row;
            cin >> row;
            vector<string>  v;
            vector<string>  x;
            for(int i=0; i<row; i++)
            {
                    string temp;
                    cin>>temp;
                    v.push_back(temp);

            }

            for(int i=0; i<row; i++)
            {
                    string temp;
                    cin>>temp;
                    x.push_back(temp);
            }

            int result[10][10];

            for(int i=0; i<row; i++)
            {
                for(int j=0; j<row; j++)
                {
                    result[i][j] = 0;
                }
            }


            for(int i=0; i<row; i++)
            {
                for(int j=0; j<row; j++)
                {
                    if (v[i][j] == '*')
                    {
                        for(int a = -1; a<2 ;a++)
                        {
                            for(int b = -1; b<2 ;b++)
                            {
                                if( (a!=0 || b != 0) && i+a>=0 && j+b>=0 && i+a<row && j+b<row)
                                {
                                    if(v[i+a][j+b]!='*')
                                    {
                                        result[i+a][j+b] = result[i+a][j+b] + 1;
                                    }
                                }

                            }
                        }
                    }
                }
            }

            bool mine_touched = false;

            for(int i=0; i<row; i++)
            {
                for(int j=0; j<row; j++)
                {
                    if (x[i][j] == 'x')
                        if(v[i][j]=='*')
                            mine_touched = true;


                }
            }
            if(mine_touched == true)
            {
                for(int i=0; i<row; i++)
                {
                    for(int j=0; j<row; j++)
                    {
                        cout << v[i][j] ;
                    }
                    cout<<endl;
                }

            }
            else
            {
                for(int i=0; i<row; i++)
                {
                    for(int j=0; j<row; j++)
                    {
                        if (x[i][j] == 'x')
                            cout<<result[i][j];
                        else
                            cout<<".";
                    }
                    cout<<endl;
                }
            }



        }
        break;
    }
    return 0;
}
