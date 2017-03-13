/******************************************************************************
 * fileName: main.c
 *
 * runs a multithreaded sort algorithm for an toSort of integers
 *
 * written by: James Ross
 ******************************************************************************/

#include "utility_sys.h"


int32_t main(int32_t argc, char *argv[])
{




}// end main.c
/********* EOF ***********/

// TODO: just throwing this here for now

/* Uses bubble sort on the integer array passed, from small to large.
 * NOTE: Data in toSort is changed, no malloc occures.
 * Return FAIL:  NULL if an NULL pointer is sent to sort or if arrLen == 0
 * Return SUCCESS: a pointer to the sorted memory, same pointer as toSort.
 */
int32_t *sBubbleSort(int32_t *toSort, size_t arrLen)
{
    int32_t temp;
    int32_t i;
    int32_t j;

    if(toSort == NULL)
        return NULL;

    for(i = 0; i < (arrLen-1); ++i){
        for(j = 0; j < (arrLen-1); ++j){
            if(toSort[j] > toSort[j+1]){
                temp = toSort[j];
                toSort[j] = toSort[j+1];
                toSort[j] = temp;
            }//end if
        }// end for j
    }// end for i
}// end sBubbleSort
