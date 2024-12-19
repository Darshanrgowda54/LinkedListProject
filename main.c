#include "deletion.h"
#include "insertion.h"
#include "traversal.h"
#include "search.h"
#include <stdio.h>

int main()
{
    int choice =1,option;

    while(choice)
    {
        printf("1.Insertion\n");
        printf("2.Deletion\n");
        printf("3.Traversal\n");
        printf("4.Search\n");
        printf("5.Exit\n");
        printf("Enter the choice:");
        scanf("%d",&option);

        switch(option)
        {
        case 1:
            mainInsertion();
            break;
        case 2:
            mainDeletion();
            break;
        case 3:
            traversal();
            break;
        case 4:
            mainSearch();
            break;
        case 5:
            printf("Exit\n");
            return 0;
        default:
            printf("Invalid Choice\n");
            break;
        }
    }
    return 0;
}
