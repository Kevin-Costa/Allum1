/*
** my.h for my.h in /home/costa_b/rendu/Piscine-C-include
** 
** Made by Kevin Costa
** Login   <costa_b@epitech.net>
** 
** Started on  Mon Oct 21 09:38:17 2013 Kevin Costa
** Last update Fri Feb 14 20:08:09 2014 Kevin Costa
*/

#ifndef		MY_H_
# define	MY_H_
# define	MEM_SIZE 5000
# define	MEM_READ 5000

typedef struct	s_game
{
  int		match2;
  int		match;
  char		*over;
  char		*buffer;
  int		line;
  int		nb;
  int		player;
  int		count;
  int		count2;
  int		player2;
  int		exit;
}		t_game;

typedef  struct	s_allum
{
  int		l1;
  int		l2;
  int		l3;
  int		l4;
  int		l42;
}		t_allum;

void		my_putchar(char c);
int		my_put_nbr(int nb);
int		my_putstr(char *str);
int		my_strlen(char *str);
int		my_getnbr(char *str);
int		overflow(char *str, char *ref);
int		my_putstr2(char *str, char *str2);
int		my_printf1(char *str, int nb, char *str2);
int		my_printf2(char *str, int nb, char *str2);
int		my_printf3(char *str);
int		my_printf4(char *str);
int		my_printf5(char *str);
int		my_puterror(char *str);
char		*get_next_line(const int fd);
int		my_game(t_game *game, t_allum *allumette);
void		player42(t_game *game, t_allum *allum);
void		player42_cpu(t_game *game, t_allum *allum);
int		player2(t_game *game, t_allum *allum);
void		player1(t_game *game, t_allum *allum);
void		option(t_game *game, t_allum *allum);
t_allum		*init_allum();
t_game		*init_player(t_game *game, t_allum *allum);
t_game		*init_cpu(t_game *game);
t_game		*init_player42(t_game *game, t_allum *allum);
int		allum(t_game *game, t_allum *allumette);
int		check_line(t_game *game, t_allum *allum);
int		check_overflow(t_game *game, t_allum *allum);
int		check_player(t_game *game, t_allum *allum);
int		check_player2(t_game *game, t_allum *allum);
int		check_allum(t_game *game, t_allum *allum);
int		show_base();
void		show_line1(t_allum *allum, t_game *game);
void		show_line2(t_allum *allum, t_game *game);
void		show_line3(t_allum *allum, t_game *game);
void		show_line4(t_allum *allum, t_game *game);
void		show_boyard(t_allum *allum, t_game *game);
void		show_42(t_allum *allum, t_game *game);
void		show_allum(t_allum *allum, t_game *game);
void		draw_allum();
void		draw_boyard();
void		show(t_allum *allum, t_game *game);
int		my_cpu(t_allum *allum);
int		condition_p2(t_allum *allum, t_game *game);
int		condition_cpu1(t_allum *allum, t_game *game);
int		condition_cpu2(t_allum *allum, t_game *game);
void		my_ia(t_allum *allum);
void		reduc(t_game *game, t_allum *allumette);
void		reduc2(t_game *game);
void		reduc3(t_game *game);
void		reduc4(t_game *game);
void		reduc5(t_game *game);
void		reduc6(t_game *game);
void		reduc7(t_game *game);
void		reduc8(t_game *game);
void		reduc9(t_game *game);
void		game42(t_game *game, t_allum *allum);
void		my_ia42(t_allum *allum);
int		my_exit(t_game *game, t_allum *allum);

#endif
