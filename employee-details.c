#include <stdio.h>
struct employee
{
    int e;
    char name[20];
    char designation[20];
    char dept[20];
    int salary;
};
int main()
{
    struct employee a;
    printf("Enter employee details :\n");
    printf("\n");
    printf("enter employee id :");
    scanf("%d", &a.e);
    printf("enter name : ");
    scanf("%s", a.name);
    printf("enter designation :");
    scanf("%s", a.designation);
    printf("enter department :");
    scanf("%s", a.dept);
    printf("enter salary: ");
    scanf("%d", &a.salary);
    printf("--------------");
    printf("\n employee details :\n");
    printf("employee id %d\n", a.e);
    printf("name :  %s\n", a.name);
    printf("designation :  %s\n", a.designation);
    printf("department  :%s\n", a.dept);
    printf("salary : %d\n", a.salary);
    return 0;
}