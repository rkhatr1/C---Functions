/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhatri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 20:45:16 by rkhatri           #+#    #+#             */
/*   Updated: 2017/07/09 22:13:13 by rkhatri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		match(char *s1, char *s2)
{
    if (*s1 == '\0' && *s2 == '\0')
        return (1);
    if (*s1 == *s2 && *s1 != '*')
        return (match((s1 + 1), (s2 + 1)));
    if (*s1 == '\0' && *s2 == '*')
        return (match(s1, (s2 + 1)));
    if (*s1 != '\0' && *s2 == '*')
        return (match(s1, (s2 + 1)) || match((s1 + 1), s2));
    return (0);
}

int     main(void)
{
    printf("%d", match("", "*a**"));
    printf("%d", match("qwerqwer", "*a**"));
    printf("%d", match("bbbbbb", "*a**"));
    printf("%d", match("c", "*a**"));
    printf("%d", match("AAAAAAAAAA", "*a**"));
    
    printf("%d", match("main.c", "*.c"));
    printf("%d", match("main.c.c", "*.c"));
    printf("%d", match("main.h", "*.c"));
    printf("%d", match("main.cc", "*.c"));
    printf("%d", match("main.c", "*.*"));
    
    printf("%d", match("test.main.c", "test.*.c"));
    printf("%d", match("test..c", "test.*.c"));
    printf("%d", match("test.main.h", "test.*.c"));
    printf("%d", match("main.c", "test.*.c"));
    printf("%d", match("test.c", "test.*.c"));
    
    printf("%d", match("abcde", "a*c*e"));
    printf("%d", match("abcde", "*b*d*"));
    printf("%d", match("abcde", "a*e*c"));
    printf("%d", match("abcde", "*d*c*"));
    printf("%d", match("abcde", "a*d*d"));
    
    printf("%d", match("*a", "*"));
    printf("%d", match("**", "*"));
    printf("%d", match("*ab", "*b"));
    printf("%d", match("a*a", "a*"));
    printf("%d", match("**a", "*a"));
}
