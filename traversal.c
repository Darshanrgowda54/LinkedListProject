#include "insertion.h"
#include <stdio.h>
#include <string.h>


void traversal()
{
    temp = head;

    if(head == NULL)
    {
        printf("Empty List\n");
    }
    else
    {
        while(temp != NULL)
        {
            printf("Acoount Details\n");
            printf("User ID: %d\n",temp->userID);

            temp =temp->next;
        }
        printf("Total accounts: %d\n", count);
    }
}
