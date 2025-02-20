#include<iostream>
using namespace std;

//Butterfly Pattern

/*int main() {
    int n;
    cout << "Enter the size of the butterfly pattern: ";
    cin >> n;
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) 
        cout<<"*";
        for (int j = 1; j <= 2 * (n - i); j++) 
        cout<<" ";
        for (int j = 1; j <= i; j++) 
        cout<<"*";
        cout<<endl;
    }
    
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) 
        cout<<"*";
        for (int j = 1; j <= 2 * (n - i); j++) 
        cout<<" ";
        for (int j = 1; j <= i; j++) 
        cout<<"*";
        cout<<endl;
    }
    
    return 0;
}*/



//Array Reverse

/*int main() {
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    
    int arr[n];
    cout<<"Enter "<<n<<" elements: ";
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    
    cout<<"Reversed array: ";
    for (int i = n - 1; i >= 0; i--) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}*/



//Find Maximum and Minimum

/*int main() {
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    
    int arr[n];
    cout<<"Enter "<<n<<" elements: ";
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    
    int max = arr[0], min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i]>max) 
        max = arr[i];
        if (arr[i]<min) 
        min = arr[i];
    }
    
    cout<<"Maximum element: "<<max<<endl;
    cout<<"Minimum element: "<< min<<endl;
    
    return 0;
}*/



//Sum and Average of Array Elements

/*int main() {
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    
    int arr[n], sum = 0;
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
    
    int average = (int)sum / n;
    
    cout<<"Sum of elements: "<<sum<<endl;
    cout<<"Average of elements: "<<average<<endl;
    
    return 0;
}*/



//Sort an array (logic)

/*void swap(int &a, int &b){
    a=a+b;
    b=a-b;
    a=a-b;
}
int main(){
    int a[10],i;
    int n;
    cout<<"Enter no. of elements :  ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
            } 
        }
    }
    cout << "Sorted array (ascending order): ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    return 0;
}*/



//Linear Search (Binary Searching)

/*int main(){
    int a[5]={12,26,14,56,7},num,i;
    bool found=false;
    int n = sizeof(a) / sizeof(a[0]);
    cout<<"Enter the number to find: ";
    cin>>num;
    for(i=0;i<n;i++)
    {
        if(num==a[i])
        {
            cout<<"Number is at:  "<<i;
            found=true;
            break;
        }
    }
    if (!found) { 
        cout << "Number not found" << endl;
    }
    return 0;

}*/



//Remove Duplicates

/*int main() {
    int n, newSize = 0;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" elements: ";
    for (int i = 0; i < n; i++) 
    cin>>arr[i];
    
    for (int i = 0; i < n; i++) {
        bool dup = false;
        for (int j = 0; j < newSize; j++) 
        if (arr[i] == arr[j]) 
        dup = true;
        if (!dup) 
        arr[newSize++] = arr[i];
    }
    
    cout<<"Array after removing duplicates: ";
    for (int i = 0; i < newSize; i++) 
    cout<<arr[i]<<" ";
    return 0;
}*/



//Longest Consecutive Subsequence

/*int main() {
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n], longest = 1;
    cout<<"Enter "<<n<<" elements: ";
    for (int i = 0; i < n; i++) 
    cin>>arr[i];
    
    for (int i = 0; i < n; i++) {
        int count = 1, num = arr[i];
        for (int j = 0; j < n; j++) {
            if (arr[j] == num + 1) {
                count++;
                num++;
                j = -1;
            }
        }
        if (count > longest) 
        longest = count;
    }
    
    cout<<"Length of the longest consecutive subsequence: "<<longest<<endl;
    return 0;
}*/



//Matrix Transpose

/*int main() {
    int rows, cols;
    cout<<"Enter number of rows and columns: ";
    cin>>rows>>cols;
    int matrix[rows][cols], transpose[cols][rows];
    
    cout<<"Enter matrix elements: \n";
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            cin>>matrix[i][j];
    
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            transpose[j][i] = matrix[i][j];
    
    cout<<"Transpose of the matrix: \n";
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++)
            cout<<transpose[i][j]<< " ";
        cout<<endl;
    }
    return 0;
}*/



//Matrix Multiplication

/*int main() {
    int r1, c1, r2, c2;
    cout<<"Enter rows and columns of first matrix: ";
    cin>>r1>>c1;
    cout<<"Enter rows and columns of second matrix: ";
    cin>>r2>>c2;
    
    if (c1 != r2) {
        cout<<"Matrix multiplication not possible!";
        return 0;
    }
    
    int a[r1][c1], b[r2][c2], result[r1][c2] = {};
    
    cout<<"Enter elements of first matrix: \n";
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c1; j++)
            cin>>a[i][j];
    
    cout<<"Enter elements of second matrix: \n";
    for (int i = 0; i < r2; i++)
        for (int j = 0; j < c2; j++)
            cin>>b[i][j];
    
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c2; j++)
            for (int k = 0; k < c1; k++)
                result[i][j] += a[i][k] * b[k][j];
    
    cout<<"Resultant matrix after multiplication: \n";
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++)
            cout<<result[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}*/


//Diagonal Sum of Matrix

/*int main() {
    int n, primarySum = 0, secondarySum = 0;
    cout<<"Enter size of square matrix: ";
    cin>>n;
    int matrix[n][n];
    
    cout<<"Enter matrix elements: \n";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin>>matrix[i][j];
    
    for (int i = 0; i < n; i++) {
        primarySum += matrix[i][i];
        secondarySum += matrix[i][n - i - 1];
    }
    
    cout<<"Primary Diagonal Sum: "<<primarySum << "\n";
    cout<<"Secondary Diagonal Sum: "<<secondarySum << "\n";
    return 0;
}*/



//2D matrix with the maximum sum of its elements

/*int main() {
    int n, maxSum = 0, maxRow = 0;
    cout<<"Enter size of square matrix: ";
    cin>>n;
    int matrix[n][n];
    
    cout<<"Enter matrix elements: \n";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> matrix[i][j];
    
    for (int i = 0; i < n; i++) {
        int rowSum = 0;
        for (int j = 0; j < n; j++)
            rowSum += matrix[i][j];
        if (rowSum > maxSum) {
            maxSum = rowSum;
            maxRow = i;
        }
    }
    
    cout<<"Row with maximum sum: "<<maxRow + 1<<" (Sum: " << maxSum << ")\n";
    return 0;
}*/



//Search in a Sorted Matrix

/*int main() {
    int rows, cols, target;
    cout<<"Enter number of rows and columns: ";
    cin>>rows>>cols;
    int matrix[rows][cols];
    
    cout<<"Enter matrix elements: \n";
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            cin>>matrix[i][j];
    
    cout<<"Enter target value to search: ";
    cin>>target;
    
    int i = 0, j = cols - 1;
    while (i < rows && j >= 0) {
        if (matrix[i][j] == target) {
            cout <<"Element found at position: ("<<i + 1<<", "<<j + 1<<")\n";
            return 0;
        } 
        else if (matrix[i][j] > target) {
            j--;
        } 
        else {
            i++;
        }
    }
    
    cout<<"Element not found in the matrix.\n";
    return 0;
}*/



//Boundary Elements of a Matrix 

/*int main() {
    int rows, cols;
    cout<<"Enter number of rows and columns: ";
    cin>>rows>>cols;
    int matrix[rows][cols];
    
    cout<<"Enter matrix elements: \n";
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            cin>>matrix[i][j];
    
    cout << "Boundary elements of the matrix: \n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (i == 0 || j == 0 || i == rows - 1 || j == cols - 1)
                cout<<matrix[i][j] << " ";
            else
                cout<<"  ";
        }
        cout<<endl;
    }
    return 0;
}*/



//Find Saddle Point 

int main() {
    int rows, cols;
    cout << "Enter number of rows and columns: ";
    cin >> rows >> cols;
    int matrix[rows][cols];
    
    cout << "Enter matrix elements: \n";
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            cin >> matrix[i][j];
    
    bool found = false;
    for (int i = 0; i < rows; i++) {
        int minRow = matrix[i][0], colIndex = 0;
        for (int j = 1; j < cols; j++) {
            if (matrix[i][j] < minRow) {
                minRow = matrix[i][j];
                colIndex = j;
            }
        }
        
        bool isSaddle = true;
        for (int k = 0; k < rows; k++) {
            if (matrix[k][colIndex] > minRow) {
                isSaddle = false;
                break;
            }
        }
        
        if (isSaddle) {
            cout << "Saddle Point: " << minRow << " at position (" << i + 1 << ", " << colIndex + 1 << ")\n";
            found = true;
        }
    }
    
    if (!found)
        cout << "No Saddle Point found.\n";
    
    return 0;
}

