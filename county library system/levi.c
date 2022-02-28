#include <stdio.h>
#include <stdlib.h>
void menu
int action;
    printf("Select an action:\n");
    printf("1. Add new patron\n");
    printf("2. View patron\n");
    printf("3. View books\n");
    printf("4. Add New Book\n");
    printf("5. Your Action\n");
    scanf("%d" &action:");
    if(action, <1 || action >4) {
        printf("invalid action. Try again\n")
    }
    return action;
}

void execute action(int action) {
    switch(action){
    case 1:
        printf("adding a new patron\n");
        break;
    case 2:
        printf("Here is a list of patrons:\n");
        break;
    case 3:
        printf("Here is a list of all books");
        break;
    case 4:
        printf("Adding a new book\n");
        break;
    default :
        printf("Invalid action\n");
    }


    int main()
    {
        printf("COUNTY LIBRARY SYSTEM!\n");
        printf("Welcome Mr. Titus!\n")
        execute action(menu());
        return 0;
    }
