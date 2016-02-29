/*
** my_printf1.c for my_printf1.c in /home/costa_b/rendu/MUL_2013_wolf3d
** 
** Made by Kevin Costa
** Login   <costa_b@epitech.net>
** 
** Started on  Mon Feb  3 09:40:42 2014 Kevin Costa
** Last update Thu Feb 13 11:24:00 2014 Kevin Costa
*/

#include	<stdlib.h>
#include	"my.h"

int		my_printf1(char *str, int nb, char *str2)
{
  my_putstr2(str, " ");
  my_put_nbr(nb);
  my_putstr2("", str2);
  return (0);
}

int		my_printf2(char *str, int nb, char *str2)
{
  my_putstr2(str, " ");
  my_put_nbr(nb);
  my_putstr2(" ", str2);
  exit(1);
}

int             my_printf3(char *str)
{
  my_putstr("\033[31m");
  my_putstr(str);
  my_putstr("\033[00m");
  exit(1);
}

int		my_printf4(char *str)
{
  my_putstr("                ");
  my_putstr(str);
  my_putstr("\n");
  return (0);
}

int             my_printf5(char *str)
{
  my_putstr("                       ");
  my_putstr(str);
  my_putchar('\n');
  return (0);
}
