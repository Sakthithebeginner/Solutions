#include <bits/stdc++.h>

using namespace std;

// Complete the countingValleys function below.
int countingValleys(int n, string s) {
    int c=0;
    int v=0;
    int t=0;
    int h;
    for(int i=0;i<n;i++){
        if(s[i]=='U'){
            c++; 
        }
        else if(s[i]=='D'){
            c--;
        }
        if(c<0){
            t=1;
            h=i;
        }
        if(c==0 && h<i && t==1){
            v++;
            t--;
        }
    }
    return v;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string s;
    getline(cin, s);

    int result = countingValleys(n, s);

    fout << result << "\n";

    fout.close();

    return 0;
}
