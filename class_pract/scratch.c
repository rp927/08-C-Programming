#include<stdio.h>

int swapparu(char *string,const char swap_this,const char with_this);

int main(void)
{
    char a = 'a';
    char b = 'b';
    char pointers[12];

    printf("Enter a string of which will swap 'a' with 'b' :");
    fscanf(stdin,"%s",pointers);
    printf("You entered %s\n",pointers);

    swapparu(pointers,a,b);
    printf("Your new string is %s\n",pointers);

    return 0;
}

int swapparu(char *string,const char swap_this,const char with_this)
{
    for (; *string; string++)
    {
        if (*string == swap_this)
        {
            printf("Swapping!\n");
            *string = with_this;
        }
        
    }
}