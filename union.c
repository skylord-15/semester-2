#include<stdio.h>
union data 
{
    int i;
    float j;
    char str[20];
};
int main(){
    union data d1;
    d1.i=32;
    printf("i is :%d",d1.i);
    d1.j=13.5;
    printf("j is :%f",d1.j);
    d1.str[0]='h';
    d1.str[1]='a';
    d1.str[2]='i';
    d1.str[3]='\0';
    printf("string is :%s",d1.str);
    return 0;
}
