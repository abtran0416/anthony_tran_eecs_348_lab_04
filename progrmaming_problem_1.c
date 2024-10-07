#include <stdio.h>
void possible_outcomes(int score){
    int count = 0;
    printf("Possible combinations of scoring plays if a team's score is 25:", score);
    for (int touchdowns = 0; touchdowns * 6 <= score; touchdowns++) {
        for (int field_goals = 0; field_goals * 3 <=score; field_goals ++) {
            for (int safeties = 0; safeties * 2 <= score; safeties ++){
                int final_score = touchdowns * 6 + field_goals * 3 + safeties * 2;

                if (final_score == score){
                    printf("%d TD, %d FG, %d, Safety\n", touchdowns, field_goals, safeties);
                    count ++;
                }
            }
        }
    }
    if (count == 0){
        printf("No possible combinations for score %d.\n", score);
        }
}
int main(){
    int score;
    printf ("Enter the score: ");
    scanf ("%d", &score);
    
    if (score<= 0){
        printf("Please enter a positive score. \n");
    }
    else {
        possible_outcomes(score); 
    }
    return 0;
}
