#include <stdlib.h>

int		ft_strlen(char *str)
{
	int length;

	length = 0;
	while(str[length])
	{
		str++;
		length++;
	}
	return(length);
}

char	*ft_strcpy(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (src[i] != '\0')
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	return(dest);
}

char	*ft_strdup(char *str)
{
	char *dup;

	dup = (char *)malloc(sizeof(*dup) * (ft_strlen(str) + 1));
	dup = ft_strcpy(dup, str);
	return (dup);
}