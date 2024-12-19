#include "search.h"
#include "insertion.h"
#include <stdio.h>
#include <string.h>


void serachByPosition()
{
    int pos=1,i=1;

    printf("Enter the Position:");
    scanf("%d",&pos);

    if(pos > count)
    {
        printf("Invalid position\n");
    }
    else
    {
        temp = head;

        while(i < pos)
        {
            temp = temp->next;
            i++;
        }
        printf("Acoount Details\n");
        printf("User ID: %d\n",temp->userID);
    }
}


void searchByValue()
{
    int Id;

    printf("Enter the UserID:");
    scanf("%d",&Id);

    if(head == NULL)
    {
        printf("Empty List\n");
    }
    else
    {
        temp = head;
        while(temp!=NULL)
        {
            if(temp->userID == Id)
            {
                printf("User ID :%d\n",temp->userID);
            }
            temp = temp->next;
        }
        printf("User ID not found\n");
    }
}



int mainSearch()
{
    int choice = 1,option;

    while(choice)
    {
        printf("1.Search by Position\n");
        printf("2.Search by value\n");
        printf("3.Exit\n");
        printf("Enter your choice:");
        scanf("%d",&option);

        switch (option) {
        case 1:
            serachByPosition();
            break;
        case 2:
            searchByValue();
            break;
        case 3:
            printf("Exit\n");
            return 0;
        default:
            printf("Please enter valid choice.\n");
            break;
        }
    }
    return 0;
}
