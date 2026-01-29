#ifndef _INTERRUPT_H
#define _INTERRUPT_H
#include "stdint.h"

// 中断处理函数类型
typedef void (*intr_handler)(uint8_t vec_nr);
// 函数声明
void intr_init(void);                    // 初始化中断描述符表
#endif