#include <iostream>
#include<vector>
using namespace std;
template <class t>
class genericvector
{
    vector<t> v1;
    public:
    //create a vector and enter ts elemenst
    template <class v>
    void createvec(vector<v> v1)
    {
        this->v1=v1;
    }
    //sum and average of elemenst
    void print()
    {
        t sum=0,average;
        for (int i = 0; i < v1.size(); i++)
            sum+=v1[i];
        cout<<"\nsum= "<<sum;
        cout<<"\naverage="<<sum/v1.size()<<endl;                
    }
    //display the reverse o vector
    void reverse()
    {
        for (int i = v1.size()-1; i>=0; i--)
            cout<<v1[i]<<"\t";        
    }
};
int main()
{
    vector<int> v1={1,2,3,4,5};
    genericvector<int> obj;
    obj.createvec(v1);
    obj.print();
    obj.reverse();
    return 0;
}