#include <stdio.h>
struct worker
{
    char name[25];
    int wage;
    int wdays;
};
int main()
{
    struct worker a, b;
    printf("enter the details of first worker \n");
    printf("-------\n");
    printf("enter worker name : \n");
    scanf("%s", a.name);
    printf("enter wage :\n");
    scanf("%d", &a.wage);
    printf("enter wdays :\n");
    scanf("%d", &a.wdays);
    printf("-----------\n");
    printf("enter the details of second worker \n");
    printf("---------\n");
    printf("enter worker name :\n");
    scanf("%s", b.name);
    printf("enter wage :\n");
    scanf("%d", &b.wage);
    printf("enter wdays :\n");
    scanf("%d", &b.wdays);
    printf("-------\n");
    int p1 = a.wage * a.wdays;
    printf("Name of the first worker : %s\n payment of first worker : %d\n", a.name, p1);
    printf("------\n");
    int p2 = b.wage * b.wdays;
    printf("Name of the second worker : %s\n payment of second worker : %d\n", b.name, p2);
    return 0;
}
