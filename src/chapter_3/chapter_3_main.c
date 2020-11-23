/**
 * Author: Tabuyos
 * Created: 11/23/20 3:12 PM
 * Site: www.tabuyos.com
 * Email: tabuyos@outlook.com
 * Description: 
 */
#include <stdio.h>

void print_type(void);

int main(void){
    // unsigned symbol is not negative number.
    int i = 2147483647;
    unsigned int j = 4294967295;
    printf("%d, %d, %d\n", i, i + 1, i + 2);
    printf("%u, %u, %u\n", j, j + 1, j + 2);
    print_type();
}

void print_type(){
    unsigned int un = 3000000000;
    short end = 200;
    long big = 65537;
    long long very_big = 12345678908642;
    printf("un = %u and not %d\n", un, un);
    printf("end = %hd and %d\n", end, end);
    printf("big = %ld and not %hd\n", big, big);
    printf("very_big = %lld and not %ld\n", very_big, very_big);
}
