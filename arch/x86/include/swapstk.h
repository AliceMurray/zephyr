/*
 * Copyright (c) 2011-2012, 2014 Wind River Systems, Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

/**
 * @file
 * @brief Stack frame created by swap (IA-32)
 *
 * This file details the stack frame generated by z_swap() when it saves a task
 * or thread's context. This is specific to the IA-32 processor architecture.
 *
 * NOTE: z_swap() does not use this file as it uses the push instruction to
 * save a context. Changes to the file will not automatically be picked up by
 * z_swap().  Conversely, changes to z_swap() should be mirrored here if the
 * stack frame is modified.
 */

#ifndef ZEPHYR_ARCH_X86_INCLUDE_SWAPSTK_H_
#define ZEPHYR_ARCH_X86_INCLUDE_SWAPSTK_H_

#ifdef __cplusplus
extern "C" {
#endif

#ifndef _ASMLANGUAGE

/* Stack of a saved context */
typedef struct s_SwapStk {
	unsigned int eax;     /* EAX register */
	unsigned int ebp;     /* EBP register */
	unsigned int ebx;     /* EBX register */
	unsigned int esi;     /* ESI register */
	unsigned int edi;     /* EDI register */
	unsigned int retAddr; /* Return address of caller of z_swap() */
	unsigned int param;   /* Parameter passed to z_swap() */
} tSwapStk;

#endif /* _ASMLANGUAGE */

#ifdef __cplusplus
}
#endif

#endif /* ZEPHYR_ARCH_X86_INCLUDE_SWAPSTK_H_ */
