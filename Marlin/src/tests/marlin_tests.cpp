/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2022 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */

#include "../inc/MarlinConfigPre.h"

#if ENABLED(MARLIN_TEST_BUILD)

#include "../module/endstops.h"
#include "../module/motion.h"
#include "../module/planner.h"
#include "../module/settings.h"
#include "../module/stepper.h"
#include "../module/temperature.h"

// Individual tests are localized in each module.
// Each test produces its own report.

// Temporary diagnostic: Y motor pins
// Temporary diagnostic: Y motor pins

void disable_JTAG_SWD() {
  // EXPLICIT patched remapping right before initializing the pins
  #if defined(STM32F1xx)
    __HAL_RCC_AFIO_CLK_ENABLE();
    __HAL_AFIO_REMAP_SWJ_DISABLE(); 
    // AFIO_DBGAFR_CONFIG(AFIO_MAPR_SWJ_CFG_DISABLE); 
  #endif
}

#include <stm32f1xx.h>

void test_usb_y_pins() {
  pinMode(PA11, OUTPUT); // Y_DIR
  pinMode(PA15, OUTPUT); // Y_ENABLE

  digitalWrite(PA15, LOW); // Habilitar driver Y
  digitalWrite(PA11, LOW);

  // Desconexión de hardware del periférico USB
  RCC->APB1ENR &= ~RCC_APB1ENR_USBEN;

  // Re-configurar PA12 a General Purpose Output Push-Pull 50MHz
  GPIOA->CRH &= ~(0xFU << 16);
  GPIOA->CRH |=  (0x3U << 16);

  // Conmutación física del motor
  for (int i = 0; i < 100; i++) {
    GPIOA->BSRR = GPIO_PIN_12; // HIGH
    delay(10);
    GPIOA->BRR  = GPIO_PIN_12; // LOW
    delay(10);
  }
}

void test_y_pins() {

  pinMode(PA11, OUTPUT);  // Y_DIR
  pinMode(PA12, OUTPUT);  // Y_STEP
  pinMode(PA15, OUTPUT);  // Y_ENABLE

  digitalWrite(PA15, LOW);  // Verify polarity before enabling
  digitalWrite(PA11, LOW);

  for (int i = 0; i < 100; i++) {
    digitalWrite(PA12, HIGH);
    delay(10);
    digitalWrite(PA12, LOW);
    delay(10);
  }
}


void test_x_pins() {
  pinMode(PD13, OUTPUT);  // X_DIR
  pinMode(PC6, OUTPUT);  // X_STEP
  pinMode(PA8, OUTPUT);  // X_ENABLE

  digitalWrite(PA8, LOW);  // Verify polarity before enabling
  digitalWrite(PD13, LOW);

  for (int i = 0; i < 100; i++) {
    digitalWrite(PC6, HIGH);
    delay(10);
    digitalWrite(PC6, LOW);
    delay(10);
  }
}

// Startup tests are run at the end of setup()
void runStartupTests() {
  // Call post-setup tests here to validate behaviors.  
  // SETUP_LOG("end setup: Testing XY motor pins");
  test_usb_y_pins();
  // disable_JTAG_SWD();
  // test_y_pins();
  // test_x_pins();
  

  // SETUP_LOG("end setup: Testing XY motor pins Done");    


}

// Periodic tests are run from within loop()
void runPeriodicTests() {
  // Call periodic tests here to validate behaviors.
}

#endif // MARLIN_TEST_BUILD
