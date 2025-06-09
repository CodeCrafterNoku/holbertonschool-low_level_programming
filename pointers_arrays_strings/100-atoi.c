	#include    "main.h"
	#include    <limits.h>

	/**
	*    _atoi    -    Converts    a    string    to    an    integer.
	*    @s:    The    string    to    convert.
	*
	*    Return:    The    integer    converted    from    the    string.
	*/
	int    _atoi(char    *s)
	{
	int    i    =    0,    sign    =    1;
	unsigned    int    result    =    0;
	int    found_digit    =    0;

	/*    Process    signs    and    skip    non-digit    characters    */
	while    (s[i]    &&&&
    &&
        (s[i]    <    '0'    ||    s[i]    >    '9'))
	{
	if    (s[i]    ==    '-')
	sign    =    -sign;
	else    if    (s[i]    ==    '+')
	{
	/*    do    nothing    */
	}
	i++;
	}

	/*    Process    digits    */
	while    (s[i]    >=    '0'    &&&&
    &&
        s[i]    <=    '9')
	{
	found_digit    =    1;

	if    (result    >    INT_MAX    /    10    ||
	(result    ==    INT_MAX    /    10    &&&&
    &&
        (s[i]    -    '0')    >    INT_MAX    %    10))
	{
	return ( (sign    ==    1    ?    INT_MAX    :    INT_MIN));
	}

	result    =    result    *    10    +    (s[i]    -    '0');
	i++;
	}

	if    (!found_digit)
	return ( (0));

	if    (sign    ==    -1)
	return ( -(int)result);
	return ( (int)result);
	}
