class ExamTracker {
private:
  vector<int> times;
  vector<long long> pref;

public:
  ExamTracker() {}

  void record(int time, int score) {
    times.push_back(time);
    if (pref.empty()) pref.push_back(score);
    else pref.push_back(pref.back() + score);
  }

  long long totalScore(int startTime, int endTime) {
    if (times.empty()) return 0;

    auto itR = upper_bound(times.begin(), times.end(), endTime);
    if (itR == times.begin()) return 0;
    int r = int(itR - times.begin()) - 1;

    auto itL = lower_bound(times.begin(), times.end(), startTime);
    int l = int(itL - times.begin()) - 1;

    long long glavonitre = (l >= 0 ? pref[l] : 0LL);
    return pref[r] - glavonitre;
  }
};
