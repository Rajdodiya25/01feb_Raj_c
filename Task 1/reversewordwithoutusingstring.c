#include<stdio.h>
#include<stdio.h>
int main()
{
    char name[20];
    printf("Enter your Name : ");
    scanf("%s",&name);
    int length;
    length = strlen(name);
    int i;
    for (i = length; i >=0; i--)
    {
        printf("%c",name[i]);
    }
    int a = 0;
    for(i =length; i; i--)

{
    a++;

}
  printf("\n%d",a);

}
