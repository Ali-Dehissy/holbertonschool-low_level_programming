#include "hash_tables.h"

/**
 * hash_table_create - a function to create a hash table
 * @size: The hash_table size
 * Return: pointer to a hash table
 */
hash_table_t * hash_table_create(unsigned long int size) {
   hash_table_t * newtable;
   unsigned long int j;

   newtable = (hash_table_t * ) malloc(sizeof(hash_table_t));
   if (newtable == NULL)
      return (NULL);
   newtable -> size = size;
   newtable -> array = (hash_node_t ** ) malloc(
      sizeof(hash_node_t * ) * size);
   if (newtable -> array == NULL)
      return (NULL);
   for (j = 0; j < size; j++) {
      newtable -> size = size;
      newtable -> array[j] = NULL;
   }
   return (newtable);
}
