#include <iostream>
using namespace std;

int main() {
    long a, i, num, digit, rev = 0, count=0,t=0;
    if(a<1 || a>1000)
    {
        return 0;
    }
 
    for(i = 1; i <= a; ++i) {
        if(t>100)
        {
            return 0;
        }
        if(a % i == 0)
        {
            do
            {
                num=i;
                digit = i % 10;
                rev = (rev * 10) + digit;
                i = i / 10;
            } while (i != 0);

            if (num == rev)
                count++;
            t++;
        }
    }

}