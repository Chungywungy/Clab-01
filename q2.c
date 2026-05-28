#include <stdio.h>

int main(void) {
    float video_length;
    printf("Enter the video length in minutes: ");
    scanf("%f", &video_length);

    float seconds = video_length * 60;

    int frames_per_second;
    printf("Enter the frame rate: ");
    scanf("%i", &frames_per_second);

    float frame_size;
    printf("Enter the size of each frame in MB: ");
    scanf("%f", &frame_size);

    float total_frames = (float)frames_per_second * seconds;
    float total_size = total_frames * frame_size;
    float total_size_gb = total_size / 1024;

    printf("Total Frames: %.0f\n", total_frames);
    printf("Total Size (MB): %.0f\n", total_size);
    printf("Total Size (GB): %.2f", total_size_gb);

    return 0;
}
