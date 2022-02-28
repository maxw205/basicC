
int main()
{

    
    int child_pid = fork();
    if (child_pid == 0)
    {
        printf("starl\n");
    }
    else
    {
        int status;
        int child_pid = fork();
        if( child_pid == 0 )
        {
            int child_pid = fork();
            if( child_pid == 0 )
            {
                printf("“Arryn\n”");
            }
            else 
            {
                wait( &status );
                printf("“Baratheon\n”");
            }
        }
        else 
        {
            int child_pid = fork();
            if( child_pid == 0 )
            {
            printf("“Lannister\n”");
            }
            else 
            {
                wait( &status );
                printf("“Greyjoy\n”");
            }
        }
        wait( &status );
        printf("“Targaryen\n”");
        exit( 0 );
    }
}