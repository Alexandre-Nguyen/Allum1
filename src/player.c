/*
** player.c for player in /home/nguye_0/rendu/CPE_2015_Allum1/src
** 
** Made by alexandre2 nguyen
** Login   <nguye_0@epitech.net>
** 
** Started on  Mon Feb 15 12:59:33 2016 alexandre2 nguyen
** Last update Thu Feb 25 13:45:47 2016 alexandre
*/

#include "../include/fonction.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

char	**first_player(int line, int matches, char **map)
{
  int   limit;
  int   pos;
  int   i;

  i = 0;
  pos = 0;
  while (map[line][i] != '\0')
    {
      if (map[line][i] == '|')
        {
          if (map[line][i + 1] != '|')
            pos = i;
        }
      i = i + 1;
    }
  limit = pos - matches;
  while (pos > limit)
    {
      map[line][pos] = ' ';
      pos = pos - 1;
    }
  return (map);
}
