#include<iostream>
using namespace std;


/*

 *  *  *  *  * 
 *  *  *  *  * 
 *  *  *  *  * 
 *  *  *  *  * 

*/


int main()
{
    int row,col;
    cout<<"Enter rows\n";
    cin>>row;
    cout<<"Enter columns\n";
    cin>>col;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout<<" * ";
        }
        cout<<"\n";
        
    }
    




    return 0;
}