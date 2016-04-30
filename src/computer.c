/*
** computer.c for computer in /home/nguye_0/rendu/CPE_2015_Allum1/src
** 
** Made by alexandre2 nguyen
** Login   <nguye_0@epitech.net>
** 
** Started on  Mon Feb 15 13:04:37 2016 alexandre2 nguyen
** Last update Sun Feb 21 19:42:58 2016 alexandre
*/

#include "../include/fonction.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <time.h>

void	traitement_computer(int a, char **map, int line)
{
  int	first_line;

  first_line = verif_allum_computer(a, map);
  if (line == 2)
    fct_first_line(a, first_line, map);
  else if (line == 1)
    fct_second_line(a, first_line, map);
}

int	verif_allum_computer(int line, char **map)
{
  int	i;
  int	allum;

  allum = 0;
  i = 0;
  while (map[line][i] != '\0')
    {
      if (map[line][i] == '|')
	allum = allum + 1;
      i = i + 1;
    }
  if (allum > 0)
    return (allum);
  else
    return (0);
}

void	first_condition_computer(int *pos, char **map, int line)
{
  if (pos[1] == 3 && pos[0] == 1)
    pos[0] = pos[1];
  traitement_computer(pos[0], map, line);
}


void	second_condition_computer(int matches, char **map)
{
  int	reverif;
  int	reline;

  reline = 0;
  reverif = 0;
  while (reverif == 0)
    {
      reline = ((rand() % 5) + 1);
      reverif = verif_allum_computer(reline, map);
    }
  matches = ((rand() % reverif) + 1);
  computer_sentence(reline, matches);
  map = first_player(reline, matches, map);
}

char	**first_computer(char **map)
{
  int	pos[2];
  t_comput	cpu;

  cpu.a = 0;
  cpu.i = 0;
  cpu.line = 0;
  cpu.verif = 0;
  srand(time(NULL));
  while (cpu.i != 5)
    {
      cpu.verif = verif_allum_computer(cpu.i, map);
      if (cpu.verif != 0)
	{
	  cpu.line = cpu.line + 1;
	  pos[cpu.a] = cpu.i;
	  cpu.a = cpu.a + 1;
	}
      cpu.i = cpu.i + 1;
    }
  if (cpu.line == 2 || cpu.line == 1)
    first_condition_computer(pos, map, cpu.line);
  else
    second_condition_computer(cpu.matches, map);
  return (map);
}
