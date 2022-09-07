char    *ft_strstr(char *str, char *to_find)
{
    int i;
    int j;

    i = 0;
    if (!(to_find[i]))
        return (str);

    while (str[i])
    {
        j = 0;
        while ((str[i+j]) && (str[i+j] == to_find[j]))
            j++;
        if(to_find[j] == '\0')
            return (str + i);
       i++;
    }
    return (0);
}
