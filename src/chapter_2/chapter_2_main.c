/**
 * Author: Tabuyos
 * Created: 11/23/20 2:48 PM
 * Site: www.tabuyos.com
 * Email: tabuyos@outlook.com
 * Description: 
 */
#include <stdio.h>

// define function before uses.
void butler(void);

// define function before main function if you won't define function like above.
void say_name(char *name){
    printf("Hello %s\n", name);
}

int main(void){
    printf("before\n");
    butler();
    say_name("tabuyos");
    printf("after\n");
    return 0;
}

void butler(void){
    printf("Hello butler\n");
}
