// # Supreme-Batch-Debug-Exercise-C++ (Week-1)

// **NOTE: The code snippet given may be incomplete or have compile time, runtime or logical errors.**

// **How to attempt Debugging Exercise?**

// 1. Copy the code to your code editor (e.g. VS Code).
// 2. Add relevant header files like “#include <iostream>” etc.
// 3. Run the code.
// 4. You will notice the expected output is not printing at the console.
// 5. Apply your smart coder mind to Debug the code.
// 6. **Warning**: Only see the solution after you have tried enough.
// Debug the code. Take input a character, print 1, if its a capital alphabet, print 0, if its a lowercase alphabet, else print -1.

#include<iostream>
using namespace std;

int main() {
	char c;
    cin>>c;
    if('a'<=c && c<= 'z'){
        cout<<0;
    }
	else if('A'<=c && c<= 'Z'){
        cout<<1;
    }
    else{
        cout<<-1;
    }
}

// Solution 
// #include<iostream>
// using namespace std;

// int main() {
// 	char c;
//     cin>>c;
//     if('a'<=c && c<= 'z'){
//         cout<<0;
//     }
// 	else if('A'<=c && c<= 'Z'){
//         cout<<1;
//     }
//     else{
//         cout<<-1;
//     }
// }