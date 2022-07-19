#ifndef __LINUX_SYSCALL_H__
#define __LINUX_SYSCALL_H__

#include <linux/unistd.h>

#define LINUX_SYSCALL0(nr) linux_syscall(0, 0, 0, 0, 0, 0, nr)
#define LINUX_SYSCALL1(nr, a1) linux_syscall((long)(a1), 0, 0, 0, 0, 0, nr)
#define LINUX_SYSCALL2(nr, a1, a2) linux_syscall((long)(a1), (long)(a2), 0, 0, 0, 0, nr)
#define LINUX_SYSCALL3(nr, a1, a2, a3) linux_syscall((long)(a1), (long)(a2), (long)(a3), 0, 0, 0, nr)
#define LINUX_SYSCALL4(nr, a1, a2, a3, a4) linux_syscall((long)(a1), (long)(a2), (long)(a3), (long)(a4), 0, 0, nr)
#define LINUX_SYSCALL5(nr, a1, a2, a3, a4, a5) linux_syscall((long)(a1), (long)(a2), (long)(a3), (long)(a4), (long)(a5), 0, nr)
#define LINUX_SYSCALL6(nr, a1, a2, a3, a4, a5, a6) linux_syscall((long)(a1), (long)(a2), (long)(a3), (long)(a4), (long)(a5), (long)(a6), nr)

extern "C"
long linux_syscall(long a1, long a2, long a3, long a4, long a5, long a6, int nr);

#endif