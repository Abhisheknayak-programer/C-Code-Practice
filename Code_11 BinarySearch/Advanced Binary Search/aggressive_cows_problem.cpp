#include<iostream>
using namespace std;

//THIS FUNCTION HELPS ANY ARRAY TO SORT IN ASCENDING ORDER 
void sorting(int arr[],int size){
    int temp;
    for(int i = 0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i] > arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

// IT HELPS TO PRINT THE ARRAY [NOT NEEDED IN THE QUESTION ONLY IMPLEMENTED TO FIND THE BUG]
void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout << arr[i] << ends;
    }
    cout << endl;
}

// THIS FUNCTION RETURNS THE MAXIMUM VALUE PRESENT INSIDE THE ARRAY
int MaxFinder(int arr[],int size){
    int maximum = -1;
     for(int i =0;i<size;i++){
        maximum = max(maximum,arr[i]);
    }
    return maximum;
}

// THIS FUNCTION RETURN A BOOL VALUE DEPENDING ON CERTAIN CONDITIONS : 
// HERE THE COWCOUNT IS BEING INITIALISED FROM 1 AND THE LAST POSITION IS TAKEN AS ARR[0] BECAUSE WE NEED TO CHECK FROM THE FIRST STALL FOR THE COWS
bool isPossibeSolution(int arr[],int size,int numberOfCows,int mid){
    int cowsCount = 1;
    int lastPosition = arr[0];

    // INISDE THE LOOP THE FIRST CONDITION IS CHECKED THAT ARR[I] - LASTPOSITION >= MID VALUE OR NOT IF YES THEN 
    // COWCOUNT IS INCREMENTED AND INSIDE THE IF CONDITION ANATHER CONDITION IS CHECHED IF THE COWCOUNT IS EQUAL
    // TO THE TOTAL NUMBER OF COWS THEN IT RETURNS TRUE IF NOT THEN GOES TO NEXT LINE AND MAKE THE LAST POSITION ARR[I]
    for(int i=0;i<size;i++){
        if(arr[i]-lastPosition >= mid){
            cowsCount++;
            if(cowsCount == numberOfCows){
                return true;
            }
            lastPosition = arr[i];
        }
    }

    // IF ANY OF THE ABOVE CONDITION IS NOT SATISFIED THEN RETURN FALSE
    return false;
}

int aggressiveCows(int arr[],int size,int numberOfCows){
    sorting(arr,size);
    int start = 0;
    int maximum = MaxFinder(arr,size);
    int end = maximum,ans = -1;
    int mid = start + ((end - start)/2);

    while(start <= end){
        // IF THE CONDITION SATISFIES THEN START IS CHANGED TO MID+1 BECAUSE IF MID IS SATISFIED THEN ALL THE BEFORE
        // NUMBERS OF THE MID WILL ALSO BE SATISIFIED ELSE IF THE CONDITION IS NOT SATISIFIED THEN END IS CHANGED TO MID -1
        // BECAUSE IF MID IS NOT SATISFIED THEN THE ABOVE ALL THE ELEMENTS IN THE ARRAY WILL ALSO NOT SATISIFIED
        if(isPossibeSolution(arr,size,numberOfCows,mid)){
            ans = mid;
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid = start + ((end - start)/2);
    }

    return ans;
}

int main(){
    int arr[5] = {4,2,1,3,6};
    int numOfCows = 2;
    int MaximumDistance = aggressiveCows(arr,5,numOfCows);
    cout << "The Maximum Distance between two aggressive cows is : " << MaximumDistance << endl;

    return 0;
}