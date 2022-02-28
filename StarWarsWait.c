

int main()
{
    pid_t pid_1;
    pid_t pid_2;
    int status;
    pid_1 = fork();
    if (!pid_1)
    {
    wait(&status);
    printf("Tatooine\n" );
    if (!(pid_2 = fork()))
    {
    wait(&status);
    printf("Kashyyk\n" );
    }
    else
    {
    wait(&status);
    printf("Hoth\n" );
    }
    exit( 0 );
    }
    wait(&status);
    printf("Dag");
}