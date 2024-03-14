#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverse(char array[]){
    int aux, end, size;
    size = strlen(array);

    end = size - 1;
    for (int i = 0; i < size/2; i++)
    {
        aux = array[i];
        array[i] = array[end];
        array[end] = aux;
        end--;
    }
    
}
int main()
{
    char word[] = {"!ecnahc amu ecerem azetrec moc ,agav atse arap otadidnac omito mu ,onnerB"};

    reverse(word);

    printf("%s",word);
    return 0;
}  