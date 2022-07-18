/*
 * File: 100-first.c
<<<<<<< HEAD
 * Auth: Lindah sumabti
=======
 * Auth: Lindah Sumbati
>>>>>>> 6f7afad356d004891c8e0a580cd10b588ec1672a
 */

#include <stdio.h>

void __attribute__((constructor)) hare(void);

/**
 * hare - Prints a string before the
 *        main function is executed.
 */
void hare(void)
{
	printf("You're beat! and yet, you must allow,\n"
			 "I bore my house upon my back!\n");
}
