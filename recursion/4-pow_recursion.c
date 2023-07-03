
/**
 * _pow_recursion - returns x raised to the
 * power of y
 *
 * @x: value
 *
 * @y: power
 *
 * Return: x raised to the power of y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y < 1)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
