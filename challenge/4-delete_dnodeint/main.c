#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head;
    int result;

    head = NULL;

    /* Adding nodes to the list */
    add_dnodeint_end(&head, 0);
    add_dnodeint_end(&head, 1);
    add_dnodeint_end(&head, 2);
    add_dnodeint_end(&head, 3);
    add_dnodeint_end(&head, 4);
    add_dnodeint_end(&head, 98);
    add_dnodeint_end(&head, 402);
    add_dnodeint_end(&head, 1024);

    /* Print the current state of the list */
    print_dlistint(head);
    printf("-----------------\n");

    /* Deleting nodes from the list */
    result = delete_dnodeint_at_index(&head, 5);
    if (result == 1)
        printf("Node at index 5 deleted successfully.\n");
    else
        printf("Failed to delete node at index 5.\n");

    print_dlistint(head);
    printf("-----------------\n");

    result = delete_dnodeint_at_index(&head, 0);
    if (result == 1)
        printf("Node at index 0 deleted successfully.\n");
    else
        printf("Failed to delete node at index 0.\n");

    print_dlistint(head);
    printf("-----------------\n");

    result = delete_dnodeint_at_index(&head, 0);
    if (result == 1)
        printf("Node at index 0 deleted successfully.\n");
    else
        printf("Failed to delete node at index 0.\n");

    print_dlistint(head);
    printf("-----------------\n");

    result = delete_dnodeint_at_index(&head, 0);
    if (result == 1)
        printf("Node at index 0 deleted successfully.\n");
    else
        printf("Failed to delete node at index 0.\n");

    print_dlistint(head);
    printf("-----------------\n");

    result = delete_dnodeint_at_index(&head, 0);
    if (result == 1)
        printf("Node at index 0 deleted successfully.\n");
    else
        printf("Failed to delete node at index 0.\n");

    print_dlistint(head);
    printf("-----------------\n");

    result = delete_dnodeint_at_index(&head, 0);
    if (result == 1)
        printf("Node at index 0 deleted successfully.\n");
    else
        printf("Failed to delete node at index 0.\n");

    print_dlistint(head);
    printf("-----------------\n");

    result = delete_dnodeint_at_index(&head, 0);
    if (result == 1)
        printf("Node at index 0 deleted successfully.\n");
    else
        printf("Failed to delete node at index 0.\n");

    print_dlistint(head);
    printf("-----------------\n");

    result = delete_dnodeint_at_index(&head, 0);
    printf("-----------------\n");
    if (result == 1)
        printf("Node at index 0 deleted successfully.\n");
    else
        printf("Failed to delete node at index 0.\n");

    print_dlistint(head);
    printf("-----------------\n");

    /* Free the remaining nodes */
    free_dlistint(head);
    return (0);
}
