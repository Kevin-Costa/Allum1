/*
** game.c for game in /home/costa_b/rendu/prog_elem/allum1
** 
** Made by Kevin Costa
** Login   <costa_b@epitech.net>
** 
** Started on  Mon Feb 10 17:26:05 2014 Kevin Costa
** Last update Fri Feb 14 20:06:27 2014 Kevin Costa
*/

#include        <stdlib.h>
#include        <unistd.h>
#include        <stdio.h>
#include        <sys/types.h>
#include        <sys/wait.h>
#include	"my.h"

void		option(t_game *game, t_allum *allum)
{
  if (game->player == 69)
    my_exit(game, allum);
  else if (game->player == 1)
    {
      while (42)
	{
	  game = init_cpu(game);
	  player1(game, allum);
	}
    }
  else if (game->player == 42)
    {
      draw_boyard();
      game = init_player42(game, allum);
      if (game->player2 == 1)
	{
	  while (42)
	    player42_cpu(game, allum);
	}
      else if (game->player2 == 2)
	{
	  while (42)
	    player42(game, allum);
	}
    }
}

int		player2(t_game *game, t_allum *allum)
{
  if (game->line == 1)
    allum->l1 = allum->l1 - game->nb;
  else  if (game->line == 2)
    allum->l2 = allum->l2 - game->nb;
  else if (game->line == 3)
    allum->l3 = allum->l3 - game->nb;
  else if (game->line == 4)
    allum->l4 = allum->l4 - game->nb;
  return (0);
}

void		player1(t_game *game, t_allum *allum)
{
  if (game->count == 1)
    {
      my_putstr("Player 1: Which line ?\n");
      game->buffer = get_next_line(0);
      game->line = my_getnbr(game->buffer);
      free(game->buffer);
      while (check_line(game, allum) == -1)
	reduc2(game);
      reduc4(game);
      while (check_overflow(game, allum) == -1)
	{
	  free(game->buffer);
	  reduc4(game);
	}
      player2(game, allum);
      free(game->buffer);
    }
  if (game->count == 2)
    my_ia(allum);
  show_allum(allum, game);
}

void		player42_cpu(t_game *game, t_allum *allum)
{
  static int	count = 1;

  show_boyard(allum, game);
  if (count == 1)
    {
      game = init_player42(game, allum);
      reduc9(game);
      while (check_overflow(game, allum) == -1)
        {
          free(game->buffer);
	  reduc9(game);
        }
      free(game->buffer);
      game42(game, allum);
    }
  else if (count == 2)
    my_ia42(allum);
  count++;
  if (count > 2)
    count = 1;
}

int		my_cpu(t_allum *allum)
{
  if (allum->l1 > 0)
    allum->l1 = allum->l1 - 1;
  else  if (allum->l2 > 0)
    allum->l2 = allum->l2 - 1;
  else if (allum->l3 > 0)
    allum->l3 = allum->l3 - 1;
  else if (allum->l4 > 0)
    allum->l4 = allum->l4 - 1;
  return (0);
}
