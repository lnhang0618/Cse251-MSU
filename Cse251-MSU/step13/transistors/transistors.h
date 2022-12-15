#ifndef TRANSISTORS_H
#define TRANSISTORS_H

/* Types */
#define NPN 1
#define PNP 2

/* Cases */
#define T018 1
#define T092A 2
#define T092C 3
#define T0220 4
#define T039 5

typedef struct Transistor
{
	char number[10];
	int type;	/*NPN,PNP,etc. */
	int caseStyle;	/*T018,etc. */
	double pmax;	/*Maximum power dissipation watts */
	double icmax;	/*Maximun collector current amps */
} Tran;

void DisplayTransistor(Tran tran);
Tran InputTransistor();
void InputString(char *str, int max);
double InputPositiveValue(char *prompt);
#endif
