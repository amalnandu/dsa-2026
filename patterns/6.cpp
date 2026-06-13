#include <iostream>
using namespace std;

/*
Enter n: 6
123456
12345
1234
123
12
1

*/

void get_num(int &n){
    cout<<"Enter n: ";
    cin>>n;
}

int main(){

    int num;
    get_num(num);

    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j<= num-i+1; j++)
        {
            cout<<j;
        }cout<<"\n";
        
    }
    
    



    return  0;
}
