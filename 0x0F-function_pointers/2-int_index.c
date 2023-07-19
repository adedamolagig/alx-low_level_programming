/**
 * int_index - Searches for an integer in an array.
 * @array: A pointer to the integer array to be searched.
 * @size: The number of elements in the array.
 * @cmp: A pointer to the function used to compare values.
 *
 * Return: The index of the first element for which the cmp function does not
 * return 0. If no element matches, return -1. If size is <= 0, return -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
    if (array == NULL || cmp == NULL || size <= 0)
        return -1;

    for (int i = 0; i < size; i++)
    {
        if (cmp(array[i]) != 0)
            return i;
    }

    return -1;
}

