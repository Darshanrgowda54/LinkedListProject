#ifndef INSERTION_H
#define INSERTION_H

typedef struct user{
    char userID[20];
    char name[50];
    struct user *next;
}user;


extern user *head, *temp, *newuser;
extern int count;

int mainInsertion();
void createAccount();
void displayAccount();
void insertAtBegining();
void insertAtEnd();
void insertAtSpecificPosition();

#endif
