#include <stdio.h>
typedef struct _book{
    int id;
    char title[100];
    char author[100];
    int publication_year;
    // DESPUES AGREGAR GENERO
    int quantity;
}book_t;
typedef struct _member{
    int id;
    char name[100];
    int bookIssued; // HACER UNA LISTA DE LIBROS PRESTADOS
}member_t;
void addBook();
void displayBook();
void addMember();
void issueBook();
int main()
{
    int choice = 0;

    do
    {
        printf("\nMenu de sistema de manejo de biblioteca\n");
        printf("\t1. Agregar un libro\n");
        printf("\t2. Mostrar libros disponibles\n");
        printf("\t3. Agregar un miembro\n");
        printf("\t4. Prestar un libro\n");
        printf("\t5. Salir\n");
        printf("Indica tu opcion: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            addBook();
            break;
        case 2:
            displayBook();
            break;
        case 3:
            addMember();
            break;
        case 4:
            issueBook();
            break;
        case 5:
            break;
        default:
            printf("Esta no es una opcion valida!!!\n");
            break;
        }
    } while (choice != 5);
}
// **********************
void addBook()
{
    printf("Se agrego un libro");
}
// *********************
void displayBook()
{
}
// *********************
void addMember()
{
}
// *********************
void issueBook()
{
}