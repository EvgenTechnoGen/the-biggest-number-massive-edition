#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    
    int arr[5];
    
    cout << "Enter five numbers: " << endl;
    
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];
    
    if (arr[0] > arr[1] && arr[0] > arr[2] && arr[0] > arr[3] && arr[0] > arr[4]) {
        cout << "The biggest number is - " << arr[0] << endl;
    }
    
    else if (arr[1] > arr[0] && arr[1] > arr[2] && arr[1] > arr[3] && arr[1] > arr[4]) {
        cout << "The biggest number is - " << arr[1] << endl;
    }
    
    
    
    
    
    
    cin.get();
    return 0;
}
