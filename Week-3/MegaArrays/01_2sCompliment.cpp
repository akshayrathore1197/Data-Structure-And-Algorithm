
// ! badme karunga

// #include <bits/stdc++.h>
// using namespace std;
// vector<int> findComplement(vector<int> binary)
// {

//     int n = binary.size();
//     vector<int> twoComp(n + 1, 0);
//     for (int i = n - 1; i >= 0; i--)
//     {

//         twoComp[i] = binary[i] == 0 ? 1 : 0;
//     }
//     int carry = 1;
//     for (int i = n - 1; i >= 0; i--)
//     {

//         int sum = twoComp[i] + carry;
//         twoComp[i] = sum % 2;
//         carry = sum / 2;
//     }
//     if (carry)
//     {

//         twoComp[0] = carry;
//     }
//     return twoComp;
// }

// int main()
// {


//     vector<int> binary = {0, 1, 1, 0};
//     vector<int> twoComp = findComplement(binary);
//     for (int i = 0; i < twoComp.size(); i++)
//     {
//         cout << twoComp[i];
//     }

//     return 0;
// }