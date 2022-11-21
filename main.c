#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int	ft_strlen(char *str)
{
	int	i;
	
	i = 0;
	while (str[i])
		i++;
	return (i);
}


/* run this program using the console pauser or add your own getch, system("pause") or input loop */


//Big Brother is Watching You!


char*	main(int argc, char *argv)
{
	char str[] = "Baran";
	printf("Please type your name: ");
	scanf("%s", &str);
	printf("\n %s",str);
	
	int	len = ft_strlen(str);
	printf("\n");
	
	int trackUser = len;
	do
	{
		if(len > rand())
		printf("Your string is %s so your length is %d is greater than %d",str, len, rand());
	else
		printf("Your string is %s so your length is %d is less or equal than %d",str,len,rand());
		
		printf("Next String please: ");
		scanf("%s", &str);
		printf("\n");
		len = ft_strlen(str);
		trackUser--;
		if (!trackUser)
			break;
		
	}while(str);
	
	return 'B';
	
}
