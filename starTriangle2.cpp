// Sample Output

// Enter no. of rows : 5
// * * * * * 
// * * * * 
// * * * 
// * * 
// * 

#include <iostream>
using namespace std;
int main()
{
    int row;

    cout<<"Enter no. of rows : ";
    cin>>row;

    for (int i=row;i>=1;i--)
    {
        for (int j=1;j<=i;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}