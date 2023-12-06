#include <stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    char str[20];
    int state, i = 1;

    printf("Enter Input string ");
    scanf("%s",str);

    if (isalpha(str[0]))
        state = 1;
    else
        state = 2;

    while (str[i] != '\0' && state != 2){
        switch (state){
            case 1:
            if (isalpha(str[i]) || isdigit(str[i]))
                state = 1;
            else if (str[i] == '(')
                {state = 3;}
            else if (str[i] == '[')
                {state = 4;}
            else
                {state = 2;}
            break;

            case 3:
            state = ((str[i] == ')') && (str[i+1] == '\0')) ? 5 : 2;
            break;

            case 4:
            if (isdigit(str[i]))
                state = 4;
            else
                state = ( (str[i]== ']')&& (str[i+1] == '\0') )? 6: 2;
            break; 
        }
        i++;
    }

    if (state == 2)
        printf("Not an identifier");
    else if (state == 1)
        printf("Is a variable");
    else if (state == 5)
        printf("Is a function");
    else
        printf("Is an array");
    return 0;
}
