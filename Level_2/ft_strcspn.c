/*Assignment name	: ft_strcspn
Expected files	: ft_strcspn.c
Allowed functions: None
---------------------------------------------------------------

Reproduce exactly the behavior of the function strcspn
(man strcspn).

The function should be prototyped as follows:

size_t	ft_strcspn(const char *s, const char *reject);*/

#include <stddef.h>
#include <stdio.h>

int is_found(char c,  const char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if(str[i] == c)
            return (1);
        i++;
    }
    return (0);
}

size_t  ft_strcspn(const char *s, const char *reject)
{
    int i;

    i = 0;
    while (s[i])
    {
        if (is_found(s[i], reject) == 0)
            i++;
        else
            return (i);
    }
    return (i);
}

/*int   main()
{
    int result;
    
    result = ft_strcspn("cbdhebeuuf", "feb");
    printf("%d", result);
    return (0);
}*/
