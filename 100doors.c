#include <stdio.h>

#define STUDENTS 100

int main()
{
    //Taking 0-> Closed && 1-> Open
    int doors[101] = {0}; //Initially all doors closed

    for (int student = 1; student <= STUDENTS; student++)
    {
        for (int door = student; door <= STUDENTS; door += student)
        {
            doors[door] = !doors[door];
        }
    }

    //Printing out Open Doors
    int od = 0;
    for (int door = 1; door <= STUDENTS; door++)
    {
        if (doors[door] == 1)
        {
            printf("\nDoor: %d", door);
            od++;
        }
    }
    printf("\nNumber of Open Doors: %d\n", od);

    return 0;
}