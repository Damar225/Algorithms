

void main()
{
    int array[] = {2, 6, 7, 4, 3, 2, 5, 1};
    int size = sizeof(array)/sizeof(array[0]);

    SelectionSort(array, size);
    PrintArray(array, size);
}

void SelectionSort(int array[], int size)
{
    for(int j = 0;j<size;j++)
    {
        int min = array[j];
        int minIndex = j;
        for(int i = j; i < size; i++)
        {
            if(array[i] < min)
            {
                min = array[i];
                minIndex = i;
            }
        }
        int temp = array[j];
        array[j] = min;
        array[minIndex] = temp;
    }
}

void PrintArray(int array[], int size)
{
    printf("Array Elements {");
    for(int i =0; i < size; i++)
        printf("%d, ", array[i]);
    printf("}\n");
}
