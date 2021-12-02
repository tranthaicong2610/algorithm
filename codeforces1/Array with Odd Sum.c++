#include<iostream>
#include<vector>
using namespace std;
int main(){
	int test;cin>>test;
	int Odd,Even,x,n,Sum;
	while (test--)
    {
        cin >> n;
        Sum = Odd = Even = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            Sum = (Sum + x) % 2;
            x % 2 == 1 ? Odd++ : Even++;
        }
        if (Sum % 2 == 1)
        {
            cout << "YES\n";
            continue;
        }
        if (Odd != n && Even != n)
        {
            cout << "YES\n";
            continue;
        }
        cout << "NO\n";
    }
	

	return 0;
}