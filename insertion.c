#include "insertion.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


user *head = NULL, *newuser, *temp;
int count = 0;


void createAccount()
{
    newuser=(user*)malloc(sizeof(user));
    if(newuser == NULL)
    {
        printf("Memory allocation failed\n");
        return;
    }

    printf("Enter User ID: ");
    scanf("%d",&newuser->userID);

    newuser->next = NULL;

    if(head == NULL)
    {
        head = newuser;
        temp = newuser;
    }
    else
    {
        temp->next = newuser;
        temp = newuser;
    }

    count++;
    printf("Total accounts: %d\n", count);
}


void displayAccount()
{
    temp = head;

    while(temp != NULL)
    {
        printf("Account Details\n");
        printf("User ID : %d\n",temp->userID);

        temp = temp->next;
    }
}


void insertAtBegining()
{
    newuser = (user*)malloc(sizeof(user));
    if(newuser == NULL)
    {
        printf("Memory allocation failed\n");
        return;
    }

    printf("Enter User ID: ");
    scanf("%d", &newuser->userID);

    newuser->next = head;
    head = newuser;

    count++;
    printf("Total accounts: %d\n", count);
}


void insertAtEnd()
{
    newuser = (user*)malloc(sizeof(user));
    if(newuser == NULL)
    {
        printf("Memory allocation failed\n");
        return;
    }

    printf("Enter User ID: ");
    scanf("%d", &newuser->userID);

    newuser->next = NULL;
    temp = head;

    while(temp->next !=NULL)
    {
        temp = temp->next;
    }
    temp->next = newuser;
    count++;
    printf("Total accounts: %d\n", count);
}


void insertAtSpecificPosition()
{
    int pos=1,i =1;
    printf("Enter position to insert:");
    scanf("%d",&pos);

    if(pos>count)
    {
        printf("Invalid position\n");
    }
    else
    {
        temp = head;
        while(i<pos)
        {
            temp = temp->next;
            i++;
        }
        newuser = (user*)malloc(sizeof(user));
        if(newuser == NULL)
        {
            printf("Memory allocation failed\n");
            return;
        }

        printf("Enter User ID: ");
        scanf("%d", &newuser->userID);

        newuser->next = temp->next;
        temp->next = newuser;
    }

    count++;
    printf("Total accounts: %d\n", count);
}


int mainInsertion()
{
    int choice = 1,option;

    while (choice)
    {
        printf("1.Creat Account\n");
        printf("2.Display Acocunt\n");
        printf("3.Insert At Beginning\n");
        printf("4.Insert At End\n");
        printf("5.Insert At Specific Position\n");
        printf("6.Exit\n");
        printf("Enter your choice:");
        scanf("%d",&option);

        switch (option)
        {
        case 1:
            createAccount();
            break;
        case 2:
            displayAccount();
            break;
        case 3:
            insertAtBegining();
            break;
        case 4:
            insertAtEnd();
            break;
        case 5:
            insertAtSpecificPosition();
            break;
        case 6:
            printf("Exit\n");
            return 0;
        default:
            printf("Please enter valid choice.\n");
            break;
        }
    }
    return 0;
}
