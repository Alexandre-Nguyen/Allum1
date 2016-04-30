/*
** secondmap.c for secondmap in /home/nguye_0/rendu/CPE_2015_Allum1/src
** 
** Made by alexandre2 nguyen
** Login   <nguye_0@epitech.net>
** 
** Started on  Tue Feb 16 19:21:53 2016 alexandre2 nguyen
** Last update Sun Feb 21 19:44:17 2016 alexandre
*/

#include "../include/fonction.h"

int	final_whil(char **map, int col, int i)
{
  while (i != 9)
    {
      map[col][i] = ' ';
      i = i + 1;
    }
  map[col][0] = '*';
  map[col][8] = '*';
  return (i);
}

int	second_whil(char **map, int col, int allum, int i)
{
  int   a;

  a = 0;
  while (a <= allum)
    {
      map[col][i] = '|';
      a = a + 1;
      i = i + 1;
    }
  return (i);
}

int	first_whil(char **map, int col, int space, int i)
{
  int   a;

  a = 0;
  while (a <= space)
    {
      map[col][i] = ' ';
      a = a + 1;
      i = i + 1;
    }
  return (i);
}
