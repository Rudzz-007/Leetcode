// // Solution 1(Optimize):

class Solution {
public:
    int reverse(int x) {
        long long z = 0;

        while (x != 0) {
            int b = x % 10;
            z = z * 10 + b;
            x /= 10;

            if (z > INT_MAX || z < INT_MIN)
                return 0;
        }

        return (int)z;
    }
};


// // Solution 2:
// class Solution {
// public:
//     int reverse(int x) {
//         long long z = 0;
//         bool t = false;

//         if (x >= 0) t = true;
//         else {
//             if (x == INT_MIN) return 0; // fix overflow
//             x = x * (-1);
//         }

//         while (x != 0) {
//             int b = x % 10;
//             z = z * 10 + b;

//             if (z > INT_MAX) return 0; // overflow check

//             x /= 10;
//         }

//         if (t == true) return (int)z;
//         else return (int)(-z);
//     }
// };
