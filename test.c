#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// test
int main(void)
{
    FILE *login = fopen("login.csv", "a");
    char *user = malloc(20);
    char *paswd = malloc(20);
    printf("Username: ");
    scanf("%s",user);
    printf("Password: ");
    scanf("%s", paswd);
    fprintf(login,"%s, %s\n",user, paswd);
}