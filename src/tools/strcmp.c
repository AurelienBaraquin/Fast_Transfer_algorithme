/*
** EPITECH PROJECT, 2023
** 42sh
** File description:
** strcmp
*/

#include "parsing.h"
#include "tools.h"

int my_strncmp(char *str1, char *str2, int n)
{
    if (my_strlen(str1) < n || my_strlen(str2) < n)
        return 1;
    for (int i = 0; i < n && str1[i] != '\0' && str2[i] != '\0'; i++) {
        if (str1[i] != str2[i])
            return 1;
    }
    return 0;
}

int my_strcmp(char *str1, char *str2)
{
    int i = 0;
    if (my_strlen(str1) != my_strlen(str2))
        return 1;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i])
            return 1;
        i++;
    }
    return 0;
}

void *my_memset(void *s, int c, size_t n)
{
    unsigned char *p = s;
    while (n--) *p++ = (unsigned char)c;
    return s;
}

char *my_strcat(char *dest, const char *src)
{
    int dest_len = my_strlen(dest);
    int i;
    for (i = 0; src[i] != '\0'; i++) {
        dest[dest_len + i] = src[i];
    }

    dest[dest_len + i] = '\0';
    return dest;
}
