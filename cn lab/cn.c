#include <stdio.h>
#include <stdlib.h>
#define RTT 4
#define TIMEOUT 4
#define TOT_FRAMES 7
enum
{
    NO,
    YES
} ACK;
int main()
{
    int wait_time;
    int i = 1;
    ACK = YES;
    for (; i <= TOT_FRAMES;)
    {
        if (ACK == YES && i != 1)
        {
            printf("\nSENDER: ACK for frame %d Received.\n", i - 1);
        }
        printf("\nSENDER: Frame %d sent, Waiting for ACK...", i);
        ACK = NO;
        wait_time = rand() % 4 + 1;
        if (wait_time == TIMEOUT)
        {
            printf("SENDER: ACK not received for frame %d => TIMEOUT Resending Frame...", i);
        }
        else
        {
            sleep(RTT);
            printf("\n RECEIVER: Frame %d received, ACK sent\n", i);
            ACK = YES;
            i++;
        }
    }
    return 0;
}