/*
** function_2.c for function_2 in /home/costa_b/rendu/CPE_2013_Pushswap
** 
** Made by Kevin Costa
** Login   <costa_b@epitech.net>
** 
** Started on  Mon Dec 23 16:06:42 2013 Kevin Costa
** Last update Fri Feb  7 08:58:01 2014 Kevin Costa
*/

#include	<stdlib.h>
#include	"my.h"

int		my_strlen(char *str)
{
  int		a;

  a = 0;
  while (str[a])
    a++;
  return (a);
}

int		my_putstr2(char *str, char *str2)
{
  while (*str)
    my_putchar(*str++);
  while (*str2)
    my_putchar(*str2++);
  return (0);
}

int		my_puterror(char *str)
{
  my_putstr("\033[31m\n");
  my_putstr2(str, "\n\n\033[00m");
  return (-1);
}
