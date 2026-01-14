// The Algorithm Rules
// This logic boils down to 3 simple rules inside a while loop:

// If Sum == Target: You found it! Return the indices.

// If Sum > Target: You are "overshooting." Move the Right pointer down (right--) to decrease the sum.

// If Sum < Target: You are "undershooting." Move the Left pointer up (left++) to increase the sum.

// Stopping Condition: The loop runs as long as left < right. (If they cross each other, it means you checked everything and found no pair).

#include<iostream>
#include<array>
#include<vector>
#include<string>
using namespace std;

bool isPalindromeSimple(string s) {
    int left = 0;
    int right = s.size() - 1;

    while (left < right) {

        while(left<right && !isalnum(s[left])){
            left++;
        }
        while(left<right && !isalnum(s[right])){
            right--;
        }

        // 1. Compare the character at 'left' vs 'right'
        // If they are DIFFERENT, return false immediately.
        if(tolower(s[left] )!= tolower(s[right])){
            return false;
        }
        else{
            left++;
            right--;
        }
        // 2. If they match, move both pointers inward
        // left goes forward (++)
        // right goes backward (--)
    }

    return true; // Survived the loop? It's a match!
}

int main(){

    string s = "adarshsrada";

    if(isPalindromeSimple(s)){
        cout<<"true"<<endl;
    }else{
        cout<<"false"<<endl;
    }

    return 0;
}
