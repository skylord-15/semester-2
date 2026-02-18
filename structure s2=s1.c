#include<stdio.h>
struct student
{
    
    char name[50];
    int rollno;
    char gender[10];

};
int main()
{
    
struct student s1={"MOKSHITH",92,"MALE"};
struct student s2;
s2=s1;
printf("NAME IS: %s\n",s2.name);
printf("ROLLNO IS: %d\n",s2.rollno);
printf("GENDER IS: %s\n",s2.gender);
return 0;
}