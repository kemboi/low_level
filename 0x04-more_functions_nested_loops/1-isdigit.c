/**
 * _isdigit - checks for digits
 * @c: integer to check
 *
 * Return: 1 if upper and 0 if lower
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
