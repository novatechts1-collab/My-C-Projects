#include <stdio.h>
#include "cs50.h"

void render(int c, int r);
int main(void)
{

    while (true)
    {
        int col = get_int("Number of rendered columns: ");
        int row = get_int("Number of rendered rows: ");
        if (col < 0 || row < 0)
        {
            printf("Ooof! One of these aren't quite right\n");
            continue;
        }
        
        render(col, row);
        break;
        
    }
    
}

void render(int c, int r)
{
    printf("Info received, now rendering %i by %i table\n", c, r);
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("0");
        }
        printf("\n");
    }
    
}
