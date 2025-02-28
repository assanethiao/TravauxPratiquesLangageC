/* test.c - 13/03/2013 - Romain Dubessy Exemple de programme. */
#include <stdio.h>      /* pour printf(), fprintf(), getchar() */
/*#include <time.h>        pour time() et
#include <stdlib.h>      pour srand() et rand()
ne sont pas des bibliotheque utilise dans le code donc ce n'est pas la peine de les importer*/
#define SIZE 100  /* Déclaration de SIZE en tant que macro pour fixer la taille d'un tableau */
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
    int j;          /*declaration de j*/
    for (i = 0; i < SIZE; i++)
    {
        for (j = 0; j < SIZE - 1 - i; j++)
        {
            if (tab[j] > tab[j+1])
            {
              int tmp = tab[j];    /*Omission du point virgule*/
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
    for (i = 0; i <= SIZE; i++)     /*Omission de la doublure de +; on fait i++ au lieu de i+*/
        printf (" %d", tab[i]);
    printf ("\n");
}
/* test.c */