#include "stdio.h"
#include "stdlib.h"
#include "unistd.h"

/**
 * infinite_while - a function that runs forever and returns nothing
 * Return: 0 in the end
 */

int infinite_while(void)
{
	while (1)
	{
		sleep(1);
	}
	return (0);
}

/**
 * main - the entry point of a program that creates 5 zombie processes.
 * Return: 0 if the program runs successfully.
 */

int main(void)
{
	int zombie_count = 0;
	pid_t process_id;

	while (zombie_count < 5)
	{
		process_id = fork();
		if (!process_id)
			break;
		printf("Zombie process created, PID: %i\n", (int)process_id);
		zombie_count++;
	}
	if (process_id != 0)
		infinite_while();
	return (0);
}
