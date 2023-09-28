#include <stdio.h>

int main(){
        signed char      	chA;
        unsigned char 		chB;

        signed int 		inA;
        unsigned int 		inB;

        signed short int 	inC;
        unsigned short int 	inD;

        signed long int 	inE;
        unsigned long int 	inF;

        signed long long int 	inG;
        unsigned long long int  inH;

        float 			flA;
        double 			dbA;
        long double 		dbB;

        printf("Signed char = %ld\n", sizeof(chA));
        printf("Unsigned char = %ld\n", sizeof(chB));

        printf("Signed int = %ld\n", sizeof(inA));
        printf("Unsigned int = %ld\n", sizeof(inB));

        printf("Signed short int = %ld\n", sizeof(inC));
        printf("Unsigned short int = %ld\n", sizeof(inD));

        printf("Signed long int = %ld\n", sizeof(inE));
        printf("Unsigned long int = %ld\n", sizeof(inF));

        printf("Signed long long int = %ld\n", sizeof(inG));
        printf("Unsigned long long int = %ld\n", sizeof(inH));

        printf("float = %ld\n", sizeof(flA));
        printf("double = %ld\n", sizeof(dbA));
        printf("long double = %ld\n", sizeof(dbB));

        return 0;
}

