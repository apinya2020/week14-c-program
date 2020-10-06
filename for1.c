int for1(){
    int i,sum=0,j;
    printf("Enter number: ");
    scanf("%d",&j);
    for(i=1;i<=j;i++){
        printf("%d",i);
        sum=sum+i;
    }
    printf("\nSum = %d",sum);
    return 0;
}
