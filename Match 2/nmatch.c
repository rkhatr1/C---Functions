/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nmatch.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhatri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 22:38:35 by rkhatri           #+#    #+#             */
/*   Updated: 2017/07/09 23:01:25 by rkhatri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		nmatch(char *s1, char *s2)
{
    if (*s1 == '\0' && *s2 == '\0')
        return (1);
    if (*s1 == *s2 && *s1 != '*')
        return (nmatch((s1 + 1), (s2 + 1)));
    if (*s1 == '\0' && *s2 == '*')
        return (nmatch(s1, (s2 + 1)));
    if (*s1 != '\0' && *s2 == '*')
        return (nmatch(s1, (s2 + 1)) + nmatch((s1 + 1), s2));
    return (0);
}

int		main(void)
{
    printf("%d", nmatch("", "*a**"));
    printf("%d", nmatch("qwerqwer", "*a**"));
    printf("%d", nmatch("bbbbbb", "*a**"));
    printf("%d", nmatch("c", "*a**"));
    printf("%d", nmatch("AAAAAAAAAA", "*a**"));
    
    printf("%d", nmatch("main.c", "*.c"));
    printf("%d", nmatch("main.c.c", "*.c"));
    printf("%d", nmatch("main.h", "*.c"));
    printf("%d", nmatch("main.cc", "*.c"));
    printf("%d", nmatch("main.c", "*.*"));
    
    printf("%d", nmatch("test.main.c", "test.*.c"));
    printf("%d", nmatch("test..c", "test.*.c"));
    printf("%d", nmatch("test.main.h", "test.*.c"));
    printf("%d", nmatch("main.c", "test.*.c"));
    printf("%d", nmatch("test.c", "test.*.c"));
    
    printf("%d", nmatch("abcde", "a*c*e"));
    printf("%d", nmatch("abcde", "*b*d*"));
    printf("%d", nmatch("abcde", "a*e*c"));
    printf("%d", nmatch("abcde", "*d*c*"));
    printf("%d", nmatch("abcde", "a*d*d"));
    
    printf("%d", nmatch("abcbd", "*b*"));
    printf("%d", nmatch("abc", "a**"));
    printf("%d", nmatch("test.asdf.c.bak", "*.*.*"));
    printf("%d", nmatch("test.bak", "*.*.*"));
    printf("%d", nmatch("", "************************"));
    
    printf("%d", nmatch("*a", "*"));
    printf("%d", nmatch("**", "*"));
    printf("%d", nmatch("*ab", "*b"));
    printf("%d", nmatch("a*a", "a*"));
    printf("%d", nmatch("**a", "*a"));
	return (0);
}
