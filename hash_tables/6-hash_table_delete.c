#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 *
 * @ht: pointer to hash table data structure
 * Return: void
 */
void hash_table_delete(hash_table_t * ht) {
   hash_node_t * head = NULL;
   hash_node_t * tempo = NULL;
   unsigned int j = 0;

   if (!ht)
      return;
   for (j = 0; j < ht -> size; j++) {
      head = ht -> array[j];
      while (head != NULL) {
         tempo = head -> next;
         free(head -> key);
         free(head -> value);
         free(head);
         head = tempo;
      }
   }
   free(ht -> array);
   free(ht);
}
