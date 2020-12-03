#include <stdio.h>
 
int main(void)
{
    int nums[1000] = {0};
    int i = 0;
    FILE * fp;
 
    if (fp = fopen("d1input.txt", "r")) {
        while (fscanf(fp, "%d", &nums[i]) != EOF) {
            ++i;
        }
        fclose(fp);
    }
 
    for (--i; i >= 0; --i)
        printf("num[%d] = %d\n", i, nums[i]);
 
    return 0;
}