
# priority_queue<int,vector<int>,greater<int>> pq;//Synatx of Max heap

//Below mentioned code shows that we can modify the sorting of priority queue using specific comparator;

// Min heap with custom comparator using a lambda function
        auto comp = [](pair<ll, ll> el1, pair<ll, ll> el2) {
            if (el1.first < el2.first) return true;
            if (el1.first == el2.first) return el1.second > el2.second;
            return false;
        };
        priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, decltype(comp)> pq(comp);