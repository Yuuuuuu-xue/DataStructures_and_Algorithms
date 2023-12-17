#include <bits/stdc++.h>

using namespace std;

class FoodRatings {
public:
  // Set is sorted from min to max, thus rating needs to * by -1
  unordered_map<string, set<pair<int, string>>> cuisineToRatingAndFood;
  unordered_map<string, pair<int, string>> foodToRatingAndCuisine;

  FoodRatings(vector<string>& foods, vector<string>& cuisines, vector<int>& ratings) {
    for (int i = 0; i < foods.size(); i++) {
      pair<int, string> ratingAndFood = make_pair(-ratings[i], foods[i]);
      pair<int, string> ratingAndCuisine = make_pair(-ratings[i], cuisines[i]);
      if (cuisineToRatingAndFood.find(cuisines[i]) == cuisineToRatingAndFood.end()) {
        cuisineToRatingAndFood[cuisines[i]] = set<pair<int, string>>();
      }
      cuisineToRatingAndFood[cuisines[i]].insert(ratingAndFood);

      foodToRatingAndCuisine[foods[i]] = ratingAndCuisine;
    }
  }
  
  void changeRating(string food, int newRating) {
    pair<int, string> ratingAndCuisine = foodToRatingAndCuisine[food];
    cuisineToRatingAndFood[ratingAndCuisine.second].erase(make_pair(ratingAndCuisine.first, food));
    cuisineToRatingAndFood[ratingAndCuisine.second].insert(make_pair(-newRating, food));
    foodToRatingAndCuisine[food] = make_pair(-newRating, ratingAndCuisine.second);
  }
  
  string highestRated(string cuisine) {
    return (*cuisineToRatingAndFood[cuisine].begin()).second;
  }
};

/**
 * Your FoodRatings object will be instantiated and called as such:
 * FoodRatings* obj = new FoodRatings(foods, cuisines, ratings);
 * obj->changeRating(food,newRating);
 * string param_2 = obj->highestRated(cuisine);
 */