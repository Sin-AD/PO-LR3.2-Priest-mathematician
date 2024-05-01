using System;

class MainClass
{
// Функция для вычисления количества перемещений дисков при использовании 4 колышков
static int HanoiFourPegs(int n)
{
if (n == 0) return 0;
if (n == 1) return 1;

int k = (int)Math.Round(n + 1 - Math.Sqrt(2 * n + 1));
int m = n - k;

int moves = 0;

moves += HanoiFourPegs(k);
moves += HanoiThreePegs(m);
moves += HanoiFourPegs(k);

return moves;
}

// Функция для вычисления количества перемещений дисков при использовании 3 колышков
static int HanoiThreePegs(int n)
{
if (n == 0) return 0;
if (n == 1) return 1;

int moves = 0;

moves += HanoiThreePegs(n - 1);
moves += 1;
moves += HanoiThreePegs(n - 1);

return moves;
}

public static void Main(string[] args)
{
int n;

while (int.TryParse(Console.ReadLine(), out n))
{
int moves = HanoiFourPegs(n);
Console.WriteLine(moves);
}
}
}
