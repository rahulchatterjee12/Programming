#include <stdio.h>
#include <time.h>


int play_dice(){
    int dice = rand()*6;
    return dice;
}
int main(){

    int ans = play_dice();
    printf("%d",ans);
    return 0;
}