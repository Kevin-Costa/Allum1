/*
** game42.c for game42.c in /home/costa_b/rendu/prog_elem/Allum1
** 
** Made by Kevin Costa
** Login   <costa_b@epitech.net>
** 
** Started on  Wed Feb 12 15:15:44 2014 Kevin Costa
** Last update Fri Feb 14 20:07:33 2014 Kevin Costa
*/

#include	<unistd.h>
#include	<stdlib.h>
#include	"my.h"

void		game42(t_game *game, t_allum *allum)
{
  int		count;

  count = game->count;
  allum->l42 = allum->l42 - game->nb;
  if (allum->l42 == 1)
    {
      free(allum);
      free(game);
      my_printf2("\033[33m\nPlayer", count, "win\n\033[0m");
    }
  else if (allum->l42 < 1)
    {
      if (game->count == 1)
        my_putstr("\033[33m\nPlayer 2 win\n\033[0m");
      else
        my_putstr("\033[33m\nPlayer 1 win\n\033[0m");
      free(allum);
      free(game);
      exit (1);
    }
}

void		my_ia42(t_allum *allum)
{
  int		a;
  int		b;
  int		c;
  int		d;
  int		e;

  a = allum->l42 - 17;
  b = allum->l42 - 13;
  c = allum->l42 - 9;
  d = allum->l42 - 5;
  e = allum->l42 - 1;
  my_putstr("\033[32mCPU TURN\n\033[0m");
  sleep(1);
  if (allum->l42 > 17)
    allum->l42 = allum->l42 - a;
  else if (allum->l42 > 13)
    allum->l42 = allum->l42 - b;
  else if (allum->l42 > 9)
    allum->l42 = allum->l42 - c;
  else if (allum->l42 > 5)
    allum->l42 = allum->l42 - d;
  else if (allum->l42 > 1)
    allum->l42 = allum->l42 - e;
}

void		player42(t_game *game, t_allum *allum)
{
  show_boyard(allum, game);
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

int		check_allum(t_game *game, t_allum *allum)
{
  if (game->match == 69 || game->match2 == 69)
    {
      my_exit(game, allum);
      return (-1);
    }
  else if ((game->match > 3 || game->match < 1) &&
	   (game->match2 > 3 || game->match2 < 1))
    return (my_puterror("You can only put a number between 1 and 3"));
  return (0);
}

void		reduc9(t_game *game)
{
  my_putstr("Player 1: How many ? (between 1 & 3)\n");
  game->buffer = get_next_line(0);
  game->nb = my_getnbr(game->buffer);
  game->over = game->buffer;
}
