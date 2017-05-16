<<<<<<< HEAD
/*
 * =====================================================================================
 *
 *       Filename:  entry.c
 *
 *    Description:  hurlex 内核的入口函数
 *
 *        Version:  1.0
 *        Created:  2013年10月31日 13时31分03秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Hurley (LiuHuan), liuhuan1992@gmail.com
 *        Company:  Class 1107 of Computer Science and Technology
 *
 * =====================================================================================
 */

#include "types.h"
#include "console.h"

int kern_entry()
{
	console_clear();

	return 0;
=======
#include "int32_test.h"
int kern_entry()
{
		
	regs16_t regs;	
	regs.ax = 0x0013;
	int32(0x10, &regs);
	//unsigned int* buffer = (unsigned int*) 0xA0000;
	int i;
	char *p;	
	for(i = 0xa0000; i < 0xaffff; i++) {
		p = i;
		*p = 15;	
	}   
	return 0;	
>>>>>>> 0458cc73481b3c9d5253296281282deacf1aead9
}

