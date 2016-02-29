/*
** condition.c for condition in /home/costa_b/rendu/prog_elem/allum1
** 
** Made by Kevin Costa
** Login   <costa_b@epitech.net>
** 
** Started on  Tue Feb 11 15:08:16 2014 Kevin Costa
** Last update Wed Feb 12 13:09:04 2014 Kevin Costa
*/

#include	<stdlib.h>
#include	"my.h"

int		condition_p2(t_allum *allum, t_game *game)
{
  int		all;
  int		count;

  count = game->count;
  all = allum->l1 + allum->l2 + allum->l3 + allum->l4;
  if (all == 1)
    {
      free(allum);
      free(game);
      my_printf2("\033[33m\nPlayer", count, "win\n\033[0m");
    }
  else if (all < 1)
    {
      if (game->count == 1)
	my_putstr("\033[33m\nPlayer 2 win\n\033[0m");
      else
	my_putstr("\033[33m\nPlayer 1 win\n\033[0m");
      free(allum);
      free(game);
      exit (1);
    }
  return (0);
}

int		condition_cpu1(t_allum *allum, t_game *game)
{
  int		all;

  all = allum->l1 + allum->l2 + allum->l3 + allum->l4;
  if (all == 1)
    {
      free(allum);
      free(game);
      my_printf3("\033[33m\nPlayer 1 win\n\033[0m");
    }
  else if (all < 1)
    {
      if (game->count + 1 != 2)
	my_putstr("\033[33mPlayer 1 win\n\033[0m");
      else
	my_putstr("\033[33mCPU win, you are so weak\n\033[0m");
      free(allum);
      free(game);
      exit(1);
    }
  return (0);
}

int		condition_cpu2(t_allum *allum, t_game *game)
{
  int		all;

  all = allum->l1 + allum->l2 + allum->l3 + allum->l4;
  if (all == 1)
    {
      free(allum);
      free(game);
      my_printf3("\033[33mCPU win, you are so weak\n\033[0m");
    }
  else if (all < 1)
    {
      if (game->count + 1 != 1)
	my_putstr("\033[33mCPU win, you are so weak\n\033[0m");
      else
	my_putstr("\033[33mPlayer 1 win\n\033[0m");
      free(allum);
      free(game);
      exit (1);
    }
  return (0);
}
