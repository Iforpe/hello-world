#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char *str;

	int length;
	while (*src[length])
		length++
	if (!(char *)malloc(sizeof(char) * (length + 1)))
		return (NULL);
	str[length] = '\0';
	while (length-- >= 0)
		str[length] = src[length];
	return (str);
