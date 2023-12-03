#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> cowboy(n);
    vector<int> winning(n);
    map<int, int> remaining_cards;

    for (int i = 0; i < n; i++) {
        cin >> cowboy[i];
        remaining_cards[cowboy[i]]++;
    }

    for (int i = 0; i < n; i++) {
        cin >> winning[i];
    }

    for (int i = 0; i < n; i++) {
        if (cowboy[i] == winning[i]) {
            remaining_cards[cowboy[i]]--;
            if (remaining_cards[cowboy[i]] == 0) {
                remaining_cards.erase(cowboy[i]);
            }
        } else {
            auto it = remaining_cards.lower_bound(winning[i]);
            if (it == remaining_cards.begin()) {
                cout << "NO" << endl;
                return 0;
            }
            it--;
            int card = it->first;
            remaining_cards[card]--;
            if (remaining_cards[card] == 0) {
                remaining_cards.erase(card);
            }
        }
    }

    cout << "YES" << endl;

    return 0;
}
