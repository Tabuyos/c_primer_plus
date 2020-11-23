/**
 * Author: Tabuyos
 * Created: 11/23/20 11:06 AM
 * Site: www.tabuyos.com
 * Email: tabuyos@outlook.com
 * Description: 
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    float weight;
    float value;
    const int INPUT_SIZE = 10;
    char read_str[INPUT_SIZE];

    printf("Are you worth your weight in platinum?\n");
    printf("Let's check it out.\n");
    printf("Please entry your weight in pounds: ");
    fgets(read_str, INPUT_SIZE, stdin);
    weight = strtof(read_str, NULL);
    printf("value = %f\n", weight);
    value = 1700.00f * weight * 14.5833f;
    printf("value = %f\n", value);
}