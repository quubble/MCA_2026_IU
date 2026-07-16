#include <stdio.h>

int main() {
	float A,B;
	printf("Enter marks in A and B: ");
	scanf("%f%f",&A,&B);
	
	if(A>=55 && B>=45) 
	printf("Pass\n");
	
	else if(A>=45 && A<55 && B>=55) 
	printf("Pass\n");
	
	else if(A>=65 && B<45) 
	printf("Reappear in B\n");
	
	else 
	printf("Fail\n");
	
	return 0;
}
