int ft_atoi(char *str)
{
    int i;
    int m;
    int s;
    int pn;

    i = 0;
    pn = 1;
    s = 1;
    while (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
           pn *= -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
        i++;
    while (str[i] >= '0' && str[i] <= '9')
    {
        m += (str[i] - '0') *s;
        s *= 10;
        i--;
    }
    return(m * pn);
}

#include <stdio.h>

int main()
{
    char arr[] = "+--+-123asd4";
    printf("%d", ft_atoi(arr));
}
