/*
** show_allum.c for show_allum in /home/costa_b/rendu/prog_elem/allum1
** 
** Made by Kevin Costa
** Login   <costa_b@epitech.net>
** 
** Started on  Thu Feb  6 17:23:28 2014 Kevin Costa
** Last update Thu Feb 13 16:37:40 2014 Kevin Costa
*/

#include	<stdlib.h>
#include	"my.h"

void		show_allum(t_allum *allum, t_game *game)
{
  if (game->player == 2)
    condition_p2(allum, game);
  if (game->player == 1)
    {
      if (game->count == 1)
	condition_cpu1(allum, game);
      if (game->count == 2)
	condition_cpu2(allum, game);
    }
  show(allum, game);
}

void		show_line1(t_allum *allum, t_game *game)
{
  int		a;

  a = 1;
  my_putstr("line1: \033[31m");
  my_put_nbr(allum->l1);
  my_putstr("    \033[00m");
  while (--a != -1)
    {
      if (a < allum->l1 && game->match == 1)
        my_putchar('|');
      else if (a < allum->l1 && game->match == 2)
        my_putchar('$');
      else if (a < allum->l1 && game->match == 3)
        my_putchar('!');
      else
        my_putstr("\033[35m*\033[0m");
    }
  my_putstr("\n");
}

void		show_line2(t_allum *allum, t_game *game)
{
  int		a;

  a = 3;
  if (allum->l2 < 0)
    allum->l2 = 0;
  my_putstr("line2: \033[31m");
  my_put_nbr(allum->l2);
  my_putstr("   \033[00m");
  while (--a != -1)
    {
      if (a < allum->l2 && game->match == 1)
        my_putchar('|');
      else if (a < allum->l2 && game->match == 2)
        my_putchar('$');
      else if (a < allum->l2 && game->match == 3)
        my_putchar('!');
      else
        my_putstr("\033[35m*\033[0m");
    }
  my_putstr("\n");
}

void		show_line3(t_allum *allum, t_game *game)
{
  int		a;

  a = 5;
  if (allum->l3 < 0)
    allum->l3 = 0;
  my_putstr("line3: \033[31m");
  my_put_nbr(allum->l3);
  my_putstr("  \033[00m");
  while (--a != -1)
    {
      if (a < allum->l3 && game->match == 1)
        my_putchar('|');
      else if (a < allum->l3 && game->match == 2)
        my_putchar('$');
      else if (a < allum->l3 && game->match == 3)
        my_putchar('!');
      else
        my_putstr("\033[35m*\033[0m");
    }
  my_putstr("\n");
}

void		show_line4(t_allum *allum, t_game *game)
{
  int		a;

  a = 7;
  if (allum->l4 < 0)
    allum->l4 = 0;
  my_putstr("line4: \033[31m");
  my_put_nbr(allum->l4);
  my_putstr(" \033[00m");
  while (--a != -1)
    {
      if (a < allum->l4 && game->match == 1)
        my_putchar('|');
      else if (a < allum->l4 && game->match == 2)
        my_putchar('$');
      else if (a < allum->l4 && game->match == 3)
        my_putchar('!');
      else
        my_putstr("\033[35m*\033[0m");
    }
  my_putstr("\n");
}
