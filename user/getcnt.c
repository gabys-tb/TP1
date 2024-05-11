#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int main(int argc, char *argv[]) {
    if(argc != 2) {
        fprintf(2, "Usage: getcnt syscall_number\n");
        exit(1);
    }
    int syscall_number = atoi(argv[1]);
    int count = getcnt(syscall_number);
    if (count >= 0) {
        printf("Syscall %d has been called %d times\n", syscall_number, count);
    } else {
        printf("Invalid syscall number %d\n", syscall_number);
    }
    exit(0);
}
