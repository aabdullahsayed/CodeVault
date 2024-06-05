//codeforces.com/problemset/problem/282/A
#include<iostream>
using namespace std;
int main()
{
    string s ;
    int n , x = 0 ;
    cin>>n;
    while (n--)
    {
        cin>>s;
        if(s[1]== '+')
        {
            x++;
        }
        else x-- ;

    }
    cout<<x;
    return 0 ;
}
