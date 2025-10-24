#ifndef MAIN_H
#define MAIN_H
	/**
	 * _putchar - writes the character c to stdout
	 * @c: The character to print
	 *
	 * Return: On success 1.
	 * On error, -1 is returned, and errno is set appropriately.
	 */
	int _putchar(char c);	
	
	/**
	 * print_alphabet - Prints the whole alphabet lowercase
	*/
	void print_alphabet(void);
	
	/**
	 * print_alphabet_x10 - Prints the alphabet 10 times
	*/
	void print_alphabet_x10(void);

	int _islower(int c);
	
	int _isalpha(int c);

#endif
