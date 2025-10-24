
void print_alphabet(void)
{
	const char* str = "abcdefghijklmnopqrstuvwxyz\n";
	int i;

	for (i = 0; str[i] != 0; ++i)
	{
		_putchar(str[i]);
	}
}
