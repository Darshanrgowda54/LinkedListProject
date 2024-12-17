#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct user{
    char userID[20];
    char name[50];
    struct user *next;
}user;


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
    scanf(" %[^\n]", newuser->userID);
    printf("Enter Name: ");
    scanf(" %[^\n]", newuser->name);

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
        printf("..Account Details...\n");
        printf("Account ID : %s\n", temp->userID);
        printf("Name : %s\n", temp->name);

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
    scanf(" %[^\n]", newuser->userID);
    printf("Enter Name: ");
    scanf(" %[^\n]", newuser->name);

    newuser->next = head;
    head = newuser;

    count++;
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
    scanf(" %[^\n]", newuser->userID);
    printf("Enter Name: ");
    scanf(" %[^\n]", newuser->name);

    newuser->next = NULL;
    temp = head;

    while(temp->next !=NULL)
    {
        temp = temp->next;
    }
    temp->next = newuser;
    count++;
}


void insertAtSpecificPosition()
{
    int pos,i =1;
    printf("Enter position to insert\n");
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
        scanf(" %[^\n]", newuser->userID);
        printf("Enter Name: ");
        scanf(" %[^\n]", newuser->name);

        newuser->next = temp->next;
        temp->next = newuser;
    }

    count++;
}


int main()
{
    int choice = 1;

    while (choice)
    {
        printf("1.Creat Account\n");
        printf("2.Display Acocunt\n");
        printf("3.Insert At Beginning\n");
        printf("4.Insert At End\n");
        printf("5.Insert At Specific Position\n");
        printf("6.Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);

        switch (choice)
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
}
