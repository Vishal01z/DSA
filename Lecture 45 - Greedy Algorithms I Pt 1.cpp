#include <iostream>
#include <vector>
#include <algorithm>

struct Activity {
    int start, finish;
};

bool activityCompare(Activity s1, Activity s2) {
    return (s1.finish < s2.finish);
}

void printMaxActivities(std::vector<Activity>& activities) {
    std::sort(activities.begin(), activities.end(), activityCompare);

    int n = activities.size();
    std::cout << "Selected activities: ";

    int i = 0;
    std::cout << "(" << activities[i].start << ", " << activities[i].finish << "), ";

    for (int j = 1; j < n; j++) {
        if (activities[j].start >= activities[i].finish) {
            std::cout << "(" << activities[j].start << ", " << activities[j].finish << "), ";
            i = j;
        }
    }
}

int main() {
    std::vector<Activity> activities = {{5, 9}, {1, 2}, {3, 4}, {0, 6}, {5, 7}, {8, 9}};
    printMaxActivities(activities);
    return 0;
}
