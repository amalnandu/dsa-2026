#include <iostream>
using namespace std;


/*

 * 
 *  * 
 *  *  * 
 *  *  *  * 
 *  *  *  *  * 
 *  *  *  *  *  * 
 *  *  *  *  *  *  * 

*/
void get_dimensions(int& n)
{
    cout << "Enter n ";
    cin >> n;

}
int main()
{
    int n;
    get_dimensions(n);

    for(int i=0;  i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<" * ";
        }cout<<"\n";
    }


    return 0;
}
