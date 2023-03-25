#include<stdio.h>
#include<stdio.h>
int main() 
{
    char a[20],b[20];
    printf("Enter Your \n first Name : ");
    scanf("%s", &a);
    printf("\nlast Name : ");
    scanf("%s",&b);
    strcat(a , b);
    printf("\n Your Full name is ->%s", a);
    
    
}
