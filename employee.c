#include <stdio.h>
struct employee
{
    int e_id;
    float e_salary;
    char e_name[50];

};

int main()
{
    struct employee e1;
    printf("enter the e_name");
    scanf("%s",e1.e_name);
    printf("enter the e_id");
    scanf("%d",&e1.e_id);
    printf("enter the e_salary");
    scanf("%f",&e1.e_salary);

    printf("the name of the employee is :%s\n",e1.e_name);
    printf("the e_salary is:%.2f\n",e1.e_salary);
    printf("the e_id is:%d\n",e1.e_id);
     return 0;
}