#include<bits/stdc++.h>
using namespace std;
int main()
{
int sparseMatrix[4][4]={{0,0,1,0},
                  {0,3,5,6},
                  {7,0,0,0},
                  {3,5,0,0}};

    int m=4,n=4;
    int i,j;
    vector<vector<int>>v(3);
    for(i=0;i<m;i++)
    {

        for(j=0;j<n;j++)
        {
            if(sparseMatrix[i][j]!=0)
               {
                 v[0].push_back(i);
                 v[1].push_back(j);
                  v[2] .push_back(sparseMatrix[i][j]);
               }
        }
    }
       for (int i=0; i<3; i++)
    {
        for (int j=0; j<v[i].size(); j++)
            cout<<v[i][j]<<" ";

        cout<<endl;
    }
    return 0;
}
