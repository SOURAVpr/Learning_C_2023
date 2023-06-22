#include <stdio.h>
struct Time {
    int h;
    int m;
    int s;
};
struct Time calculateTimeDiff(struct Time startTime, struct Time endTime) {
    struct Time diff;
    int t1InSeconds, t2InSeconds, diffInSeconds;
    t1InSeconds = startTime.h * 3600 + startTime.m * 60 + startTime.s;
    t2InSeconds = endTime.h * 3600 + endTime.m * 60 + endTime.s;
    diffInSeconds = t2InSeconds - t1InSeconds;
    diff.h = diffInSeconds / 3600;
    diffInSeconds %= 3600;
    diff.m = diffInSeconds / 60;
    diff.s = diffInSeconds % 60;
    return diff;
}
int main() {
    struct Time startTime, endTime, difference;
    printf("Enter the start time:\n");
    printf("Hours: ");
    scanf("%d", &(startTime.h));
    printf("Minutes: ");
    scanf("%d", &(startTime.m));
    printf("Seconds: ");
    scanf("%d", &(startTime.s));
    printf("\nEnter the end time:\n");
    printf("Hours: ");
    scanf("%d", &(endTime.h));
    printf("Minutes: ");
    scanf("%d", &(endTime.m));
    printf("Seconds: ");
    scanf("%d", &(endTime.s));
    difference = calculateTimeDiff(startTime, endTime);
    printf("\nDifference between the two time periods:\n");
    printf("Hours: %d\n", difference.h);
    printf("Minutes: %d\n", difference.m);
    printf("Seconds: %d\n", difference.s);
    return 0;
}