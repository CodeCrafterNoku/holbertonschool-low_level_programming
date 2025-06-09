#include	"main.h"

/**
*	puts_half	-	Prints	half	of	a	string
*	@str:	The	string	to	print
*	Return:	void
*/
void	puts_half(char	*str)
{
int	length	=	0;
int	start;
int	i;

/*	Calculate	the	length	of	the	string	*/
while	(str[length]	!=	'\0')
{
length++;
}

/*	Determine	the	starting	point	for	printing	*/
if	(length	%	2	==	0)
{
start	=	length	/	2;	/*	Even	length	*/
}
else
{
start	=	(length	+	1)	/	2;	/*	Odd	length	*/
}

/*	Print	the	second	half	of	the	string	*/
for	(i	=	start;	str[i]	!=	'\0';	i++)
{
_putchar(str[i]);
}
_putchar('\n');	/*	New	line	at	the	end	*/
}
