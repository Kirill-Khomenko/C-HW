#include <iostream>
#include <bitset>
#include <climits>
using namespace std;



int main()
{
    
    int k,i,len_s;

    i = 0;
    len_s = 0;
    printf("Enter k ");
    scanf("%d",&k);

    do
    {
        i += 1;
        len_s += i;
    }while (len_s < k);

    if((i -1) == (len_s - k))
    {
        cout << 1;
    }else{cout << 0;}
}
