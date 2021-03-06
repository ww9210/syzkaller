// AUTOGENERATED FILE

#if defined(__x86_64__) || 0
#define GOARCH "amd64"
#define SYZ_REVISION "fd7de83a3ebf8e454b041bbfe7513ed4a139d44d"
#define SYZ_EXECUTOR_USES_FORK_SERVER true
#define SYZ_EXECUTOR_USES_SHMEM true
#define SYZ_PAGE_SIZE 4096
#define SYZ_NUM_PAGES 4096
#define SYZ_DATA_OFFSET 536870912
#define SYZ_SYSCALL_COUNT 254
const call_t syscalls[] = {
    {"accept", 30},
    {"accept$inet", 30},
    {"accept$inet6", 30},
    {"accept$unix", 30},
    {"accept4", 541},
    {"accept4$inet", 541},
    {"accept4$inet6", 541},
    {"accept4$unix", 541},
    {"bind", 104},
    {"bind$inet", 104},
    {"bind$inet6", 104},
    {"bind$unix", 104},
    {"chdir", 12},
    {"chmod", 15},
    {"chown", 16},
    {"chroot", 61},
    {"clock_getres", 234},
    {"clock_gettime", 232},
    {"clock_nanosleep", 244},
    {"clock_settime", 233},
    {"close", 6},
    {"connect", 98},
    {"connect$inet", 98},
    {"connect$inet6", 98},
    {"connect$unix", 98},
    {"dup", 41},
    {"dup2", 90},
    {"execve", 59},
    {"exit", 1},
    {"faccessat", 489},
    {"fchdir", 13},
    {"fchmod", 124},
    {"fchmodat", 490},
    {"fchown", 123},
    {"fchownat", 491},
    {"fcntl$dupfd", 92},
    {"fcntl$getflags", 92},
    {"fcntl$getown", 92},
    {"fcntl$lock", 92},
    {"fcntl$setflags", 92},
    {"fcntl$setown", 92},
    {"fcntl$setstatus", 92},
    {"fdatasync", 550},
    {"flock", 131},
    {"fstat", 551},
    {"fsync", 95},
    {"ftruncate", 480},
    {"futimesat", 494},
    {"getcwd", 326},
    {"getdents", 272},
    {"getegid", 43},
    {"geteuid", 25},
    {"getgid", 47},
    {"getgroups", 79},
    {"getitimer", 86},
    {"getpeername", 31},
    {"getpeername$inet", 31},
    {"getpeername$inet6", 31},
    {"getpeername$unix", 31},
    {"getpgid", 207},
    {"getpgrp", 81},
    {"getpid", 20},
    {"getresgid", 361},
    {"getresuid", 360},
    {"getrlimit", 194},
    {"getrusage", 117},
    {"getsockname", 32},
    {"getsockname$inet", 32},
    {"getsockname$inet6", 32},
    {"getsockname$unix", 32},
    {"getsockopt", 118},
    {"getsockopt$SO_PEERCRED", 118},
    {"getsockopt$inet6_buf", 118},
    {"getsockopt$inet6_int", 118},
    {"getsockopt$inet6_tcp_buf", 118},
    {"getsockopt$inet6_tcp_int", 118},
    {"getsockopt$inet_buf", 118},
    {"getsockopt$inet_int", 118},
    {"getsockopt$inet_mreq", 118},
    {"getsockopt$inet_mreqn", 118},
    {"getsockopt$inet_mreqsrc", 118},
    {"getsockopt$inet_opts", 118},
    {"getsockopt$inet_tcp_buf", 118},
    {"getsockopt$inet_tcp_int", 118},
    {"getsockopt$sock_cred", 118},
    {"getsockopt$sock_int", 118},
    {"getsockopt$sock_linger", 118},
    {"getsockopt$sock_timeval", 118},
    {"getuid", 24},
    {"lchown", 254},
    {"link", 9},
    {"linkat", 495},
    {"listen", 106},
    {"lseek", 478},
    {"lstat", 190},
    {"madvise", 75},
    {"mincore", 78},
    {"mkdir", 136},
    {"mkdirat", 496},
    {"mknod", 14},
    {"mknod$loop", 14},
    {"mknodat", 559},
    {"mlock", 203},
    {"mlockall", 324},
    {"mmap", 477},
    {"mprotect", 74},
    {"msgctl$IPC_INFO", 511},
    {"msgctl$IPC_RMID", 511},
    {"msgctl$IPC_SET", 511},
    {"msgctl$IPC_STAT", 511},
    {"msgget", 225},
    {"msgget$private", 225},
    {"msgrcv", 227},
    {"msgsnd", 226},
    {"msync", 65},
    {"munlock", 204},
    {"munlockall", 325},
    {"munmap", 73},
    {"nanosleep", 240},
    {"open", 5},
    {"open$dir", 5},
    {"openat", 499},
    {"pipe", 42},
    {"pipe2", 542},
    {"poll", 209},
    {"ppoll", 545},
    {"preadv", 289},
    {"pwritev", 290},
    {"read", 3},
    {"readlink", 58},
    {"readlinkat", 500},
    {"readv", 120},
    {"recvfrom", 29},
    {"recvfrom$inet", 29},
    {"recvfrom$inet6", 29},
    {"recvfrom$unix", 29},
    {"recvmsg", 27},
    {"rename", 128},
    {"renameat", 501},
    {"rmdir", 137},
    {"select", 93},
    {"semctl$GETALL", 510},
    {"semctl$GETNCNT", 510},
    {"semctl$GETPID", 510},
    {"semctl$GETVAL", 510},
    {"semctl$GETZCNT", 510},
    {"semctl$IPC_INFO", 510},
    {"semctl$IPC_RMID", 510},
    {"semctl$IPC_SET", 510},
    {"semctl$IPC_STAT", 510},
    {"semctl$SEM_INFO", 510},
    {"semctl$SEM_STAT", 510},
    {"semctl$SETALL", 510},
    {"semctl$SETVAL", 510},
    {"semget", 221},
    {"semget$private", 221},
    {"semop", 222},
    {"sendfile", 393},
    {"sendmsg", 28},
    {"sendmsg$unix", 28},
    {"sendto", 133},
    {"sendto$inet", 133},
    {"sendto$inet6", 133},
    {"sendto$unix", 133},
    {"setgid", 181},
    {"setgroups", 80},
    {"setitimer", 83},
    {"setpgid", 82},
    {"setregid", 127},
    {"setresgid", 312},
    {"setresuid", 311},
    {"setreuid", 126},
    {"setrlimit", 195},
    {"setsockopt", 105},
    {"setsockopt$inet6_IPV6_PKTINFO", 105},
    {"setsockopt$inet6_MCAST_JOIN_GROUP", 105},
    {"setsockopt$inet6_MCAST_LEAVE_GROUP", 105},
    {"setsockopt$inet6_MRT6_ADD_MFC", 105},
    {"setsockopt$inet6_MRT6_ADD_MIF", 105},
    {"setsockopt$inet6_MRT6_DEL_MFC", 105},
    {"setsockopt$inet6_buf", 105},
    {"setsockopt$inet6_group_source_req", 105},
    {"setsockopt$inet6_int", 105},
    {"setsockopt$inet6_tcp_TCP_CONGESTION", 105},
    {"setsockopt$inet6_tcp_buf", 105},
    {"setsockopt$inet6_tcp_int", 105},
    {"setsockopt$inet_MCAST_JOIN_GROUP", 105},
    {"setsockopt$inet_MCAST_LEAVE_GROUP", 105},
    {"setsockopt$inet_buf", 105},
    {"setsockopt$inet_group_source_req", 105},
    {"setsockopt$inet_int", 105},
    {"setsockopt$inet_mreq", 105},
    {"setsockopt$inet_mreqn", 105},
    {"setsockopt$inet_mreqsrc", 105},
    {"setsockopt$inet_msfilter", 105},
    {"setsockopt$inet_opts", 105},
    {"setsockopt$inet_tcp_TCP_CONGESTION", 105},
    {"setsockopt$inet_tcp_buf", 105},
    {"setsockopt$inet_tcp_int", 105},
    {"setsockopt$sock_cred", 105},
    {"setsockopt$sock_int", 105},
    {"setsockopt$sock_linger", 105},
    {"setsockopt$sock_timeval", 105},
    {"setuid", 23},
    {"shmat", 228},
    {"shmctl$IPC_INFO", 512},
    {"shmctl$IPC_RMID", 512},
    {"shmctl$IPC_SET", 512},
    {"shmctl$IPC_STAT", 512},
    {"shmctl$SHM_INFO", 512},
    {"shmctl$SHM_LOCK", 512},
    {"shmctl$SHM_STAT", 512},
    {"shmctl$SHM_UNLOCK", 512},
    {"shmdt", 230},
    {"shmget", 231},
    {"shmget$private", 231},
    {"shutdown", 134},
    {"sigaltstack", 53},
    {"socket", 97},
    {"socket$inet", 97},
    {"socket$inet6", 97},
    {"socket$inet6_icmp", 97},
    {"socket$inet6_icmp_raw", 97},
    {"socket$inet6_tcp", 97},
    {"socket$inet6_udp", 97},
    {"socket$inet_icmp", 97},
    {"socket$inet_icmp_raw", 97},
    {"socket$inet_tcp", 97},
    {"socket$inet_udp", 97},
    {"socket$unix", 97},
    {"socketpair", 135},
    {"socketpair$inet", 135},
    {"socketpair$inet6", 135},
    {"socketpair$inet6_icmp", 135},
    {"socketpair$inet6_icmp_raw", 135},
    {"socketpair$inet6_tcp", 135},
    {"socketpair$inet6_udp", 135},
    {"socketpair$inet_icmp", 135},
    {"socketpair$inet_icmp_raw", 135},
    {"socketpair$inet_tcp", 135},
    {"socketpair$inet_udp", 135},
    {"socketpair$unix", 135},
    {"stat", 188},
    {"symlink", 57},
    {"symlinkat", 502},
    {"sync", 36},
    {"truncate", 479},
    {"unlink", 10},
    {"unlinkat", 503},
    {"utimensat", 547},
    {"utimes", 138},
    {"wait4", 7},
    {"write", 4},
    {"writev", 121},

};
#endif
