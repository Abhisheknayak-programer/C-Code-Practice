#include<iostream>
#include<vector>
using namespace std;

bool is_prime(int num){
    for(int i=2;i<num;i++){
        if(num%i == 0){
            return false;
        }
    }
    return true;
}

// Not at all optimal approach but works well
int countPrime(int num){
    int count = 0;
    if(num == 0 || num == 1) return 0;

    for(int i=2;i<num;i++){
        if(is_prime(i)){
            count++;
        }
    }
    return count;
}

// Optimal Approach using Sieve of Eratosthences
int total_primes(int num){
    int count = 0;
    vector<bool> prime(num+1,true);
    prime[0] = prime[1] = false;

    for(int i=2;i<num;i++){
        if(prime[i]){
            count++;
            for(int j=2*i;j<num;j=j+i){
                prime[j] = false;
            }
        }
    }

    return count;
}

int main(){
    int num = 40;
    cout << countPrime(num) << endl;
    cout << total_primes(num);

    return 0;
}