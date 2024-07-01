pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
    sort(arr, arr+n); 
    int floor = -1;
    int ceil = -1;
    int low = 0;
    int high = n - 1;

    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == x) {
            return {arr[mid], arr[mid]};
        }
        if (arr[mid] < x) {
            floor = arr[mid];
            low = mid + 1;
        } else {
            ceil = arr[mid];
            high = mid - 1;
        }
    }
    return {floor, ceil};
}