/*
** fonction.h for fonction in /home/nguye_0/rendu/CPE_2015_Allum1/include
** 
** Made by alexandre2 nguyen
** Login   <nguye_0@epitech.net>
** 
** Started on  Mon Feb  8 17:41:33 2016 alexandre2 nguyen
** Last update Fri Feb 26 19:35:56 2016 alexandre
*/

#ifndef FONCTION_H_
# define FONCTION_H_

char	**firstmap(char **map);
char	**first_player(int line, int matches, char **map);
char	**first_computer(char **map);
int	allum_nb(char **map, int line);
int	base(char **map);
void	my_putchar(char c);
void	my_putstr(char *str);
void	printab(char **map);
int	my_getnbr(char *str);
void	my_put_nbr(int nb);
int	verif_allum_computer(int line, char **map);
int	error_line(int line, char **map);
int	error_matches(int matches, int line, char **map);
int	second_verif_allum(char **map, int choise);
int	verif_allum(char **map, int choise);
int	first_line(char **map);
int	first_matches(char **map, int line);
int	first_ife(char **map, int i, int col);
char	**first_malloc(char **map);
int	parse_matches(int line, int matches, int error, char **map);
int	parse_line(int line, int error, char **map);
int	final_whil(char **map, int col, int i);
int	second_whil(char **map, int col, int allum, int i);
int	first_whil(char **map, int col, int space, int i);
void	computer_sentence(int line, int matches);
void	sentence(int line, int matches);
void	second_sentence_player();
void	second_sentence_computer();
char	**fct_first_line(int a, int first_line, char **map);
char	**fct_second_line(int a, int first_line, char **map);
int	verif_buffer(char *buffer);
int	second_base(char **map);
char	*get_next_line(int fd);

typedef struct		s_param
{
  int   verif;
  int   line;
  int   matches;
  int   choise;
}			t_param;

typedef struct		s_map
{
  int   col;
  int   i;
  int   space;
  int   allum;
  int   a;
}			t_map;

typedef struct		s_comput
{
  int   a;
  int   i;
  int   line;
  int   matches;
  int	verif;
}			t_comput;

#endif			/*FONCTION_H_*/
