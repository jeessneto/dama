#include <stdio.h>
#include <stdlib.h>

int min_moves_dama(int x1, int y1, int x2, int y2) {
    if (x1 == x2 && y1 == y2) {
        return 0;
    } else if (x1 == x2 || y1 == y2 || abs(x1 - x2) == abs(y1 - y2)) {
        return 1;
    } else {
        return 2;
    }
}

int main() {
    int x1, y1, x2, y2;
    
    printf("Digite a linha da posi��o atual da dama: ");
    scanf("%d", &x1);
    printf("Digite a coluna da posi��o atual da dama: ");
    scanf("%d", &y1);
    printf("Digite a linha da posi��o desejada da dama: ");
    scanf("%d", &x2);
    printf("Digite a coluna da posi��o desejada da dama: ");
    scanf("%d", &y2);

    int moves = min_moves_dama(x1, y1, x2, y2);
    printf("A dama precisa de no m�nimo %d movimento(s) para chegar � posi��o desejada.\n", moves);
    
    return 0;
}

