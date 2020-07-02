#include <bits/stdc++.h>

using namespace std;

// Complete the repeatedString function below.
long repeatedString(string s, long n) {
    int len=s.length();
    long running_count[len]={0};
    if(s[0]=='a')
        running_count[0]=1;
    for(int i=1;i<len;++i){
        running_count[i]=running_count[i-1];
        if(s[i]=='a')
        running_count[i]+=1;
    }
    long k=n/len;
    long remaining_count=(n%len==0)?0:running_count[n%len-1];
    long total_count=k*running_count[len-1]+remaining_count;
    return total_count;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    long n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    long result = repeatedString(s, n);

    fout << result << "\n";

    fout.close();

    return 0;
}
