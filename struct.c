#include<stdio.h>

struct Person
{
    int age;
    float salary;
};

int main()
{
    struct Person person1, person2;
    person1.age= 27;
    person1.salary= 12750.50;

    person2.age= 30;
    person2.salary= 22550.50;



    printf("Person1:\n");

    printf("Age= %d\n",person1.age);
    printf("Salary= %f\n\n",person1.salary);

     printf("Person2:\n");

    printf("Age= %d\n",person2.age);
    printf("Salary= %f",person2.salary);



    return 0;

}
