#include<iostream>
using namespace std;

// THIS FUNCTION HELPS TO FIND THE SUM AND RETURN THAT
int sumFinder(int arr[],int size){
    int sum = 0;
    for(int i=0;i<size;i++){
        sum = sum + arr[i];
    }
    return sum;
}

// THIS FUNCTION RETURN BOOL IF TRUE OR FALSE
bool isPossibleSolution(int arr[],int size,int n,int m,int mid){
    // INITIALLY STUDENT COUNT STARTED FROM 1 AND PAGESUM STARTED FROM 0
    int studentCount = 1;
    int pageSum = 0;

    // LOOP IS ADDED UPTO N MEANS THE NUMBER OF BOOKS AND A CONDITION IS CHECKED WHETHER 
    // THE PAGESUM AND INDEX OF THE GIVEN ARRAY IS LESS THAN EQUAL TO MID OR NOT
    // IF PAGESUM IS REALLY LESS THAN EQUAL TO MID THEN PAGESUM VALUE IS INCREMENTED WITH THE ARRAY INDEX
    // ELSE THE STUDENT IS INCREMENTED 
    // THEN AGAIN A CONDITION IS CHECKED WHEATHER TOTAL NUMBER OF STUDENTCOUNT IS GREATER THAN TOTAL ACTUAL STUDNET
    //  THAT IS "M" OR RECENT INDEX VALUE OF THE ARRAY IS GREATER THAN THE MID VALUE PROVIDED THEN RETURN FALSE
    // IF STUDENTCOUNT IS LESS THAN "M" MEANS THE ACTUAL STUDENTS THEN PAGESUM WILL BE THE RECENT INDEX VALUE OF THE ARRAY
    // IF EVERYTHING GOES WELL THEN ONLY RETURN TRUE
    for(int i =0; i<n;i++){
        if(pageSum + arr[i] <= mid){
            pageSum = pageSum + arr[i];
        }else{
            studentCount++;
            if(studentCount > m || arr[i] > mid){
                return false;
            }
        pageSum = arr[i];
        }
    }
    return true;
}

int BookAllocation(int arr[],int size,int n,int m){
    // AS WE HAVE PAGE OF THE BOOKS IN THE ARRAY SO OUR SEARCH RANGE FOR THE MINIMUM OF THE MAXIMUM NUMBER OF ALLOCATIONS 
    // WILL REMAIN BETWEEN 0 TO LESS THAN TOTAL NUMBER OF THE SUM SO THAT ALL ARE INITIALISED IN THE BELOW STEPS 
    int sum = sumFinder(arr,size);
    int start = 0,ans = -1; 
    int end = sum;
    int mid = start + ((end - start)/2);
    
    // UNTIL UNLESS START LESS THAN EQUAL TO END LOOP RUNS BUT WHEN START IS GREATER THAN END THEN LOOP STOPS
    while(start <= end){
        // CHECK WHEATHER THE MID WHICH WE HAVE SATISFIES OUR CONDITION OR NOT IF YES THEN WE ARE STORING THE VALUE
        // INSIDE THE VARIABLE ANS AND THEN WE TRY TO FIND MINIMUM THAN THE MID WHICH ALSO SATISFIES OUR CONDITION
        // SO END IS CHANGED TO MID - 1 AS MID AND ALL THE ABOVE VALUES WILL ALSO SATISFY THE CONDITION
        if(isPossibleSolution(arr,size,n,m,mid)){
            ans = mid;
            end = mid - 1;
        }else{
        // IF THE ABOVE CONDITION IS NOT BEING SATISFIED THEN THE START VALUE IS CHANGED TO MID + 1
        // AS MID IS NOT A SATISFIED CONDITION THEN THE BELOW ELEMENTS WILL ALSO NOT BE SATISFIED SO ITS BEING MODIFIED 
            start = mid + 1;
        }
        mid = start + ((end - start)/2);
    }

    // ATLAST THE SAVED ANSWER IS RETURNED
    return ans;
}

int main(){
    int arr[4] = {10,20,30,40};
    int numberOfBooks = 4;
    int numberOfStudents = 2;
    int value  = BookAllocation(arr,4,numberOfBooks,numberOfStudents);
    cout << "The Minimum of the maximum number of the allocations is : " << value << endl;
    return 0;
}