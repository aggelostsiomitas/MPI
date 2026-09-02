#include <mpi.h>


int main(argc,argv)
int argc;
char*argv[];
{
    int myrank;
    int numprocs;
    MPI_Init(&argc,&argv);
    MPI_Comm_size(MPI_COMM_WORLD,&numprocs);
     MPI_Comm_rank(MPI_COMM_WORLD,&myrank);
     printf("Process %  with rank %d",&myrank,&numprocs);
     MPI_Finalize();
}
