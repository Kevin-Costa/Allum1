/*
** show_boyard.c for show_boyard in /home/costa_b/rendu/prog_elem/Allum1
** 
** Made by Kevin Costa
** Login   <costa_b@epitech.net>
** 
** Started on  Wed Feb 12 14:20:44 2014 Kevin Costa
** Last update Fri Feb 14 19:55:34 2014 Kevin Costa
*/

#include	<stdlib.h>
#include	<unistd.h>
#include	<stdio.h>
#include	<sys/types.h>
#include	<sys/wait.h>
#include	"my.h"

void		show_boyard(t_allum *allum, t_game *game)
{
  system("clear");
  draw_boyard();
  show_42(allum, game);
  if (allum->l42 == 1)
    {
      free(allum);
      free(game);
      my_putstr("\033[33mCPU Win, you are too weak for me\n\033[0m");
      exit(1);
    }
}

void		show_42(t_allum *allum, t_game *game)
{
  int		a;

  a = 21;
  if (allum->l42 < 0)
    allum->l42 = 0;
  my_putstr("Fort-boyard: \033[31m");
  my_put_nbr(allum->l42);
  my_putstr("     \033[00m");
  while (--a != -1)
    {
      if (a < allum->l42 && game->match2 == 1)
	my_putchar('|');
      else if (a < allum->l42 && game->match2 == 2)
        my_putchar('$');
      else if (a < allum->l42 && game->match2 == 3)
        my_putchar('!');
      else
	my_putstr("\033[35m*\033[0m");
    }
  my_putstr("\n\n");
}

int		check_exit(t_game *game)
{
  if (game->buffer == NULL || (game->exit < 0 || game->exit > 1))
    return (my_puterror("1 for exit and 0 for stay!"));
  return (0);
}

int		my_exit(t_game *game, t_allum *allum)
{
  my_putstr("\033[35mDo you really want to leave the game?(1/0)\033[0m\n");
  game->buffer = get_next_line(0);
  game->exit = my_getnbr(game->buffer);
  while (check_exit(game) == -1)
    {
      free(game->buffer);
      my_putstr("\033[35mDo you really want to leave the game?(1/0)\033[0m\n");
      game->buffer = get_next_line(0);
      game->exit = my_getnbr(game->buffer);
    }
  free(game->buffer);
  if (game->exit == 1)
    {
      my_putstr("\033[32mThank you for playing!\033[0m\n");
      free(allum);
      free(game);
      exit(1);
    }
  else if (game->exit == 0)
    return (0);
  return (0);
}
