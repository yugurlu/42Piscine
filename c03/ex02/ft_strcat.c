char   *ft_strcat(char *dest, char *src)
{
    int i;
    int n;

    i = 0;
    n = 0;
    while (dest[i] != '\0')
        i++;

    while (src[n] != '\0')
    {
        dest[i] = src[n];
        n++;
        i++;
    }
    dest[i] = '\0';
    return(dest);
}
