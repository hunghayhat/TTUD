#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Định nghĩa một cặp (pair) để lưu trữ khoảng thời gian
typedef pair<int, int> Interval;

int main() {
    int n;
    cin >> n;
    vector<Interval> intervals;

    // Đọc vào danh sách các khoảng thời gian
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        intervals.push_back(make_pair(a, b));
    }

    // Sắp xếp danh sách các khoảng thời gian theo điểm kết thúc (b) tăng dần
    sort(intervals.begin(), intervals.end(), [](const Interval &x, const Interval &y) {
        return x.second < y.second;
    });

    int count = 0;  // Biến đếm số lượng khoảng thời gian đã chọn
    int end = -1;   // Biến lưu trữ điểm kết thúc của khoảng thời gian cuối cùng đã chọn

    for (int i = 0; i < n; i++) {
        if (intervals[i].first >= end) {
            count++;
            end = intervals[i].second;
        }
    }

    // In ra số lượng phần tử trong tập con lớn nhất
    cout << count << endl;

    return 0;
}
