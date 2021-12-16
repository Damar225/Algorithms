void main()
{
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(array)/sizeof(array[0]);

    int result = BinarySearch(90, array, size);

    if(result != -1)
    {
        printf("the index is: %d", result);
    }
    else
    {
        printf("element not found");
    }
}

int SimpleSearch(int element,int array[], int size)
{
    for(int i = 0;i <size;i++)
    {
        if(array[i] == element)
            return i;
    }
    return -1;
}

int BinarySearch(int element, int array[], int size)
{
    int low = 0;
    int high = size -1;

    while(low <= high)
    {
        int mid = (low + high)/2;
        int guess = array[mid];
        if(guess == element)
            return mid;
        else if(guess < element)
            low = mid + 1;
        else
            high = mid + 1;
    }
    return -1;
}
