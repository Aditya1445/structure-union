#include <stdio.h>
struct employee
{
    int e_no;
    char ename[20];
    int salary;
};
int main()
{
    int i, high, n;
    struct employee emp[10];
    printf("employee name to be accepted : \n");
    printf("enter the limit :");
    scanf("%d", &n);
    printf("---------\n");
    printf("enter the details for %d employees :", n);
    printf("\n-----------\n");
    for (i = 0; i < n; i++)
        
    {
        printf("employee number :");
        scanf("%d", &emp[i].e_no);
        printf("name    :");
        scanf("%s", emp[i].ename);
        printf("salary   :");
        scanf("%d", &emp[i].salary);
    }
    high = emp[0].salary;
    for (i = 0; i < n; i++)
    {
        if (emp[i].salary > high)
        {
            high = emp[i].salary;
        }
    }
    printf("highest salary of employee details :");
    printf("\n----------------\n");
    printf("EMPNO   NAME   SALARY\n");
    for (i = 0; i < n; i++)
    {
        if (emp[i].salary == high)
        {
            printf("\n %d\t%s\t%d", emp[i].e_no, emp[i].ename, emp[i].salary);
        }
    }
    return 0;
}