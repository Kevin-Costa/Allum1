/*
** allum.c for allum in /home/costa_b/rendu/prog_elem/allum1
** 
** Made by Kevin Costa
** Login   <costa_b@epitech.net>
** 
** Started on  Mon Feb  3 16:40:18 2014 Kevin Costa
** Last update Fri Feb 14 20:08:31 2014 Kevin Costa
*/

#include	<stdlib.h>
#include	<unistd.h>
#include	<stdio.h>
#include	<sys/types.h>
#include	<sys/wait.h>
#include	"my.h"

int		my_game(t_game *game, t_allum *allumette)
{
  while (42)
    {
      game = init_player(game, allumette);
      reduc2(game);
      while (check_line(game, allumette) == -1)
	reduc2(game);
      reduc4(game);
      while (check_overflow(game, allumette) == -1)
	{
	  free(game->buffer);
	  reduc4(game);
	}
      free(game->buffer);
      reduc(game, allumette);
    }
}

void		my_ia(t_allum *allum)
{
  my_putstr("\033[32mCPU TURN\n\033[0m");
  sleep(1);
  my_cpu(allum);
}

void		show(t_allum *allum, t_game *game)
{
  system("clear");
  draw_allum();
  show_line1(allum, game);
  show_line2(allum, game);
  show_line3(allum, game);
  show_line4(allum, game);
}

int		allum(t_game *game, t_allum *allum)
{
  game->nb = my_getnbr(game->buffer);
  if (game->player == 2)
    player2(game, allum);
  return (0);
}

int		main()
{
  t_game       	*game;
  t_allum	*allumette;

  allumette = init_allum();
  game = NULL;
  show_base();
  my_game(game, allumette);
  free(game);
  free(allumette);
  return (0);
}
