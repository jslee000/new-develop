#-- Hello1.c --#


#include <stdio.h> 

void main(void)
{
    putchar('A');//문자 : A 
    putchar(65);//숫자 : A 
    putchar(0101);//8진수 : K 
    putchar(0x41);//16진수 : K 
    putchar(0x42);//16진수 : L M
    putchar(0x42);//16진수 : L M1
    putchar('\n');//한줄내림 
    
    printf("%c %d %o %x \n"
        , 'A'    //문자 : %c 
        , 'A'    //10진수 : %d 
        , 'A'    //8진수 : %o 
        , 'A'    //16진수 : %x 
    );
}
