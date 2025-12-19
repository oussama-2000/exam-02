#include <unistd.h>

void print_bits(unsigned char octet)
{
    int i = 8;
    while(i > 0)
    {
        int bit = (octet >> (i - 1)) & 1;
        int n = bit +'0';
        write(1,&n,1);
        i --;
    }
}
