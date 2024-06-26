#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 *The logic used here is pretty simple
 *We just have to take summation of n-1 numbers.
 *For eg:= There are n=7 people,then
 *	Handshakes will be Σ(n-1) i.e Σ(6)
 *                        (1+2+3+4+5+6)=21(ans).
 */
///////////////////////SOLUTION///////////////////////////////
int handshake(int n) {
    int ans=0;
    for(int i=1;i<n;i++){//Initialize i=1 to avoid self handshakes
        ans+=i;
    }
    return ans;

}
///////////////////////////////////////////////////////////
int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string t_temp;
    getline(cin, t_temp);

    int t = stoi(ltrim(rtrim(t_temp)));

    for (int t_itr = 0; t_itr < t; t_itr++) {
        string n_temp;
        getline(cin, n_temp);

        int n = stoi(ltrim(rtrim(n_temp)));

        int result = handshake(n);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
