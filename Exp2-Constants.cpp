#include<stdio.h>
#include<ctype.h>

int main()
{
	
	char str[20];
	int i = 0;
	
	printf("Enter input string : ");
	scanf("%s",str);
	
	int state = ( isdigit(str[i]))? 1: 5;
	
	while ((str[i] != '\0') && (state != 5)){
		
		switch(state){
			
			case 1:
				state = (isdigit(str[i]))? 2: 5;
				break;
			case 2:
				state = (isdigit(str[i]))? 2: (str[i] == '.')? 3: 5;
				break;
			case 3:
				state = (isdigit(str[i]))? 4: 5;
				break;
			case 4:
				state = (isdigit(str[i]))? 4: 5;
				break;       
}
i++;
}

if (state == 5)
	printf("Not a constant");
else if (state == 2)
	printf("It is an Integer");
else if (state == 3)
	printf("It is not accepted");
else if (state == 4)
	printf("It is a real number");
return 0;
}