#include <stdio.h>

struct book{
    char name;
    float price;
    int pages;
};

int main(){
    
//struct book b1,b2,b3;

struct book b1={'C', 5.0, 300};
struct book b2={'J', 10.0, 300};
struct book b3={'P', 25.0, 300};

printf("\n%c %.2f %d", b1.name,b1.price,b1.pages);
printf("\n%c %.2f %d", b2.name,b2.price,b2.pages);
printf("\n%c %.2f %d", b3.name,b3.price,b3.pages);


return 0;

}

