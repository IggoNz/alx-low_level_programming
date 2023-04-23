#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - prints each array elem on a newl
 * @array: array
 * @size: how many elem to print
 * @action: pointer to print in regular or hex
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
//exercise
//#include "function_pointers.h"
//#include <stdlib.h>
//
//*array_iterator - executes a function given as parameter on each element
//*array: array being executed
//@aize: the parameters in the array element
//@action: the pointer to print
//Return: void
//void array_iterator(int *array, size_t size, void (*action)(int))
//{
//	if (array == NULL || action == NULL)
//		return;
//	for (i = 0; i < size; i++)
//	{
//		action(array[i]);
//	}
//}
//void array_iterator(int *array, size_t size, void (*action)(int));
//{
//	if (array == NULL || action == NULL)
//		return;
//	for (i = 0; i < size; i++)
//	{
//		action(array[i]);
//	}
//}
