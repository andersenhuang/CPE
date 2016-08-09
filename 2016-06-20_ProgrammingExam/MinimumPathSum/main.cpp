#include <iostream>
#include <vector>

using namespace std;
int min_path ;
int row, col;
vector< vector<int> > v ;

void Move(int path, int r, int c)
{

    path = path + v[r][c];
    if(min_path<path)
    {
        return ;
    }
    else if(r==row-1 && c ==col-1)
    {
        if(min_path>path)
            min_path = path;
    }else
    {
        if(r!=row-1)
        {
            Move(path, r+1, c);
        }
        if(c!=col-1)
        {
            Move(path, r, c+1);
        }
    }





}




int main()
{



    int num;
    while(cin >> num)
    {
        if(num == 0)
            break;

        for(int n=0; n<num ; n++)
        {
            cin >> row >> col;
            min_path = 1000000;
            v.erase(v.begin(),v.end());
            for(int i=0; i<row ;i++)
            {
                vector<int> temp;
                for(int j=0; j<col;j++)
                {
                    int t;
                    cin >> t;
                    temp.push_back(t);

                }
                v.push_back(temp);
            }
            Move(0, 0, 0);
            cout << min_path << endl;
        }










    }



    return 0;
}
