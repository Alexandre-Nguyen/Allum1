/*
** allum1.c for allum1 in /home/nguye_0/rendu/CPE_2015_Allum1/src
** 
** Made by alexandre2 nguyen
** Login   <nguye_0@epitech.net>
** 
** Started on  Mon Feb  8 17:42:19 2016 alexandre2 nguyen
** Last update Fri Feb 26 19:34:04 2016 alexandre
*/

#include "../include/fonction.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int	allum_nb(char **map, int line)
{
  int	i;
  int	allum;

  i = 0;
  allum = 0;
  while (map[line][i] != '\0')
    {
      if (map[line][i] == '|')
        allum = allum + 1;
      i = i + 1;
    }
  return (allum);
}

int	second_base(char **map)
{
  int	base;

  
  second_sentence_computer();
  map = first_computer(map);
  base = 0;
  return (base);
}

int	base(char **map)
{
  t_param	base;

  base.choise = 0;
  base.verif = 1;
  while (base.verif == 1)
    {
      printab(map);
      if (base.choise == 0)
	{
	  second_sentence_player();
	  base.line = first_line(map);
	  if (base.line == -1)
	    return (0);
	  base.matches = first_matches(map, base.line);
	  if (base.matches == -1)
	    return (0);
	  map = first_player(base.line, base.matches, map);
	  sentence(base.line, base.matches);
	  base.choise = 1;
	}
      else
	base.choise = second_base(map);
      base.verif = verif_allum(map, base.choise);
    }
  return (0);
}

int	main()
{
  char	**map;

  map = malloc(sizeof(char *) * 2);
  map = firstmap(map);
  base(map);
  return (0);
}
