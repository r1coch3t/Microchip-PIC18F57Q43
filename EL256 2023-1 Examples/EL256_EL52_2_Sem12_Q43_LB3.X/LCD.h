#ifndef LCD_LIB_H_
#define	LCD_LIB_H_

#define ON  0
#define OFF 1
#define RS  LATAbits.LATA0
#define RW  LATAbits.LATA1
#define E   LATAbits.LATA2
#define _XTAL_FREQ 4000000UL

void POS_CURSOR(unsigned char fila,unsigned char columna);
void DISPLAY_ONOFF(unsigned char estado);
void CURSOR_HOME(void);
void CURSOR_ONOFF(unsigned char estado);
void ENVIA_CHAR(unsigned char dato);
void BORRAR_LCD(void);
void LCD_CONFIG(void);
void ENVIA_NIBBLE(unsigned char dato);
void ENVIA_LCD_CMD(unsigned char dato);
void LEER_LCD(void);
void BLINK_CURSOR(unsigned char val);
void GENERACARACTER(const unsigned char *vector,unsigned char pos);
void ESCRIBE_MENSAJE(const char *cadena,unsigned char tam);
void ESCRIBE_MENSAJE2(const char *cadena);
void CURSOR_SHIFTLEFT(void);
void CURSOR_SHIFTRIGHT(void);
void DISPLAY_SHIFTLEFT(void);
void DISPLAY_SHIFTRIGHT(void);
void LCD_INIT(void);

#endif	/* XC_HEADER_TEMPLATE_H */

