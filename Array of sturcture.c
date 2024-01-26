#include <stdio.h>

struct Person
{
    char name[20];
    int age;
    float salary;
};

int main()
{
    struct Person person[4];
    int i;

    for (i = 0; i < 4; i++)
    {
        printf("Enter information for person %d\n", i + 1);


        printf("Enter Name: ");
        fflush(stdin);
        gets(person[i].name );


        printf("Enter Age: ");
        scanf("%d", &person[i].age);

        printf("Enter salary: ");
        scanf("%f", &person[i].salary);

        printf("\n");


    }



     for (i = 0; i < 4; i++)
    {
        printf("Information for person %d\n", i + 1);


        printf("Name: %s\n",person[i].name);
        printf("Age: %d\n",person[i].age);
        printf("salary: %f\n",person[i].salary);
        printf("\n\n");


    }


    return 0;
}
