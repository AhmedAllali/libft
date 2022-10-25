// char* 
// i++ l l adresse ds une fonction
// printf apres appel de fonmction c,est la derniere valeur de tableau
#include<stdio.h>
#include<stdlib.h>

void ft_chiliiiba(char **s,char c )
{
    int i=0;
    // char *tmp;
    // tmp = *s;
    while (**s)
    {
        if (**s==c)
            break ;
        *s += 1;
    }
}

int main(void)
{
    char* str;
    // char *tmp;
    str = (char *)malloc (sizeof (char)*5+1);
    str="lalal";
    char c='a';
    ft_chiliiiba(&str, c);
    printf("%s ",str);

    // alloca 30;
    // incremenrter size
    // print
}