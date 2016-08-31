/*
 * arafepc_pin_config.h
 *
 * These define the ACTUAL pin configuration of the slave control board being used.
 *
 *  Created on: Mar 23, 2015
 *      Author: barawn
 */

#ifndef ARAFE_SLAVE_V2_ARAFEPC_PIN_CONFIG_H_
#define ARAFE_SLAVE_V2_ARAFEPC_PIN_CONFIG_H_

#include <stdint.h>

extern volatile uint8_t *const enable_port_arr[4];
extern const uint8_t enable_bit_arr[4];
extern volatile uint8_t *const att_port_arr[8];
extern const uint8_t att_bit_arr[8];

extern volatile uint8_t *const en_5v_port;
extern const uint8_t en_5v_bit;

extern volatile uint8_t *const en_12v_port;
extern const uint8_t en_12v_bit;

#define SPI_CLK_PORT	P2OUT // Changed from P1OUT
#define	SPI_CLK_BIT		BIT6

#define SPI_DATA_PORT	P2OUT // Changed from P1OUT
#define SPI_DATA_BIT	BIT7

#define EN5V_PORT		P3OUT
#define EN5V_BIT		BIT1

#define EN12V_PORT      P3OUT
#define EN12V_BIT       BIT7

//extern volatile uint8_t *const spiclk_port;
//extern const uint8_t spiclk_bit;
//extern volatile uint8_t *const spidata_port;
//extern const uint8_t spidata_bit;

extern const uint8_t port1_dir;
extern const uint8_t port1_sel;
extern const uint8_t port1_sel2;
extern const uint8_t port3_sel;
extern const uint8_t port3_sel2;
extern const uint8_t cap_disable;
extern const uint8_t cap_ctl2;
extern const uint8_t analog_enable;
extern const uint8_t analog_enable_fault;
#endif /* ARAFE_SLAVE_V2_ARAFEPC_PIN_CONFIG_H_ */
