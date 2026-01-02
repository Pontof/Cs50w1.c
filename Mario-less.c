#include <cs50.h>
#include <stdio.h>

void draw_stairs(int n);
int get_height(void);
int main(void)
{
    int height = get_height();
    draw_stairs(height);
}
// get the height of the stair
int get_height(void)
{
    int height;
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1);
    return height;
}
// Adjust the width based on the input value (height)
void draw_stairs(int height)
{
    int width = height - 1;
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            printf(" ");
        }

        for (int k = width--; k < height; k++)
        {
            printf("#");
        }
        printf("\n");
    }
}
