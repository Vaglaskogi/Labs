#include <stdio.h>
#include <limits.h>

int main(){
        //char
        printf("Signed char MIN = %hhd, signed char MAX = %hhd\n", CHAR_MIN, CHAR_MAX);
        printf("Unsigned char MIN = %hhd, unsigned char MAX = %d\n\n", UCHAR_MAX-UCHAR_MAX, UCHAR_MAX);
        
        //int
        printf("Signed int MIN = %d, signed int MAX = %d\n", INT_MIN, INT_MAX);
        printf("Unsigned int MIN = %d, unsigned int MAX = %u\n\n", UINT_MAX-UINT_MAX, UINT_MAX);

        printf("Signed short MIN = %hd, signed short MAX = %hd\n", SHRT_MIN, SHRT_MAX);
        printf("Unsigned short MIN = %hd, unsigned short MAX = %hu\n\n", USHRT_MAX-USHRT_MAX, USHRT_MAX);

        printf("Signed long MIN = %ld, signed long MAX = %ld\n", LONG_MIN, LONG_MAX);
        printf("Unsigned long MIN = %ld, unsigned long MAX = %lu\n\n", ULONG_MAX-ULONG_MAX, ULONG_MAX);

        printf("Signed long long MIN = %lld, signed long long MAX = %lld\n", LLONG_MIN, LLONG_MAX);
        printf("Unsigned long long MIN = %lld, unsigned long long MAX = %llu\n\n", ULLONG_MAX-ULLONG_MAX, ULLONG_MAX);

        return 0;
}

