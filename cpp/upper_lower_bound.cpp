#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
    int arr1[] = { 5, 5, 5, 6, 6, 6, 7, 7 };
    vector<int> nums(arr1, arr1 + 8);
    auto lower = lower_bound(nums.begin(), nums.end(), 6) - nums.begin();
    auto upper = upper_bound(nums.begin(), nums.end(), 6) - nums.begin();
    cout<<lower<<endl;
    cout<<upper<<endl;

    cout<<endl;
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++) {
        cin>>arr[i];
    }

    auto itr = lower_bound(arr, arr + n, 6);
    cout<<"value: ";
    cout << *itr << endl; // returns the no. stored at the itr memory address

    auto it = lower_bound(arr, arr + n, 6) - arr; // returns the index position of searched element in array
    cout <<"index value: ";
    cout << it << endl;

    auto itr2 = lower_bound(arr, arr + n, 3); // if the searched element is not present then it will give next greater element
    cout<<"value: ";
    cout << *itr2 <<endl;

    auto it2 = lower_bound(arr, arr + n, 3) - arr;
    cout <<"index value: ";
    cout<< it2 <<endl;

    return 0;
}