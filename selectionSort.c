

void main()
{
    int array[] = {2, 6, 7, 4, 11, 3, 2, 5, 1};
    int size = sizeof(array)/sizeof(array[0]);

    SelectionSort(array, size);
    PrintArray(array, size);
}

void SelectionSort(int unSortedArray[], int size)
{
    int sortedArray[size];
    for(int i = 0;i< size; i++)
    {
        sortedArray[i] = LargestElement(unSortedArray, size-i);
    }
}

int LargestElement(int array[], int size)
{
    int max = array[0];
    int maxIndex = 0;
    for(int i = 1;i< size; i++)
    {
        if(array[i] > max)
        {
            max = array[i];
            maxIndex = i;
        }
    }

    // remove element from the array
    int temp = array[maxIndex];
    array[maxIndex] = array[size-1];
    array[size-1] = temp;

    return max;
}

void DeleteElementAtPosition(int array[], int size, int position)
{

}


void PrintArray(int array[], int size)
{
    printf("Array Elements {");
    for(int i =0; i < size; i++)
        printf("%d, ", array[i]);
    printf("}\n");
}
