#include <stdio.h>
#include <wiringPi.h>
#include "morsecode.h"

#define TIME_UNIT 250
#define DOT_TIME (TIME_UNIT)
#define DASH_TIME (TIME_UNIT*3)
#define LETTER_SPACE_TIME (TIME_UNIT*3)
#define WORD_SPACE_TIME (TIME_UNIT*7)


void init_morse(void)
{
}

void send_dot(void)
{
}

void send_dash(void) 
{
}

void wait_letter(void)
{
  printf("wait for letter\n");
}

void wait_dot(void)
{
  printf("wait for dot\n");
}

void wait_word(void)
{
  printf("wait for word\n");
}

void play_buzzer(int msec)
{
}

char *char2morse(char c)
{
  return "***===***";
}
