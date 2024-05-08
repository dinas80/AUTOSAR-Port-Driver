 /******************************************************************************
 *
 * Module: PORT
 *
 * File Name: Port_PBcfg.c
 *
 * Description: Post Build Configuration Source file for TM4C123GH6PM Microcontroller - Port Driver
 *
 * Author: Dina Salah
 * 
 ******************************************************************************/

#include "Port.h"

/*
 * Module Version 1.0.0
 */
#define PORT_PBCFG_SW_MAJOR_VERSION              (1U)
#define PORT_PBCFG_SW_MINOR_VERSION              (0U)
#define PORT_PBCFG_SW_PATCH_VERSION              (0U)

/*
 * AUTOSAR Version 4.0.3
 */
#define PORT_PBCFG_AR_RELEASE_MAJOR_VERSION     (4U)
#define PORT_PBCFG_AR_RELEASE_MINOR_VERSION     (0U)
#define PORT_PBCFG_AR_RELEASE_PATCH_VERSION     (3U)

/* AUTOSAR Version checking between PORT_PBcfg.c and PORT.h files */
#if ((PORT_PBCFG_AR_RELEASE_MAJOR_VERSION != PORT_AR_RELEASE_MAJOR_VERSION)\
 ||  (PORT_PBCFG_AR_RELEASE_MINOR_VERSION != PORT_AR_RELEASE_MINOR_VERSION)\
 ||  (PORT_PBCFG_AR_RELEASE_PATCH_VERSION != PORT_AR_RELEASE_PATCH_VERSION))
  #error "The AR version of PBcfg.c does not match the expected version"
#endif

/* Software Version checking between PORT_PBcfg.c and PORT.h files */
#if ((PORT_PBCFG_SW_MAJOR_VERSION != PORT_SW_MAJOR_VERSION)\
 ||  (PORT_PBCFG_SW_MINOR_VERSION != PORT_SW_MINOR_VERSION)\
 ||  (PORT_PBCFG_SW_PATCH_VERSION != PORT_SW_PATCH_VERSION))
  #error "The SW version of PBcfg.c does not match the expected version"
#endif

/* PB structure used with Port_Init API */
const Port_ConfigType PORT_Configuration = {
                                             PORTA,PIN0,PORT_PIN_IN,PORT_PIN_MODE_DIO,LEVEL_LOW,OFF,PORT_PIN_DIRECTION_CHANGEABLE,PORT_PIN_MODE_CHANGEABLE,
                                             PORTA,PIN1,PORT_PIN_IN,PORT_PIN_MODE_DIO,LEVEL_LOW,OFF,PORT_PIN_DIRECTION_CHANGEABLE,PORT_PIN_MODE_CHANGEABLE,
                                             PORTA,PIN2,PORT_PIN_IN,PORT_PIN_MODE_DIO,LEVEL_LOW,OFF,PORT_PIN_DIRECTION_CHANGEABLE,PORT_PIN_MODE_CHANGEABLE,
                                             PORTA,PIN3,PORT_PIN_IN,PORT_PIN_MODE_DIO,LEVEL_LOW,OFF,PORT_PIN_DIRECTION_CHANGEABLE,PORT_PIN_MODE_CHANGEABLE,
                                             PORTA,PIN4,PORT_PIN_IN,PORT_PIN_MODE_DIO,LEVEL_LOW,OFF,PORT_PIN_DIRECTION_CHANGEABLE,PORT_PIN_MODE_CHANGEABLE,
                                             PORTA,PIN5,PORT_PIN_IN,PORT_PIN_MODE_DIO,LEVEL_LOW,OFF,PORT_PIN_DIRECTION_CHANGEABLE,PORT_PIN_MODE_CHANGEABLE,
                                             PORTA,PIN6,PORT_PIN_IN,PORT_PIN_MODE_DIO,LEVEL_LOW,OFF,PORT_PIN_DIRECTION_CHANGEABLE,PORT_PIN_MODE_CHANGEABLE,
                                             PORTA,PIN7,PORT_PIN_IN,PORT_PIN_MODE_DIO,LEVEL_LOW,OFF,PORT_PIN_DIRECTION_CHANGEABLE,PORT_PIN_MODE_CHANGEABLE,
                                             
                                             PORTB,PIN0,PORT_PIN_IN,PORT_PIN_MODE_DIO,LEVEL_LOW,OFF,PORT_PIN_DIRECTION_CHANGEABLE,PORT_PIN_MODE_CHANGEABLE,
                                             PORTB,PIN1,PORT_PIN_IN,PORT_PIN_MODE_DIO,LEVEL_LOW,OFF,PORT_PIN_DIRECTION_CHANGEABLE,PORT_PIN_MODE_CHANGEABLE,
                                             PORTB,PIN2,PORT_PIN_IN,PORT_PIN_MODE_DIO,LEVEL_LOW,OFF,PORT_PIN_DIRECTION_CHANGEABLE,PORT_PIN_MODE_CHANGEABLE,
                                             PORTB,PIN3,PORT_PIN_IN,PORT_PIN_MODE_DIO,LEVEL_LOW,OFF,PORT_PIN_DIRECTION_CHANGEABLE,PORT_PIN_MODE_CHANGEABLE,
                                             PORTB,PIN4,PORT_PIN_IN,PORT_PIN_MODE_DIO,LEVEL_LOW,OFF,PORT_PIN_DIRECTION_CHANGEABLE,PORT_PIN_MODE_CHANGEABLE,
                                             PORTB,PIN5,PORT_PIN_IN,PORT_PIN_MODE_DIO,LEVEL_LOW,OFF,PORT_PIN_DIRECTION_CHANGEABLE,PORT_PIN_MODE_CHANGEABLE,
                                             PORTB,PIN6,PORT_PIN_IN,PORT_PIN_MODE_DIO,LEVEL_LOW,OFF,PORT_PIN_DIRECTION_CHANGEABLE,PORT_PIN_MODE_CHANGEABLE,
                                             PORTB,PIN7,PORT_PIN_IN,PORT_PIN_MODE_DIO,LEVEL_LOW,OFF,PORT_PIN_DIRECTION_CHANGEABLE,PORT_PIN_MODE_CHANGEABLE,
                                             
                                             PORTC,PIN4,PORT_PIN_IN,PORT_PIN_MODE_DIO,LEVEL_LOW,OFF,PORT_PIN_DIRECTION_CHANGEABLE,PORT_PIN_MODE_CHANGEABLE,
                                             PORTC,PIN5,PORT_PIN_IN,PORT_PIN_MODE_DIO,LEVEL_LOW,OFF,PORT_PIN_DIRECTION_CHANGEABLE,PORT_PIN_MODE_CHANGEABLE,
                                             PORTC,PIN6,PORT_PIN_IN,PORT_PIN_MODE_DIO,LEVEL_LOW,OFF,PORT_PIN_DIRECTION_CHANGEABLE,PORT_PIN_MODE_CHANGEABLE,
                                             PORTC,PIN7,PORT_PIN_IN,PORT_PIN_MODE_DIO,LEVEL_LOW,OFF,PORT_PIN_DIRECTION_CHANGEABLE,PORT_PIN_MODE_CHANGEABLE,
                                             
                                             PORTD,PIN0,PORT_PIN_IN,PORT_PIN_MODE_DIO,LEVEL_LOW,OFF,PORT_PIN_DIRECTION_CHANGEABLE,PORT_PIN_MODE_CHANGEABLE,
                                             PORTD,PIN1,PORT_PIN_IN,PORT_PIN_MODE_DIO,LEVEL_LOW,OFF,PORT_PIN_DIRECTION_CHANGEABLE,PORT_PIN_MODE_CHANGEABLE,
                                             PORTD,PIN2,PORT_PIN_IN,PORT_PIN_MODE_DIO,LEVEL_LOW,OFF,PORT_PIN_DIRECTION_CHANGEABLE,PORT_PIN_MODE_CHANGEABLE,
                                             PORTD,PIN3,PORT_PIN_IN,PORT_PIN_MODE_DIO,LEVEL_LOW,OFF,PORT_PIN_DIRECTION_CHANGEABLE,PORT_PIN_MODE_CHANGEABLE,
                                             PORTD,PIN4,PORT_PIN_IN,PORT_PIN_MODE_DIO,LEVEL_LOW,OFF,PORT_PIN_DIRECTION_CHANGEABLE,PORT_PIN_MODE_CHANGEABLE,
                                             PORTD,PIN5,PORT_PIN_IN,PORT_PIN_MODE_DIO,LEVEL_LOW,OFF,PORT_PIN_DIRECTION_CHANGEABLE,PORT_PIN_MODE_CHANGEABLE,
                                             PORTD,PIN6,PORT_PIN_IN,PORT_PIN_MODE_DIO,LEVEL_LOW,OFF,PORT_PIN_DIRECTION_CHANGEABLE,PORT_PIN_MODE_CHANGEABLE,
                                             PORTD,PIN7,PORT_PIN_IN,PORT_PIN_MODE_DIO,LEVEL_LOW,OFF,PORT_PIN_DIRECTION_CHANGEABLE,PORT_PIN_MODE_CHANGEABLE,
                                             
                                             PORTE,PIN0,PORT_PIN_IN,PORT_PIN_MODE_DIO,LEVEL_LOW,OFF,PORT_PIN_DIRECTION_CHANGEABLE,PORT_PIN_MODE_CHANGEABLE,
                                             PORTE,PIN1,PORT_PIN_IN,PORT_PIN_MODE_DIO,LEVEL_LOW,OFF,PORT_PIN_DIRECTION_CHANGEABLE,PORT_PIN_MODE_CHANGEABLE,
                                             PORTE,PIN2,PORT_PIN_IN,PORT_PIN_MODE_DIO,LEVEL_LOW,OFF,PORT_PIN_DIRECTION_CHANGEABLE,PORT_PIN_MODE_CHANGEABLE,
                                             PORTE,PIN3,PORT_PIN_IN,PORT_PIN_MODE_DIO,LEVEL_LOW,OFF,PORT_PIN_DIRECTION_CHANGEABLE,PORT_PIN_MODE_CHANGEABLE,
                                             PORTE,PIN4,PORT_PIN_IN,PORT_PIN_MODE_DIO,LEVEL_LOW,OFF,PORT_PIN_DIRECTION_CHANGEABLE,PORT_PIN_MODE_CHANGEABLE,
                                             PORTE,PIN5,PORT_PIN_IN,PORT_PIN_MODE_DIO,LEVEL_LOW,OFF,PORT_PIN_DIRECTION_CHANGEABLE,PORT_PIN_MODE_CHANGEABLE,
                                             
                                             PORTF,PIN0,PORT_PIN_IN,PORT_PIN_MODE_DIO,LEVEL_LOW,OFF,PORT_PIN_DIRECTION_CHANGEABLE,PORT_PIN_MODE_CHANGEABLE,
                                             PORTF,PIN1,PORT_PIN_OUT,PORT_PIN_MODE_DIO,LEVEL_LOW,OFF,PORT_PIN_DIRECTION_CHANGEABLE,PORT_PIN_MODE_CHANGEABLE, /*LED1 */
                                             PORTF,PIN2,PORT_PIN_IN,PORT_PIN_MODE_DIO,LEVEL_LOW,OFF,PORT_PIN_DIRECTION_CHANGEABLE,PORT_PIN_MODE_CHANGEABLE,
                                             PORTF,PIN3,PORT_PIN_IN,PORT_PIN_MODE_DIO,LEVEL_LOW,OFF,PORT_PIN_DIRECTION_CHANGEABLE,PORT_PIN_MODE_CHANGEABLE,
                                             PORTF,PIN4,PORT_PIN_IN,PORT_PIN_MODE_DIO,LEVEL_LOW,PULL_UP,PORT_PIN_DIRECTION_CHANGEABLE,PORT_PIN_MODE_CHANGEABLE    /*SW1 */
                                             
                                             
				         };

