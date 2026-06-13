#include <iostream>
using namespace std;

void get_num(int& n)
{
    cout << "Enter n : ";
    cin >> n;

}


int main()
{
    int n ;
    get_num(n);

    for(int i = 1; i <= n; i++)
    {
        // spaces
        for(int j = 1; j <= n - i; j++)
        {
            std::cout << " ";
        }

        // stars
        for(int j = 1; j <= 2*i - 1; j++)
        {
            std::cout << "*";
        }

        std::cout << "\n";
    }
}