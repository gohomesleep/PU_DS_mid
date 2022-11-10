#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
    srand(time(NULL));

    int dice_faces = 0;
    int num_count[100] = {0};
    int rolls = 0;

    printf("骰子面數: ");
    scanf("%d", &dice_faces);
    printf("丟幾次: ");
    scanf("%d", &rolls);

    for (int i = 0 ; i < rolls ; i++){
        int num = rand()%dice_faces;
        num_count[num]++;
    }

    for (int i = 0 ; i < dice_faces ; i++){
        printf("%02d - %d\n", i+1, num_count[i]);
    }

    return 0;
}
