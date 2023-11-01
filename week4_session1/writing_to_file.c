# include <stdio.h>

int main(){
    char *filename = 'Squares.dat';
    FILE *file = fopen(filename, "w"); // or "a", "w+", "a+"
    if (file == NULL)
    {
        printf("Error opening file\n");
        return 1;
    }
    
    int i,n;

    printf(“enter a number up to which you want to make square ”);

    scanf(“%d”,&n);

    for(i=1;i<=n;i++)

    {

    printf(“ square of %d is %d\n ”,i,i*i);

    }
    fclose(file);
    return 0;
}

}