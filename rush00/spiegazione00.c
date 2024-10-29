#include <unistd.h>

void	ft_putchar(char c); // le funzioni vuote sono funzioni create in altri file che vengono poi chiamate una volta compilato l'esercizio00

void	position(int a, int x, char e, char s) //questa funzione si occupa di controllare la posizione della riga e di stampare il carattere giusto, utilizziamo int a che e` un contatore per capire in che riga siamo, int x che e` la lunghezza della riga, e i due char che sono i caratteri che bisogna utilizzare.
{
	while (a <= x) // questo while controlla che il contatore a e` minore o uguale a x cosi da controllare tutte le posizioni della riga.
	{
		if (a == 1) //se e` in prima posizione stampa il primo carattere
		{
			ft_putchar(e);
		}
		else if (a < x) // se e` compreso tra la seconda posizione e la penultima posizione stampa i caratteri di mezzo
		{
			ft_putchar(s);
		}
		else // se in ultima posizione stampa il carattere finale
		{
			ft_putchar(e);
		}
		a++;
	}
}

void	print_riga(int x) //si occupa di dare il valore 1 al contatore, perche` si comincia a contare da 1, e richiama la funzione position e, una volta terminata, stampa un accapo '\n'
{
	int	a;

	a = 1;
	position(a, x, 'o', '-');
	ft_putchar('\n');
}

void	print_colonna(int x, int y) //si occupa di contare quante colonne vengono passate e utilizza la funzione position per stampare la riga vuota
{
	int	a;
	int	b;

	b = 3; //il contatore parte da 3 perche` automaticamente ignora la prima e l' ultima colonna che sono righe con caratteri diversi da quelli vuoti
	while (b <= y)
	{
		a = 1;
		position(a, x, '|', ' ');
		ft_putchar('\n');
		b++;
	}
	if (y > 1) // l' if controlla che la lunghezza e` maggiore di 1, cosi da evitare di stampare caratter di troppo se il valore di y e` minore di 1
	{
		print_riga(x);
	}
}

void	rush(int x, int y) //la funzione rush si occupa di passare i valori di lunghezza(int x) e altezza (int y) e li passa alle funzioni di sopra per far girare il programma correttamente
{
	print_riga(x);
	print_colonna(x, y);
}
