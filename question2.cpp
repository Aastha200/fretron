#include <bits/stdc++.h>
using namespace std;

void distributeApples(vector<int>& weights, double ramShare, double shamShare, double rahimShare) {
    //soting done because ram's share is the most so we had 
    //2 options either to sort in ascending order and run the loop from back or to sort in descending order
    sort(weights.rbegin(), weights.rend());

    // as we have to return the vector of all the three persons so make 3 vectors
    vector<int> ramApples, shamApples, rahimApples;

    // Allocation of apples 
    double ramWeight = 0, shamWeight = 0, rahimWeight = 0;
    for (int weight : weights) {
        if (ramWeight+weight<=ramShare ) {
            ramApples.push_back(weight);
            ramWeight += weight;
        } else if (shamWeight+weight<=shamShare) {
            shamApples.push_back(weight);
            shamWeight+=weight;
        } else {
            rahimApples.push_back(weight);
            rahimWeight+=weight;
        }
    }

    // Print the result
    
    cout << "Ram :";
    for (size_t i = 0; i < ramApples.size(); ++i) {
        cout << ramApples[i];
        if (i < ramApples.size() - 1) cout << ", ";
    }
    cout << " (" << ramWeight << "g, " << (ramWeight / (ramWeight + shamWeight + rahimWeight)) * 100 << "%)" << endl;

    cout << "Sham : ";
    for (size_t i = 0; i < shamApples.size(); ++i) {
        cout << shamApples[i];
        if (i < shamApples.size() - 1) cout << ", ";
    }
    cout << " (" << shamWeight << "g, " << (shamWeight / (ramWeight + shamWeight + rahimWeight)) * 100 << "%)" << endl;

    cout << "Rahim : ";
    for (size_t i = 0; i < rahimApples.size(); ++i) {
        cout << rahimApples[i];
        if (i < rahimApples.size() - 1) cout << ", ";
    }
    cout << " (" << rahimWeight << "g, " << (rahimWeight / (ramWeight + shamWeight + rahimWeight)) * 100 << "%)" << endl;
}

int main() {
    //input for weights of apples
    vector<int> weights;
    int weight;

    cout << "Enter apple weight in gram (-1 to stop): ";
    while (cin >> weight && weight != -1) {
        weights.push_back(weight);
        cout << "Enter apple weight in gram (-1 to stop): ";
    }

    double totalWeight=accumulate(weights.begin(),weights.end(),0);//to calculate the whole sum of array

    double ramShare=0.5*totalWeight;//50%
    double shamShare=0.3*totalWeight;//30%
    double rahimShare=0.2*totalWeight;//20%

    distributeApples(weights,ramShare,shamShare,rahimShare);

    return 0;
}
