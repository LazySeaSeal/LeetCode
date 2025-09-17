class FoodRatings
{
public:
    unordered_map<string, int> rating;
    unordered_map<string, set<pair<int, string>>> high;
    unordered_map<string, string> kitchen;

    FoodRatings(vector<string> &a, vector<string> &b, vector<int> &c)
    {
        for (int i = 0; i < a.size(); i++)
        {
            rating[a[i]] = c[i];
            kitchen[a[i]] = b[i];
            high[b[i]].insert(make_pair(c[i], a[i]));
        }
    }

    void changeRating(string food, int newRating)
    {
        string cuisine = kitchen[food];
        auto it = high[cuisine].find(make_pair(rating[food], food)); // Find the current pair
        if (it != high[cuisine].end())
        {
            high[cuisine].erase(it); // Erase the old pair
        }
        rating[food] = newRating;                         // Update the rating
        high[cuisine].insert(make_pair(newRating, food)); // Insert the new pair
    }

    string highestRated(string cuisine)
    {
        pair<int, string> p = *high[cuisine].rbegin();

        auto it = high[cuisine].lower_bound({p.first, ""});

        return it->second;
    }
};

/**
 * Your FoodRatings object will be instantiated and called as such:
 * FoodRatings* obj = new FoodRatings(foods, cuisines, ratings);
 * obj->changeRating(food,newRating);
 * string param_2 = obj->highestRated(cuisine);
 */