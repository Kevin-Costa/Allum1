/*
** my_init.c for my_init in /home/costa_b/rendu/prog_elem/allum1
** 
** Made by Kevin Costa
** Login   <costa_b@epitech.net>
** 
** Started on  Tue Feb  4 17:11:00 2014 Kevin Costa
** Last update Fri Feb 14 20:09:00 2014 Kevin Costa
*/

#include	<stdlib.h>
#include	"my.h"

t_allum		*init_allum()
{
  t_allum	*allum;

  if ((allum = malloc(sizeof(t_allum))) == NULL)
    return (NULL);
  allum->l1 = 1;
  allum->l2 = 3;
  allum->l3 = 5;
  allum->l4 = 7;
  allum->l42 = 21;
  return (allum);
}

t_game		*init_player(t_game *game, t_allum *allum)
{
  static int	count = 0;

  if (count == 0)
    {
      if ((game = malloc(sizeof(t_game))) == NULL)
	return (NULL);
      game->match = 0;
      game->match2 = 0;
      game->player2 = 0;
      reduc6(game);
      while (check_allum(game, allum) == -1)
	reduc6(game);
      reduc5(game);
      while (check_player(game, allum) == -1)
	reduc5(game);
      option(game, allum);
    }
  count++;
  if (count > 2)
    count = 1;
  game->count = count;
  my_putchar('\n');
  return (game);
}

t_game		*init_cpu(t_game *game)
{
  static int    count = 0;

  count++;
  if (count > 2)
    count = 1;
  game->count = count;
  return (game);
}

t_game          *init_player42(t_game *game, t_allum *allum)
{
  static int    count = 0;

  if (count == 0)
    {
      if ((game = malloc(sizeof(t_game))) == NULL)
        return (NULL);
      game->match = 0;
      game->match2 = 0;
      game->line = 0;
      reduc7(game);
      while (check_allum(game, allum) == -1)
        reduc7(game);
      reduc8(game);
      while (check_player2(game, allum) == -1)
	reduc8(game);
      option(game, allum);
    }
  if (count > 2)
    count = 1;
  game->count = count;
  count++;
  return (game);
}
