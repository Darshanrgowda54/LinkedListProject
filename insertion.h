#ifndef INSERTION_H
#define INSERTION_H

typedef struct user{
    int userID;
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
