// Online C compiler to run C program onl

/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
//define
union student{
   int rollno;
   char divi;
   float marks;
};


int main()
{
    //initialisation 
    union student s1 ={01, 'E', 88};
    union student s2 ={05, 'P', 45};
    
    union student *p=&s1;
    
    printf("union values of s1 are: \n%d %c %.2f\n", p->rollno, p->divi, p->marks);
    
    printf("union values  of s2 are: \n%d %c %.2f\n",s2.rollno, s2.divi, s2.marks);
    
    

    return 0;
}
