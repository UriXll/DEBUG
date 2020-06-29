#include <stdio.h>
#include <string.h>

int main()
{
    char input[4];
    int counter = 0;
    scanf("%s", input);
    char operation[3];
    int r = 0;
    int w = 0;
    int x = 0;
    if (input[0] == 'r' && input[1] == 'w' && input[2] == 'x') {
        counter = 7;
        r++, w++, x++;
    } else if (input[0] == 'r' && input[1] == 'w') {
        counter = 6;
        r++, w++;
    } else if (input[0] == 'r' && input[1] == 'x') {
        counter = 5;
        r++, x++;
    } else if (input[0] == 'w' && input[1] == 'x') {
        counter = 3;
        w++, x++;
    } else if (input[0] == 'r') {
        counter = 4;
        r++;
    } else if (input[0] == 'w') {
        counter = 2;
        w++;
    } else {
        counter = 1;
        x++;
    }
    
    while (scanf("%s", operation) != EOF) {
        if (r == 0 && operation[0] == '+' && operation[1] == 'r') {
            counter += 4;
	    r++;
        } else if (w == 0 && operation[0] == '+' && operation[1] == 'w') {
            counter += 2;
	    w++;
        } else if (x == 0 && operation[0] == '+' && operation[1] == 'x') {
            counter += 1;
	    x++;
        } else if (r == 1 && operation[0] == '-' && operation[1] == 'r') {
            counter -= 4;
	    r--;
        } else if (w == 1 && operation[0] == '-' && operation[1] == 'w') {
            counter -= 2;
	    w--;
        } else if (x == 1) {
            counter -= 1;
	    x--;
        }
    }
    
    printf("%d", counter);
      
    return 0;
}
