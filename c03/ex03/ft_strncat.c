char    *ft_strncat(char *dest, char *src, unsigned int nb)
{
    int i;
    int n;

    i = 0;
    n = 0;
    while (dest[i] != '\0')
        i++;

    while (src[n] != '\0' && nb > n)
    {
        dest[i] = src[n];
        n++;
        i++;
    }
    dest[i] = '\0';
    return(dest);
}

#include <stdio.h>

int main()
{
    char src[] = "merhaba";
    char dest[50] = "yusuf";
    printf("%s", ft_strncat(dest,src,3));
}
