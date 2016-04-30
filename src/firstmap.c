/*
** firstmap.c for firstmap in /home/nguye_0/rendu/CPE_2015_Allum1/src
** 
** Made by alexandre2 nguyen
** Login   <nguye_0@epitech.net>
** 
** Started on  Thu Feb 11 15:46:07 2016 alexandre2 nguyen
** Last update Sun Feb 21 19:43:31 2016 alexandre
*/

#include "../include/fonction.h"
#include <stdlib.h>

int	first_ife(char **map, int i, int col)
{
  if (col == 0 || col == 5)
    {
      while (i != 9)
	{
	  map[col][i] = '*';
	  i = i + 1;
	}
    }
  return (i);
}

char	**first_malloc(char **map)
{
  if ((map = malloc(sizeof(char *) * (6 + 1))) == NULL)
    return (0);
  map[6] = NULL;
  return (map);
}

char	**firstmap(char **map)
{
  t_map	mapy;

  mapy.col = 0;
  mapy.a = 0;
  mapy.space = 3;
  mapy.allum = 0;
  map = first_malloc(map);
  while (mapy.col != 6)
    {
      mapy.i = 0;
      if ((map[mapy.col] = malloc(sizeof(char) * 11)) == NULL)
	return (0);
      map[mapy.col][9] = '\0';
      mapy.i = first_ife(map, mapy.i, mapy.col);
      if (mapy.col > 0 && mapy.col < 5)
	{
	  mapy.i = first_whil(map, mapy.col, mapy.space, mapy.i);
	  mapy.space = mapy.space - 1;
	  mapy.i = second_whil(map, mapy.col, mapy.allum, mapy.i);
	  mapy.allum = mapy.allum + 2;
	  mapy.i = final_whil(map, mapy.col, mapy.i);
	}
      mapy.col = mapy.col + 1;
    }
  return (map);
}

