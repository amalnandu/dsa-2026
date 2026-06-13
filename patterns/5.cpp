#include <iostream>
using namespace std;

void get_num(int &n){
    cout<<"Enter n: ";
    cin>>n;
}

int main(){

    int num;
    get_num(num);

    for (int i = 1; i <= num; i++)
    {
        for (int j = 0; j<= num-i; j++)
        {
            cout<<" * ";
        }cout<<"\n";
        
    }
    
    



    return  0;
}
