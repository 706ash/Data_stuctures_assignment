#include <iostream>
using namespace std;

template <class t>
void multiply(t mat1[][2],t mat2[][3],t r1,t c2,t c1)
{
    t result[10][10];
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            result[i][j]=0;
            for (int k = 0; k < c1; k++)
            {
                result[i][j]+=mat1[i][k]*mat2[k][j];                
            }
            cout<<result[i][j]<<"\t";
        }
        cout<<endl;
        
    }
    
}
int main()
{
    int r1=3,c1=2,r2=2,c2=3;
    int mat1[3][2]={{1,2},{4,6},{7,8}};
    int mat2[2][3]={{2,4,5},{7,4,9}};
    if(r1!=c2 || c1!=r2)
        cout<<"\nmatrices  cannot be multiplies";
    else
    {
        multiply(mat1,mat2,r1,r1,c1);
    }
    cout<<"\n\n";
    float fr1=3,fc1=2,fr2=2,fc2=3;
    float fmat1[3][2]={{1.0,2.3},{4.3,6.3},{7.5,8.8}};
    float fmat2[2][3]={{2.0,4.7,5.5},{7.3,4.6,9.6}};
    if(fr1!=fc2 || fc1!=fr2)
        cout<<"\nmatrices  cannot be multiplies";
    else
    {
        multiply(fmat1,fmat2,fr1,fr1,fc1);
    }
    return 0;
}