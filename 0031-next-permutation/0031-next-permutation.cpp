class Solution {
public:
    void reverseArray(vector<int>& arr, int start) {
        int i = start, j = arr.size() - 1;
        while (i <= j) {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }

    void nextPermutation(vector<int>& arr) {
        int n = arr.size();
        int pivot = -1;

        // Find the first decreasing element from the right
        for (int i = n - 2; i >= 0; i--) {
            if (arr[i] < arr[i + 1]) {
                pivot = i;
                break;
            }
        }

        // If no pivot exists, reverse the whole array
        if (pivot == -1) {
            reverseArray(arr, 0);
            return;
        }

        // Find the next greater element from the right
        for (int i = n - 1; i > pivot; i--) {
            if (arr[i] > arr[pivot]) {
                swap(arr[i], arr[pivot]);
                break;
            }
        }

        // Reverse the suffix
        reverseArray(arr, pivot + 1);
    }
};