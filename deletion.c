#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "insertion.h"


void deleteFromBegining()
{
    if(head == NULL)
    {
        printf("List is Empty\n");
        return;
    }
    else
    {
        temp = head;
        head = head->next;

        count--;
        printf("Total accounts: %d\n", count);
    }
}


void deletionFromEnd()
{
    user *prevuser;
    prevuser = NULL;

    temp = head;

    while(temp->next != NULL)
    {
        prevuser = temp;
        temp = temp->next;
    }
    prevuser->next = NULL;

    count--;
    printf("Total accounts: %d\n", count);
}


void deleteFromSpecificPosition()
{
    user *nextuser;

    int pos=1,i=1;

    temp = head;

    printf("Enter the position\n");
    scanf("%d",&pos);

    while(i<pos-1)
    {
        temp = temp->next;
        i++;
    }
    nextuser = temp->next;
    temp->next = nextuser->next;

    count--;
    printf("Total accounts: %d\n", count);
}



int mainDeletion()
{
    int choice =1,option;

    while(choice)
    {
        printf("1.Delete from Begining\n");
        printf("2.Delete from End\n");
        printf("3.Delete from Specific Position\n");
        printf("4.Exit\n");
        printf("Enter the choice:");
        scanf("%d",&option);

        switch (option)
        {
        case 1:
            deleteFromBegining();
            break;
        case 2:
            deletionFromEnd();
            break;
        case 3:
            deleteFromSpecificPosition();
            break;
        case 4:
            printf("Exit\n");
            return 0;
        default:
            printf("Please enter valid choice.\n");
            break;
        }
    }
    free(temp);
    return 0;
}
