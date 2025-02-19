// And Operator && (ager dono condition thk tu yes)
// OR Operator || (ager aik condition bhi thk tu yes)
// Not Operator ! (Tu answer flip krdega)
# include<stdio.h>
int main(){
    printf("x is : %d\n", 2<=5 && 2<=9);
    printf("x is : %d\n", 2<=0 || 2<=6); // yaha 2<=0 false hai lkn 2<=6 true hai 
    printf("x is : %d\n", !(2<=5 && 2<=9)); // bracket ke ander ki statement ture hai lkn ans false aaege QK ! operator hai
    return 0;
}