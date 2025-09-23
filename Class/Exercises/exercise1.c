#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void AddName( char **names );
void RemoveName( char **names );
void PrintNames( char *names );

int main () {
    int selection = 0;
    char *names = ( char * )malloc( 1 );
    names[0] = '\0';

    while( selection != 4) {
        printf("\tMenu:\t\n1) Adicionar nome\n2) Remover nome\n3) Listar\n4) Sair\nEscolha: ");
        scanf("%d", &selection);
        getchar();

        switch (selection) {
            case 1:
                AddName( &names );
                break;
            case 2:
                RemoveName( &names );
                break;
            case 3:
                PrintNames( names );
                break;
            case 4:
                printf("\nSaindo e liberando memória...\n");
                free(names);
                break;
            default:
                printf("\nEscolha Inválida. Tente novamente.\n\n");
                break;
        }
    }
}

void AddName( char **names ) {
    int currentNameSize = 0, namesSize = strlen( *names );
    char buffer[100];    

    printf( "\nEscreva o nome que deseja adicionar: " );
    
    fgets( buffer, sizeof(buffer), stdin );

    int ln = strlen( buffer ) - 1;
    if( buffer[ln] == '\n' )
        buffer[ln] = '\0';

    // printf("%s\n", buffer);
    currentNameSize = strlen(buffer);
    // printf("currentNameSize: %d\n", currentNameSize );

    // realloc to proxy pointer
    char *temporary_names = ( char * )realloc( *names, namesSize + currentNameSize + 2 );

    // check if realloc went a-ok. if yes, original pointer = temporary pointer
    if( temporary_names != NULL ) {
        *names = temporary_names;
        // printf("\nOK! COPYING TEMPORARY POINTER TO ORIGINAL POINTER...\n\n");
    } else {
        free(temporary_names);
    }

    // concatenate new name and hiphen
    *names = strcat( *names, buffer );
    *names = strcat( *names, "-");
    printf("\nNome adicionado!\n\n");

    // printf( "%s\n", *names );

}

void RemoveName( char **names ) {
    char nameToRemove[100];
    char nameCopy[100];
    char emptyString[100];
    int isInString = 0;
    int namesCounter = 0;
    int nameToremovePosition = 0;
    int j = 0, i = 0;

    

    printf("Escreva o nome que você quer remover: ");
    fgets( nameToRemove, sizeof( nameToRemove ), stdin );

    
    while( i <= strlen( ( *names ) ) ) {

        nameCopy[j] = ( *names )[i];
        // printf("hiphen search: %c\n", (*names)[i]);
        nameCopy[j+1] = '\0';
        // printf( "i: %d", i );
        // printf( "j: %d", j );
        // printf( "\n%d\n", strcmp(nameToRemove, nameCopy ) );

        if( nameToRemove[j+1] == '\n' ) {
            nameToRemove[j+1] = '\0';
        }

        if( strcmp(nameToRemove, nameCopy ) == 0 ) {
            printf( "It's in the String!" );
            printf( "\n%s\n", nameCopy );
            
            printf( "\n%s\n", nameToRemove );
            isInString = 1;
            nameToremovePosition = namesCounter;
            // namesCounter++;
            // break;
            
        }

        if( ( *names )[i+1] == '-' ) {
            // printf( "AAAAAAA\n" );
            // printf( "\n%s\n", nameCopy );
            // printf( "\n%d\n", nameCopy );
            // printf( "\n%s\n", nameToRemove );
            // printf( "\n%d\n", nameToRemove );

            // for( int k = 0; k < strlen( nameCopy ); k++ ) {
            //     printf( "%c\n", nameCopy[k] );
            // }
            // for( int k = 0; k < strlen( nameToRemove ); k++ ) {
            //     printf( "%c\n", nameToRemove[k] );
            // }
            namesCounter++;

            j = 0;
            strcpy( nameCopy, emptyString );
            i+=2;
        } else {
            i++;
            j++;
        }
        
    }

    printf( "\nnamescounter: %d\n", namesCounter );
    printf( "\nPosition: %d\n", nameToremovePosition );

    if( isInString == 0 ) {
        printf("\nEsse nome não está na string!\n\n");
        return;
    } else {
        char *newNamesString = ( char * )malloc( strlen( (*names) ) );
        ( *names ) = ( char * )realloc( newNamesString, strlen( newNamesString ) - strlen( nameToRemove ) - 1 );
        printf("test");
    }
    
    
    /*
    The idea for this function is the following:
    1. Get the name the user wants to remove
    2. Check if the name (nameToRemove) is in the string
    3. If it is, malloc a newNamesString with size strlen(names)
    4. realloc names to size ( strlen( names ) - strlen( nameToRemove ) - 1 ) the -1 is for the hiphen. This is probably broken
    5. Find a way to copy the old string without the nameToRemove from newNamesString to names string.
        I see three scenarios;:
        a) the nameToRemove is at the very beginning of the string

        b) the nameToRemove is at the very end of the string
        c) the nameToRemove is somewhere in the middle.

        for scenario a we can copy everything after the first name until the null terminator
        for scenario b we can copy everything before the last name until we get to the first character of the string (address of the "names" pointer).
        for scenatio c we can divide the string in two, copying everything before and after the name we wish to remove, then concatenating both strings into the final string


    6. Free( newNamesString )
    7. success!

    number 2 and 5 are the hard steps, not sure how to do them.
    */
}

void PrintNames( char *names ) {
    int i = 0, j = 1;

    if( names[i] == '\0') {
        printf("\nNENHUM NOME NA STRING, ADICIONE UM NOME PARA LISTAR.\n\n");
        return;
    }

    printf( "\nNomes:\n1. " );
    while( names[i] != '\0' ) {
        
        if( names[i] == '-' ) {
            printf("\n");
            i++;
            if( names[i+1] != '\0' ) {
                j++;
                printf( "%d. ", j );
            }
        }
        printf( "%c", names[i] );
        i++;
    }

    printf("\n");
    
}