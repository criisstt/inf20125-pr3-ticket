#include <stdio.h>

int main(void)
{
    int muestras_iniciales = 0;
    int muestras_recibidas = 0;
    int muestras_procesadas = 0;
    int muestras_pendientes = 0;

    if (scanf("%d %d %d",
              &muestras_iniciales,
              &muestras_recibidas,
              &muestras_procesadas) != 3)
    {
        return 1;
    }

    muestras_pendientes = muestras_iniciales + muestras_recibidas - muestras_procesadas;

    printf("Muestras pendientes: %d\n", muestras_pendientes);
    return 0;
}
