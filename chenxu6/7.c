#include <stdio.h>

void add(char);
void delete (char);
int rwx = 0;

int main()
{
    //initiation
    char temp;
    char symbol;
    scanf("%c", &temp);
    if (temp == 'x') {
        rwx ^= (1 << 0);
    } else if (temp == 'w') {
          rwx ^= (1 << 1);
          scanf("%c", &temp);
          if (temp == 'x') {
              rwx ^= (1 << 0);
          }
      } else if (temp == 'r') {
            rwx ^= (1 << 2);
            scanf("%c", &temp);
            if (temp == 'w') {
                rwx ^= (1 << 1);
                scanf("%c", &temp);
                if (temp == 'x') {
                    rwx ^= (1 << 0);
                }
            }
        }  
    //modification
    while (scanf("%c", &symbol) != EOF) {
        if (symbol == '+') {
            scanf("%c", &temp);
            add(temp);
        } else if (symbol == '-') {
              scanf("%c", &temp);
              delete (temp);
          }
    }
    //output
    if (rwx != 1) {
        printf("%d", rwx);
    } else {
        printf("0");
    }

    return 0;
} 

void add(char input)
{
    if (input == 'r' && rwx / 4 != 1) {
        rwx ^= (1 << 2);
    } else if (input == 'w' && (rwx / 2 % 2 != 1)) {
          rwx ^= (1 << 1);
      } else if (rwx % 4 != 1) {
            rwx ^= (1 << 0);
        }
}

void delete (char input)
{
    if (input == 'r' && rwx / 4 == 1) {
        rwx ^= (1 << 2);
    } else if (input == 'w' && (rwx / 2 % 2 == 1)) {
        rwx ^= (1 << 1);
      } else if (rwx % 4 == 1) {
            rwx ^= (1 << 0);
        }
}
