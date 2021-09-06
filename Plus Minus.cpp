#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'plusMinus' function below.
 *
 * The function accepts INTEGER_ARRAY arr as parameter.
 */


void plusMinus(vector<int> arr) {
    int s=arr.size();
    float pst=0,ngt=0,zro=0;
    float a,b,c;
    //vector<double>>  op;
    vector<double> op;
    for(int i=0;i<s;i++){
        if(arr[i]>0){
            pst+=1.0;
        }
        if(((arr[i]))<0){
            ngt+=1.0;
        }
        if(((arr[i]))==0){
            zro+=1.0;
        }
    }
    a=pst/s;
    b=ngt/s;
    c=zro/s;
    /*for(int i=1;i<4;i++){
        for(int j=1;j<2;j++){
            if(i==1){
                op.push_back(a\n);
            }
            if(i==2){
                op.push_back(b\n);
            }
            if(i==3){
                op.push_back(c);
            }
        }
    }*/
    printf("%.5f\n",(a));
    printf("%.5f\n",(b));
    printf("%.5f\n",(c));
    
}

int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split(rtrim(arr_temp_temp));

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        int arr_item = stoi(arr_temp[i]);

        arr[i] = arr_item;
    }

    plusMinus(arr);

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

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
