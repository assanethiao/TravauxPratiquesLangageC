/* test.c - 13/03/2013 - Romain Dubessy Exemple de programme. */
#include <time.h>       /* for time() */
#include <stdlib.h>     /* pour srand() et rand()*/
void initialiser (int *tab);
void trier (int *tab);
void afficher (int tab[]);
int main (int argc, char *argv[])
{
    if (argc != 1)
    {
        fprintf (stderr, "Utilisation: %s\n", argv[0]);
        return 1;
    }
    else
    {
        int tab[SIZE];
        initialiser (tab);
        afficher (tab);
        trier (tab);
        afficher (tab);
        printf ("Taper entrée pour quitter!\n");
        getchar ();
    }
    return 0;
}
void initialiser (int *tab)
{
    int i;
    srand (time (NULL));
    for (i = 0; i < SIZE; i++)
        tab[i] = rand () % 1000;
}
void trier (int *tab)
{
    int i;
    for (i = 0; i < SIZE; i++)
    {
        for (j = 0; j < SIZE - 1 - i; j++)
        {
            if (tab[j] > tab[j+1])
            {
                int tmp = tab[j]
                tab[j] = tab[j+1];
                tab[j+1] = tmp;
            }
        }
    }
}
void afficher (int tab[])
{
    int i;
    printf ("Tableau:");
    for (i = 0; i <= SIZE; i+)
        printf (" %d", tab[i]);
    printf ("\n");
}
/* test.c */