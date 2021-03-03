/*
 * File:   botoes.c
 * Author: 19179453
 *
 * Created on 26 de Fevereiro de 2021, 16:33
 */


#include <xc.h>
#include "config.h"
#include "delay.h"

void botoes_init (void)
{
    TRISDbits.TRISD2 = 1;
    TRISDbits.TRISD3 = 1;
}

char b1 (void)
{
    return (PORTDbits.RD2);
}

char b0 (void)
{
    return (PORTDbits.RD2);
}