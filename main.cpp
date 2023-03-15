#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


//bai 2 wecode

struct diem{
    int x, y;
};

bool soSanh(diem a, diem b){
    if(a.x == b.x)
        return b.y < a.y;
    
    return a.x < b.x;
}

int main(){
    int n; cin >> n;

    vector<diem> DIEMs(n);

    for(int i = 0; i < n; i++)
        cin >> DIEMs[i].x >> DIEMs[i].y;
    
    sort(DIEMs.begin(), DIEMs.end(), soSanh);

    for(int i = 0; i < n; i++)
        cout << DIEMs[i].x << " " << DIEMs[i].y << "\n";
}



/*
int main(){
    int n, q;
    cin >> n >> q;
    vector<int> a;

    for(int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        a.push_back(temp);
    }

    for(int i = 0; i < q; i++){
        int temp; cin >> temp;
        
        binary_search(a.begin(), a.end(), temp) ? cout << "YES" : cout << "NO";
    }

}
*/
