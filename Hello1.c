#-- Hello1.c --#


#include <stdio.h> 

void main(void)
{
    putchar('A');//���� : A 
    putchar(65);//���� : A 
    putchar(0101);//8���� : K 
    putchar(0x41);//16���� : K 
    putchar(0x42);//16���� : L M
    putchar(0x42);//16���� : L M1
    putchar('\n');//���ٳ��� 
    
    printf("%c %d %o %x \n"
        , 'A'    //���� : %c 
        , 'A'    //10���� : %d 
        , 'A'    //8���� : %o 
        , 'A'    //16���� : %x 
    );
}
