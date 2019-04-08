#include <iostream>
using namespace std;
int main()
{
    int d=0;
    int s1=0;
    int s2=0;
    int n;
    cin>>n;
    int m[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
        cin>>m[i][j];

        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
            s1=s1+m[i][j];
        }
    }
    int i = 0; int j=n-1;
    for(int k=0;k<n;k++){
             s2 +=m[i][j];
             cout<<s2<<endl;
             i++; j--;
    }

    if(s1>s2)
    d=s1-s2;
    if(s1<s2)
    d=s2-s1;
    cout<<d<<endl;
    cout<<s1<<" "<<s2;

}
/*
3
11 2 4
4 5 6
10 8 -12
*/
