#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'primeCount' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts LONG_INTEGER n as parameter.
 */
//////////////////////SOLUTION///////////////////////////////////////////////////////////////////
int primeCount(long n) {
    int maxNum = 0;
    if (n == 1) {
        return maxNum;
    }
    vector<unsigned long> primes = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53};
    unsigned long primeProd = 2;
    int i = 1;
    while (primeProd <= static_cast<unsigned long>(n)) {
        primeProd *= primes[i];
        i++;
        maxNum++;
    }
    return maxNum;
}
////////////////////////////////////////////////////////////////////////////////////////////////
int main() {
    ofstream fout(getenv("OUTPUT_PATH"));

    // Read the number of queries
    string q_temp;
    getline(cin, q_temp);
    int q = stoi(ltrim(rtrim(q_temp)));

    // Process each query
    for (int q_itr = 0; q_itr < q; q_itr++) {
        // Read the value of n for the current query
        string n_temp;
        getline(cin, n_temp);
        long n = stol(ltrim(rtrim(n_temp)));

        // Calculate the number of primes up to n and write the result to the output file
        int result = primeCount(n);
        fout << result << "\n";
    }

    fout.close();

    return 0;
}

// Helper function to trim leading whitespace from a string
string ltrim(const string &str) {
    string s(str);
    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );
    return s;
}

// Helper function to trim trailing whitespace from a string
string rtrim(const string &str) {
    string s(str);
    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );
    return s;
}
