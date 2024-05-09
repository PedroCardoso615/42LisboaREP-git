#include <stdio.h>
#include <string.h>

//typedef = reserved keyword that gives an existing datatype a "nickname."

typedef struct 
{
    char name[25];
    char password[12];
    int id;
} User;

int main()
{
    User user1 = {"Pedro", "Rugby2012", 12345};
    User user2 = {"Joao","Futebol14", 678910};

        printf("Username: %s\n", user1.name);
        printf("Password: %s\n", user1.password);
        printf("ID: %d\n", user1.id);
        printf("\n");
        printf("Username: %s\n", user2.name);
        printf("Password: %s\n", user2.password);
        printf("ID: %d\n", user2.id);



    return 0;
}
