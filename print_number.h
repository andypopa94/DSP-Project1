//////////////////////////////////////////////////////////////////////////////
// *
// * Predmetni projekat iz predmeta OAiS DSP 2
// * Godina: 2016
// *
// * Stampanje broja na LCD ekran na EZDSP5535 razvojnoj ploci
// *
//////////////////////////////////////////////////////////////////////////////

#ifndef DTMF_PREDAJNIK_PRINT_NUMBER_H_
#define DTMF_PREDAJNIK_PRINT_NUMBER_H_

/* Inicijalizacija stampanja - brisanje ekrana */
void initPrintNumber();

/* Stampanje broja ukoliko je u opsegu 0-9 */
void printNumber(Int16 x);

/* Stampanje karaktera sa telefonske tastature */
void printChar(char x);

#endif /* DTMF_PREDAJNIK_PRINT_NUMBER_H_ */
