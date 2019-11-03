/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2019 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
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
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */
#pragma once

/**
 * Spanish
 *
 * LCD Menu Messages
 * See also http://marlinfw.org/docs/development/lcd_language.html
 *
 */

#define DISPLAY_CHARSET_ISO10646_1
#define CHARSIZE 2

#define WELCOME_MSG                         MACHINE_NAME _UxGT(" lista.")
#define MSG_BACK                            _UxGT("Atrás")
#define MSG_SD_INSERTED                     _UxGT("Tarjeta colocada")
#define MSG_SD_REMOVED                      _UxGT("Tarjeta retirada")
#define MSG_LCD_ENDSTOPS                    _UxGT("Endstops") // Max length 8 characters
#define MSG_MAIN                            _UxGT("Menú principal")
#define MSG_AUTOSTART                       _UxGT("Inicio automático")
#define MSG_DISABLE_STEPPERS                _UxGT("Apagar motores")
#define MSG_DEBUG_MENU                      _UxGT("Menú depurar")
#define MSG_PROGRESS_BAR_TEST               _UxGT("Prueba barra avance")
#define MSG_AUTO_HOME                       _UxGT("Llevar al origen")
#define MSG_AUTO_HOME_X                     _UxGT("Origen X")
#define MSG_AUTO_HOME_Y                     _UxGT("Origen Y")
#define MSG_AUTO_HOME_Z                     _UxGT("Origen Z")
#define MSG_LEVEL_BED_HOMING                _UxGT("Origen XYZ")
#define MSG_LEVEL_BED_WAITING               _UxGT("Iniciar (Presione)")
#define MSG_LEVEL_BED_NEXT_POINT            _UxGT("Siguiente punto")
#define MSG_LEVEL_BED_DONE                  _UxGT("Nivelación lista!")
#define MSG_SET_HOME_OFFSETS                _UxGT("Ajustar desfases")
#define MSG_HOME_OFFSETS_APPLIED            _UxGT("Desfase aplicado")
#define MSG_SET_ORIGIN                      _UxGT("Establecer origen")
#define MSG_PREHEAT_1                       _UxGT("Precalentar " PREHEAT_1_LABEL)
#define MSG_PREHEAT_1_N                     MSG_PREHEAT_1 _UxGT(" ")
#define MSG_PREHEAT_1_ALL                   MSG_PREHEAT_1 _UxGT(" Todo")
#define MSG_PREHEAT_1_END                   MSG_PREHEAT_1 _UxGT(" End")
#define MSG_PREHEAT_1_BEDONLY               MSG_PREHEAT_1 _UxGT(" Cama")
#define MSG_PREHEAT_1_SETTINGS              MSG_PREHEAT_1 _UxGT(" Config")
#define MSG_PREHEAT_2                       _UxGT("Precalentar " PREHEAT_2_LABEL)
#define MSG_PREHEAT_2_N                     MSG_PREHEAT_2 _UxGT(" ")
#define MSG_PREHEAT_2_ALL                   MSG_PREHEAT_2 _UxGT(" Todo")
#define MSG_PREHEAT_2_END                   MSG_PREHEAT_2 _UxGT(" End")
#define MSG_PREHEAT_2_BEDONLY               MSG_PREHEAT_2 _UxGT(" Cama")
#define MSG_PREHEAT_2_SETTINGS              MSG_PREHEAT_2 _UxGT(" Config")
#define MSG_COOLDOWN                        _UxGT("Enfriar")
#define MSG_SWITCH_PS_ON                    _UxGT("Encender")
#define MSG_SWITCH_PS_OFF                   _UxGT("Apagar")
#define MSG_EXTRUDE                         _UxGT("Extruir")
#define MSG_RETRACT                         _UxGT("Retraer")
#define MSG_MOVE_AXIS                       _UxGT("Mover ejes")
#define MSG_BED_LEVELING                    _UxGT("Nivelar cama")
#define MSG_LEVEL_BED                       _UxGT("Nivelar cama")

#define MSG_MOVING                          _UxGT("Moviendo...")
#define MSG_FREE_XY                         _UxGT("Libre XY")
#define MSG_MOVE_X                          _UxGT("Mover X")
#define MSG_MOVE_Y                          _UxGT("Mover Y")
#define MSG_MOVE_Z                          _UxGT("Mover Z")
#define MSG_MOVE_E                          _UxGT("Extrusor")
#define MSG_MOVE_Z_DIST                     _UxGT("Mover %smm")
#define MSG_MOVE_01MM                       _UxGT("Mover 0.1mm")
#define MSG_MOVE_1MM                        _UxGT("Mover 1mm")
#define MSG_MOVE_10MM                       _UxGT("Mover 10mm")
#define MSG_SPEED                           _UxGT("Velocidad")
#define MSG_BED_Z                           _UxGT("Cama Z")
#define MSG_NOZZLE                          _UxGT("Boquilla")
#define MSG_BED                             _UxGT("Cama")
#define MSG_FAN_SPEED                       _UxGT("Ventilador")
#define MSG_FLOW                            _UxGT("Flujo")
#define MSG_CONTROL                         _UxGT("Control")
#define MSG_MIN                             _UxGT(" ") LCD_STR_THERMOMETER _UxGT(" Min")
#define MSG_MAX                             _UxGT(" ") LCD_STR_THERMOMETER _UxGT(" Max")
#define MSG_FACTOR                          _UxGT(" ") LCD_STR_THERMOMETER _UxGT(" Fact")
#define MSG_AUTOTEMP                        _UxGT("Temperatura Auto.")
#define MSG_LCD_ON                          _UxGT("Encender")
#define MSG_LCD_OFF                         _UxGT("Apagar")
#define MSG_PID_P                           _UxGT("PID-P")
#define MSG_PID_I                           _UxGT("PID-I")
#define MSG_PID_D                           _UxGT("PID-D")
#define MSG_PID_C                           _UxGT("PID-C")
#define MSG_SELECT                          _UxGT("Seleccionar")
#define MSG_ACC                             _UxGT("Aceleración")
#define MSG_JERK                            _UxGT("Jerk")
#define MSG_VX_JERK                         _UxGT("Vx-jerk")
#define MSG_VY_JERK                         _UxGT("Vy-jerk")
#define MSG_VZ_JERK                         _UxGT("Vz-jerk")
#define MSG_VE_JERK                         _UxGT("Ve-jerk")
#define MSG_VMAX                            _UxGT("Vmax")
#define MSG_VMIN                            _UxGT("Vmin")
#define MSG_VTRAV_MIN                       _UxGT("Vel. viaje min")
#define MSG_ACCELERATION                    MSG_ACC
#define MSG_AMAX                            _UxGT("Acel. max")
#define MSG_A_RETRACT                       _UxGT("Acel. retrac.")
#define MSG_A_TRAVEL                        _UxGT("Acel. Viaje")
#define MSG_STEPS_PER_MM                    _UxGT("Pasos/mm")
#define MSG_XSTEPS                          _UxGT("X pasos/mm")
#define MSG_YSTEPS                          _UxGT("Y pasos/mm")
#define MSG_ZSTEPS                          _UxGT("Z pasos/mm")
#define MSG_ESTEPS                          _UxGT("E pasos/mm")
#define MSG_E1STEPS                         _UxGT("E1 pasos/mm")
#define MSG_E2STEPS                         _UxGT("E2 pasos/mm")
#define MSG_E3STEPS                         _UxGT("E3 pasos/mm")
#define MSG_E4STEPS                         _UxGT("E4 pasos/mm")
#define MSG_E5STEPS                         _UxGT("E5 pasos/mm")
#define MSG_E6STEPS                         _UxGT("E6 pasos/mm")
#define MSG_TEMPERATURE                     _UxGT("Temperatura")
#define MSG_MOTION                          _UxGT("Movimiento")
#define MSG_FILAMENT                        _UxGT("Filamento")
#define MSG_VOLUMETRIC_ENABLED              _UxGT("E in mm3")
#define MSG_FILAMENT_DIAM                   _UxGT("Fil. Dia.")
#define MSG_ADVANCE_K                       _UxGT("Avance K")
#define MSG_CONTRAST                        _UxGT("Contraste")
#define MSG_STORE_EEPROM                    _UxGT("Guardar memoria")
#define MSG_LOAD_EEPROM                     _UxGT("Cargar memoria")
#define MSG_RESTORE_FAILSAFE                _UxGT("Restaurar memoria")
#define MSG_REFRESH                         _UxGT("Volver a cargar")
#define MSG_WATCH                           _UxGT("Información")
#define MSG_PREPARE                         _UxGT("Preparar")
#define MSG_TUNE                            _UxGT("Ajustar")
#define MSG_PAUSE_PRINT                     _UxGT("Pausar impresión")
#define MSG_RESUME_PRINT                    _UxGT("Reanudar impresión")
#define MSG_STOP_PRINT                      _UxGT("Detener impresión")
#define MSG_CARD_MENU                       _UxGT("Menú de SD")
#define MSG_NO_CARD                         _UxGT("No hay tarjeta SD")
#define MSG_DWELL                           _UxGT("Reposo...")
#define MSG_USERWAIT                        _UxGT("Esperando órdenes")
#define MSG_PRINT_ABORTED                   _UxGT("Impresión cancelada")
#define MSG_NO_MOVE                         _UxGT("Sin movimiento")
#define MSG_KILLED                          _UxGT("Parada de emergencia")
#define MSG_STOPPED                         _UxGT("Detenida")
#define MSG_CONTROL_RETRACT                 _UxGT("Retraer mm")
#define MSG_CONTROL_RETRACT_SWAP            _UxGT("Interc. Retraer mm")
#define MSG_CONTROL_RETRACTF                _UxGT("Retraer  V")
#define MSG_CONTROL_RETRACT_ZHOP            _UxGT("Levantar mm")
#define MSG_CONTROL_RETRACT_RECOVER         _UxGT("DesRet mm")
#define MSG_CONTROL_RETRACT_RECOVER_SWAP    _UxGT("Interc. DesRet mm")
#define MSG_CONTROL_RETRACT_RECOVERF        _UxGT("DesRet V")
#define MSG_AUTORETRACT                     _UxGT("Retracción Auto.")
#define MSG_FILAMENTCHANGE                  _UxGT("Cambiar filamento")
#define MSG_INIT_SDCARD                     _UxGT("Iniciando tarjeta")
#define MSG_CHANGE_SDCARD                   _UxGT("Cambiar tarjeta")
#define MSG_ZPROBE_OUT                      _UxGT("Sonda Z fuera")
#define MSG_BLTOUCH_SELFTEST                _UxGT("BLTouch Auto-Prueba")
#define MSG_BLTOUCH_RESET                   _UxGT("Reiniciar BLTouch")
#define MSG_HOME                            _UxGT("Home")  // Used as MSG_HOME " " MSG_X MSG_Y MSG_Z " " MSG_FIRST
#define MSG_FIRST                           _UxGT("primero")
#define MSG_ZPROBE_ZOFFSET                  _UxGT("Desfase Z")
#define MSG_BABYSTEP_X                      _UxGT("Micropaso X")
#define MSG_BABYSTEP_Y                      _UxGT("Micropaso Y")
#define MSG_BABYSTEP_Z                      _UxGT("Micropaso Z")
#define MSG_ENDSTOP_ABORT                   _UxGT("Cancelado - Endstop")
#define MSG_HEATING_FAILED_LCD              _UxGT("Error: al calentar")
#define MSG_ERR_REDUNDANT_TEMP              _UxGT("Error: temperatura")
#define MSG_THERMAL_RUNAWAY                 _UxGT("Error: temperatura")
#define MSG_ERR_MAXTEMP                     _UxGT("Error: Temp Máxima")
#define MSG_ERR_MINTEMP                     _UxGT("Error: Temp Mínima")
#define MSG_ERR_MAXTEMP_BED                 _UxGT("Error: Temp Max Cama")
#define MSG_ERR_MINTEMP_BED                 _UxGT("Error: Temp Min Cama")
#define MSG_ERR_Z_HOMING                    MSG_HOME _UxGT(" ") MSG_X MSG_Y _UxGT(" ") MSG_FIRST
#define MSG_HALTED                          _UxGT("IMPRESORA PARADA")
#define MSG_PLEASE_RESET                    _UxGT("Por favor, reinicie")
#define MSG_SHORT_DAY                       _UxGT("d") // One character only
#define MSG_SHORT_HOUR                      _UxGT("h") // One character only
#define MSG_SHORT_MINUTE                    _UxGT("m") // One character only
#define MSG_HEATING                         _UxGT("Calentando...")
#define MSG_BED_HEATING                     _UxGT("Calentando Cama...")
#define MSG_DELTA_CALIBRATE                 _UxGT("Calibración Delta")
#define MSG_DELTA_CALIBRATE_X               _UxGT("Calibrar X")
#define MSG_DELTA_CALIBRATE_Y               _UxGT("Calibrar Y")
#define MSG_DELTA_CALIBRATE_Z               _UxGT("Calibrar Z")
#define MSG_DELTA_CALIBRATE_CENTER          _UxGT("Calibrar Centro")
#define MSG_DELTA_AUTO_CALIBRATE            _UxGT("Auto Calibración")
#define MSG_DELTA_HEIGHT_CALIBRATE          _UxGT("Est. Altura Delta")
#define MSG_INFO_MENU                       _UxGT("Inf. Impresora")
#define MSG_INFO_PRINTER_MENU               _UxGT("Inf. Impresora")
#define MSG_INFO_STATS_MENU                 _UxGT("Estadísticas Imp.")
#define MSG_INFO_BOARD_MENU                 _UxGT("Inf. Controlador")
#define MSG_INFO_THERMISTOR_MENU            _UxGT("Termistores")
#define MSG_INFO_EXTRUDERS                  _UxGT("Extrusores")
#define MSG_INFO_BAUDRATE                   _UxGT("Baudios")
#define MSG_INFO_PROTOCOL                   _UxGT("Protocolo")
#define MSG_CASE_LIGHT                      _UxGT("Luz cabina")

  PROGMEM Language_Str WELCOME_MSG                         = MACHINE_NAME _UxGT(" lista");
  PROGMEM Language_Str MSG_YES                             = _UxGT("SI");
  PROGMEM Language_Str MSG_NO                              = _UxGT("NO");
  PROGMEM Language_Str MSG_BACK                            = _UxGT("Atrás");
  PROGMEM Language_Str MSG_MEDIA_ABORTING                  = _UxGT("Cancelando...");
  PROGMEM Language_Str MSG_MEDIA_INSERTED                  = _UxGT("SD/USB insertado");
  PROGMEM Language_Str MSG_MEDIA_REMOVED                   = _UxGT("SD/USB retirado");
  PROGMEM Language_Str MSG_MEDIA_RELEASED                  = _UxGT("SD/USB lanzado");
  PROGMEM Language_Str MSG_MEDIA_WAITING                   = _UxGT("Esperando al SD/USB");
  PROGMEM Language_Str MSG_MEDIA_READ_ERROR                = _UxGT("Error lectura SD/USB");
  PROGMEM Language_Str MSG_MEDIA_USB_REMOVED               = _UxGT("Disp. USB retirado");
  PROGMEM Language_Str MSG_MEDIA_USB_FAILED                = _UxGT("Inicio USB fallido");
  PROGMEM Language_Str MSG_LCD_ENDSTOPS                    = _UxGT("Endstops"); // Max length 8 characters
  PROGMEM Language_Str MSG_LCD_SOFT_ENDSTOPS               = _UxGT("Soft Endstops");
  PROGMEM Language_Str MSG_MAIN                            = _UxGT("Menú principal");
  PROGMEM Language_Str MSG_ADVANCED_SETTINGS               = _UxGT("Ajustes avanzados");
  PROGMEM Language_Str MSG_CONFIGURATION                   = _UxGT("Configuración");
  PROGMEM Language_Str MSG_AUTOSTART                       = _UxGT("Inicio automático");
  PROGMEM Language_Str MSG_DISABLE_STEPPERS                = _UxGT("Apagar motores");
  PROGMEM Language_Str MSG_DEBUG_MENU                      = _UxGT("Menú depuración");
  PROGMEM Language_Str MSG_PROGRESS_BAR_TEST               = _UxGT("Prob. barra progreso");
  PROGMEM Language_Str MSG_AUTO_HOME                       = _UxGT("Llevar al origen");
  PROGMEM Language_Str MSG_AUTO_HOME_X                     = _UxGT("Origen X");
  PROGMEM Language_Str MSG_AUTO_HOME_Y                     = _UxGT("Origen Y");
  PROGMEM Language_Str MSG_AUTO_HOME_Z                     = _UxGT("Origen Z");
  PROGMEM Language_Str MSG_AUTO_Z_ALIGN                    = _UxGT("Auto alineado Z");
  PROGMEM Language_Str MSG_LEVEL_BED_HOMING                = _UxGT("Origen XYZ");
  PROGMEM Language_Str MSG_LEVEL_BED_WAITING               = _UxGT("Pulsar para comenzar");
  PROGMEM Language_Str MSG_LEVEL_BED_NEXT_POINT            = _UxGT("Siguiente punto");
  PROGMEM Language_Str MSG_LEVEL_BED_DONE                  = _UxGT("¡Nivelación lista!");
  PROGMEM Language_Str MSG_Z_FADE_HEIGHT                   = _UxGT("Compensación Altura");
  PROGMEM Language_Str MSG_SET_HOME_OFFSETS                = _UxGT("Ajustar desfases");
  PROGMEM Language_Str MSG_HOME_OFFSETS_APPLIED            = _UxGT("Desfase aplicada");
  PROGMEM Language_Str MSG_SET_ORIGIN                      = _UxGT("Establecer origen");
  PROGMEM Language_Str MSG_PREHEAT_1                       = _UxGT("Precalentar ") PREHEAT_1_LABEL;
  PROGMEM Language_Str MSG_PREHEAT_1_H0                    = _UxGT("Precalentar ") PREHEAT_1_LABEL " " LCD_STR_N0;
  PROGMEM Language_Str MSG_PREHEAT_1_H1                    = _UxGT("Precalentar ") PREHEAT_1_LABEL " " LCD_STR_N1;
  PROGMEM Language_Str MSG_PREHEAT_1_H2                    = _UxGT("Precalentar ") PREHEAT_1_LABEL " " LCD_STR_N2;
  PROGMEM Language_Str MSG_PREHEAT_1_H3                    = _UxGT("Precalentar ") PREHEAT_1_LABEL " " LCD_STR_N3;
  PROGMEM Language_Str MSG_PREHEAT_1_H4                    = _UxGT("Precalentar ") PREHEAT_1_LABEL " " LCD_STR_N4;
  PROGMEM Language_Str MSG_PREHEAT_1_H5                    = _UxGT("Precalentar ") PREHEAT_1_LABEL " " LCD_STR_N5;
  PROGMEM Language_Str MSG_PREHEAT_1_END                   = _UxGT("Precalentar ") PREHEAT_1_LABEL _UxGT(" Fin");
  PROGMEM Language_Str MSG_PREHEAT_1_END_E0                = _UxGT("Precalentar ") PREHEAT_1_LABEL _UxGT(" Fin ") LCD_STR_N0;
  PROGMEM Language_Str MSG_PREHEAT_1_END_E1                = _UxGT("Precalentar ") PREHEAT_1_LABEL _UxGT(" Fin ") LCD_STR_N1;
  PROGMEM Language_Str MSG_PREHEAT_1_END_E2                = _UxGT("Precalentar ") PREHEAT_1_LABEL _UxGT(" Fin ") LCD_STR_N2;
  PROGMEM Language_Str MSG_PREHEAT_1_END_E3                = _UxGT("Precalentar ") PREHEAT_1_LABEL _UxGT(" Fin ") LCD_STR_N3;
  PROGMEM Language_Str MSG_PREHEAT_1_END_E4                = _UxGT("Precalentar ") PREHEAT_1_LABEL _UxGT(" Fin ") LCD_STR_N4;
  PROGMEM Language_Str MSG_PREHEAT_1_END_E5                = _UxGT("Precalentar ") PREHEAT_1_LABEL _UxGT(" Fin ") LCD_STR_N5;
  PROGMEM Language_Str MSG_PREHEAT_1_ALL                   = _UxGT("Precalentar ") PREHEAT_1_LABEL _UxGT(" Todo");
  PROGMEM Language_Str MSG_PREHEAT_1_BEDONLY               = _UxGT("Precalentar ") PREHEAT_1_LABEL _UxGT(" Cama");
  PROGMEM Language_Str MSG_PREHEAT_1_SETTINGS              = _UxGT("Precalentar ") PREHEAT_1_LABEL _UxGT(" Ajuste");
  PROGMEM Language_Str MSG_PREHEAT_2                       = _UxGT("Precalentar ") PREHEAT_2_LABEL;
  PROGMEM Language_Str MSG_PREHEAT_2_H0                    = _UxGT("Precalentar ") PREHEAT_2_LABEL " " LCD_STR_N0;
  PROGMEM Language_Str MSG_PREHEAT_2_H1                    = _UxGT("Precalentar ") PREHEAT_2_LABEL " " LCD_STR_N1;
  PROGMEM Language_Str MSG_PREHEAT_2_H2                    = _UxGT("Precalentar ") PREHEAT_2_LABEL " " LCD_STR_N2;
  PROGMEM Language_Str MSG_PREHEAT_2_H3                    = _UxGT("Precalentar ") PREHEAT_2_LABEL " " LCD_STR_N3;
  PROGMEM Language_Str MSG_PREHEAT_2_H4                    = _UxGT("Precalentar ") PREHEAT_2_LABEL " " LCD_STR_N4;
  PROGMEM Language_Str MSG_PREHEAT_2_H5                    = _UxGT("Precalentar ") PREHEAT_2_LABEL " " LCD_STR_N5;
  PROGMEM Language_Str MSG_PREHEAT_2_END                   = _UxGT("Precalentar ") PREHEAT_2_LABEL _UxGT(" Fin");
  PROGMEM Language_Str MSG_PREHEAT_2_END_E0                = _UxGT("Precalentar ") PREHEAT_2_LABEL _UxGT(" Fin ") LCD_STR_N0;
  PROGMEM Language_Str MSG_PREHEAT_2_END_E1                = _UxGT("Precalentar ") PREHEAT_2_LABEL _UxGT(" Fin ") LCD_STR_N1;
  PROGMEM Language_Str MSG_PREHEAT_2_END_E2                = _UxGT("Precalentar ") PREHEAT_2_LABEL _UxGT(" Fin ") LCD_STR_N2;
  PROGMEM Language_Str MSG_PREHEAT_2_END_E3                = _UxGT("Precalentar ") PREHEAT_2_LABEL _UxGT(" Fin ") LCD_STR_N3;
  PROGMEM Language_Str MSG_PREHEAT_2_END_E4                = _UxGT("Precalentar ") PREHEAT_2_LABEL _UxGT(" Fin ") LCD_STR_N4;
  PROGMEM Language_Str MSG_PREHEAT_2_END_E5                = _UxGT("Precalentar ") PREHEAT_2_LABEL _UxGT(" Fin ") LCD_STR_N5;
  PROGMEM Language_Str MSG_PREHEAT_2_ALL                   = _UxGT("Precalentar ") PREHEAT_2_LABEL _UxGT(" Todo");
  PROGMEM Language_Str MSG_PREHEAT_2_BEDONLY               = _UxGT("Precalentar ") PREHEAT_2_LABEL _UxGT(" Cama");
  PROGMEM Language_Str MSG_PREHEAT_2_SETTINGS              = _UxGT("Precalentar ") PREHEAT_2_LABEL _UxGT(" Ajuste");
  PROGMEM Language_Str MSG_PREHEAT_CUSTOM                  = _UxGT("Precalen. Personali.");
  PROGMEM Language_Str MSG_COOLDOWN                        = _UxGT("Enfriar");
  PROGMEM Language_Str MSG_LASER_MENU                      = _UxGT("Control Láser");
  PROGMEM Language_Str MSG_LASER_OFF                       = _UxGT("Láser Apagado");
  PROGMEM Language_Str MSG_LASER_ON                        = _UxGT("Láser Encendido");
  PROGMEM Language_Str MSG_LASER_POWER                     = _UxGT("Potencia Láser");
  PROGMEM Language_Str MSG_SPINDLE_MENU                    = _UxGT("Control Mandrino");
  PROGMEM Language_Str MSG_SPINDLE_OFF                     = _UxGT("Mandrino Apagado");
  PROGMEM Language_Str MSG_SPINDLE_ON                      = _UxGT("Mandrino Encendido");
  PROGMEM Language_Str MSG_SPINDLE_POWER                   = _UxGT("Potencia Mandrino");
  PROGMEM Language_Str MSG_SPINDLE_REVERSE                 = _UxGT("Invertir giro");
  PROGMEM Language_Str MSG_SWITCH_PS_ON                    = _UxGT("Encender Fuente");
  PROGMEM Language_Str MSG_SWITCH_PS_OFF                   = _UxGT("Apagar Fuente");
  PROGMEM Language_Str MSG_EXTRUDE                         = _UxGT("Extruir");
  PROGMEM Language_Str MSG_RETRACT                         = _UxGT("Retraer");
  PROGMEM Language_Str MSG_MOVE_AXIS                       = _UxGT("Mover ejes");
  PROGMEM Language_Str MSG_BED_LEVELING                    = _UxGT("Nivelando Cama");
  PROGMEM Language_Str MSG_LEVEL_BED                       = _UxGT("Nivelar Cama");
  PROGMEM Language_Str MSG_LEVEL_CORNERS                   = _UxGT("Nivelar Esquinas");
  PROGMEM Language_Str MSG_NEXT_CORNER                     = _UxGT("Siguente Esquina");
  PROGMEM Language_Str MSG_MESH_EDITOR                     = _UxGT("Editor Mallado");
  PROGMEM Language_Str MSG_EDIT_MESH                       = _UxGT("Editar Mallado");
  PROGMEM Language_Str MSG_EDITING_STOPPED                 = _UxGT("Ed. Mallado parada");
  PROGMEM Language_Str MSG_PROBING_MESH                    = _UxGT("Sondear Punto");
  PROGMEM Language_Str MSG_MESH_X                          = _UxGT("Índice X");
  PROGMEM Language_Str MSG_MESH_Y                          = _UxGT("Índice Y");
  PROGMEM Language_Str MSG_MESH_EDIT_Z                     = _UxGT("Valor Z");
  PROGMEM Language_Str MSG_USER_MENU                       = _UxGT("Comandos Personaliz.");
  PROGMEM Language_Str MSG_M48_TEST                        = _UxGT("M48 Probar Sonda");
  PROGMEM Language_Str MSG_M48_POINT                       = _UxGT("M48 Punto");
  PROGMEM Language_Str MSG_M48_DEVIATION                   = _UxGT("Desviación");
  PROGMEM Language_Str MSG_IDEX_MENU                       = _UxGT("Modo IDEX");
  PROGMEM Language_Str MSG_OFFSETS_MENU                    = _UxGT("Desfase Boquillas");
  PROGMEM Language_Str MSG_IDEX_MODE_AUTOPARK              = _UxGT("Auto-Aparcado");
  PROGMEM Language_Str MSG_IDEX_MODE_DUPLICATE             = _UxGT("Duplicar");
  PROGMEM Language_Str MSG_IDEX_MODE_MIRRORED_COPY         = _UxGT("Copia Reflejada");
  PROGMEM Language_Str MSG_IDEX_MODE_FULL_CTRL             = _UxGT("Control Total");
  PROGMEM Language_Str MSG_HOTEND_OFFSET_X                 = _UxGT("2ª Boquilla X");
  PROGMEM Language_Str MSG_HOTEND_OFFSET_Y                 = _UxGT("2ª Boquilla Y");
  PROGMEM Language_Str MSG_HOTEND_OFFSET_Z                 = _UxGT("2ª Boquilla Z");
  PROGMEM Language_Str MSG_UBL_DOING_G29                   = _UxGT("Hacer G29");
  PROGMEM Language_Str MSG_UBL_TOOLS                       = _UxGT("Herramientas UBL");
  PROGMEM Language_Str MSG_UBL_LEVEL_BED                   = _UxGT("Nivel.Cama.Uni.(UBL)");
  PROGMEM Language_Str MSG_LCD_TILTING_MESH                = _UxGT("Punto de inclinación");
  PROGMEM Language_Str MSG_UBL_MANUAL_MESH                 = _UxGT("Crear Mallado man.");
  PROGMEM Language_Str MSG_UBL_BC_INSERT                   = _UxGT("Colocar cuña y Medir");
  PROGMEM Language_Str MSG_UBL_BC_INSERT2                  = _UxGT("Medir");
  PROGMEM Language_Str MSG_UBL_BC_REMOVE                   = _UxGT("Retirar y Medir Cama");
  PROGMEM Language_Str MSG_UBL_MOVING_TO_NEXT              = _UxGT("Mover al Siguente");
  PROGMEM Language_Str MSG_UBL_ACTIVATE_MESH               = _UxGT("Activar UBL");
  PROGMEM Language_Str MSG_UBL_DEACTIVATE_MESH             = _UxGT("Desactivar UBL");
  PROGMEM Language_Str MSG_UBL_SET_TEMP_BED                = _UxGT("Temp. Cama");
  PROGMEM Language_Str MSG_UBL_BED_TEMP_CUSTOM             = _UxGT("Bed Temp");
  PROGMEM Language_Str MSG_UBL_SET_TEMP_HOTEND             = _UxGT ("Hotend Temp");
  PROGMEM Language_Str MSG_UBL_HOTEND_TEMP_CUSTOM          = _UxGT("Hotend Temp");
  PROGMEM Language_Str MSG_UBL_MESH_EDIT                   = _UxGT("Editar Mallado");
  PROGMEM Language_Str MSG_UBL_EDIT_CUSTOM_MESH            = _UxGT("Edit. Mallado perso.");
  PROGMEM Language_Str MSG_UBL_FINE_TUNE_MESH              = _UxGT("Ajuste fino Mallado");
  PROGMEM Language_Str MSG_UBL_DONE_EDITING_MESH           = _UxGT("Term. edici. Mallado");
  PROGMEM Language_Str MSG_UBL_BUILD_CUSTOM_MESH           = _UxGT("Crear Mallado Perso.");
  PROGMEM Language_Str MSG_UBL_BUILD_MESH_MENU             = _UxGT("Crear Mallado");
  PROGMEM Language_Str MSG_UBL_BUILD_MESH_M1               = _UxGT("Crear Mallado (") PREHEAT_1_LABEL _UxGT(")");
  PROGMEM Language_Str MSG_UBL_BUILD_MESH_M2               = _UxGT("Crear Mallado (") PREHEAT_2_LABEL _UxGT(")");
  PROGMEM Language_Str MSG_UBL_BUILD_COLD_MESH             = _UxGT("Crear Mallado Frío");
  PROGMEM Language_Str MSG_UBL_MESH_HEIGHT_ADJUST          = _UxGT("Ajustar alt. Mallado");
  PROGMEM Language_Str MSG_UBL_MESH_HEIGHT_AMOUNT          = _UxGT("Cantidad de altura");
  PROGMEM Language_Str MSG_UBL_VALIDATE_MESH_MENU          = _UxGT("Validar Mallado");
  PROGMEM Language_Str MSG_UBL_VALIDATE_MESH_M1            = _UxGT("Validar Mallado (") PREHEAT_1_LABEL _UxGT(")");
  PROGMEM Language_Str MSG_UBL_VALIDATE_MESH_M2            = _UxGT("Validar Mallado (") PREHEAT_2_LABEL _UxGT(")");
  PROGMEM Language_Str MSG_UBL_VALIDATE_CUSTOM_MESH        = _UxGT("Vali. Mallado perso.");
  PROGMEM Language_Str MSG_G26_HEATING_BED                 = _UxGT("G26 Calentando Cama");
  PROGMEM Language_Str MSG_G26_HEATING_NOZZLE              = _UxGT("G26 Calent. Boquilla");
  PROGMEM Language_Str MSG_G26_MANUAL_PRIME                = _UxGT("Imprimado manual...");
  PROGMEM Language_Str MSG_G26_FIXED_LENGTH                = _UxGT("Impri. longit. fija");
  PROGMEM Language_Str MSG_G26_PRIME_DONE                  = _UxGT("Imprimación Lista");
  PROGMEM Language_Str MSG_G26_CANCELED                    = _UxGT("G26 Cancelado");
  PROGMEM Language_Str MSG_G26_LEAVING                     = _UxGT("Dejando G26");
  PROGMEM Language_Str MSG_UBL_CONTINUE_MESH               = _UxGT("Contin. Mallado cama");
  PROGMEM Language_Str MSG_UBL_MESH_LEVELING               = _UxGT("Nivelando Mallado");
  PROGMEM Language_Str MSG_UBL_3POINT_MESH_LEVELING        = _UxGT("Nivelando 3Puntos");
  PROGMEM Language_Str MSG_UBL_GRID_MESH_LEVELING          = _UxGT("Nivel. Mallado cuad.");
  PROGMEM Language_Str MSG_UBL_MESH_LEVEL                  = _UxGT("Nivel de Mallado");
  PROGMEM Language_Str MSG_UBL_SIDE_POINTS                 = _UxGT("Puntos Laterales");
  PROGMEM Language_Str MSG_UBL_MAP_TYPE                    = _UxGT("Tipo de mapa ");
  PROGMEM Language_Str MSG_UBL_OUTPUT_MAP                  = _UxGT("Salida Mapa mallado");
  PROGMEM Language_Str MSG_UBL_OUTPUT_MAP_HOST             = _UxGT("Salida para el host");
  PROGMEM Language_Str MSG_UBL_OUTPUT_MAP_CSV              = _UxGT("Salida para CSV");
  PROGMEM Language_Str MSG_UBL_OUTPUT_MAP_BACKUP           = _UxGT("Off Printer Backup");
  PROGMEM Language_Str MSG_UBL_INFO_UBL                    = _UxGT("Salida Info. UBL");
  PROGMEM Language_Str MSG_UBL_FILLIN_AMOUNT               = _UxGT("Cantidad de relleno");
  PROGMEM Language_Str MSG_UBL_MANUAL_FILLIN               = _UxGT("Relleno manual");
  PROGMEM Language_Str MSG_UBL_SMART_FILLIN                = _UxGT("Relleno inteligente");
  PROGMEM Language_Str MSG_UBL_FILLIN_MESH                 = _UxGT("Mallado de relleno");
  PROGMEM Language_Str MSG_UBL_INVALIDATE_ALL              = _UxGT("Invalidar todo");
  PROGMEM Language_Str MSG_UBL_INVALIDATE_CLOSEST          = _UxGT("Invalidar proximos");
  PROGMEM Language_Str MSG_UBL_FINE_TUNE_ALL               = _UxGT("Ajustar Fino Todo");
  PROGMEM Language_Str MSG_UBL_FINE_TUNE_CLOSEST           = _UxGT("Ajustar Fino proxi.");
  PROGMEM Language_Str MSG_UBL_STORAGE_MESH_MENU           = _UxGT("Almacen de Mallado");
  PROGMEM Language_Str MSG_UBL_STORAGE_SLOT                = _UxGT("Huecos de memoria");
  PROGMEM Language_Str MSG_UBL_LOAD_MESH                   = _UxGT("Cargar Mallado cama");
  PROGMEM Language_Str MSG_UBL_SAVE_MESH                   = _UxGT("Guardar Mallado cama");
  PROGMEM Language_Str MSG_MESH_LOADED                     = _UxGT("M117 Mallado %i Cargado");
  PROGMEM Language_Str MSG_MESH_SAVED                      = _UxGT("M117 Mallado %i Guardado");
  PROGMEM Language_Str MSG_UBL_NO_STORAGE                  = _UxGT("Sin guardar");
  PROGMEM Language_Str MSG_UBL_SAVE_ERROR                  = _UxGT("Error: Guardar UBL");
  PROGMEM Language_Str MSG_UBL_RESTORE_ERROR               = _UxGT("Error: Restaurar UBL");
  PROGMEM Language_Str MSG_UBL_Z_OFFSET                    = _UxGT("Desfase de Z: ");
  PROGMEM Language_Str MSG_UBL_Z_OFFSET_STOPPED            = _UxGT("Desfase de Z Parado");
  PROGMEM Language_Str MSG_UBL_STEP_BY_STEP_MENU           = _UxGT("UBL Paso a Paso");
  PROGMEM Language_Str MSG_UBL_1_BUILD_COLD_MESH           = _UxGT("1.Crear Mallado Frío");
  PROGMEM Language_Str MSG_UBL_2_SMART_FILLIN              = _UxGT("2.Relleno inteligente");
  PROGMEM Language_Str MSG_UBL_3_VALIDATE_MESH_MENU        = _UxGT("3.Validar Mallado");
  PROGMEM Language_Str MSG_UBL_4_FINE_TUNE_ALL             = _UxGT("4.Ajustar Fino Todo");
  PROGMEM Language_Str MSG_UBL_5_VALIDATE_MESH_MENU        = _UxGT("5.Validar Mallado");
  PROGMEM Language_Str MSG_UBL_6_FINE_TUNE_ALL             = _UxGT("6.Ajustar Fino Todo");
  PROGMEM Language_Str MSG_UBL_7_SAVE_MESH                 = _UxGT("7.Guardar Mallado cama");

#define MSG_INFO_MIN_TEMP                   _UxGT("Temperatura mínima")
#define MSG_INFO_MAX_TEMP                   _UxGT("Temperatura máxima")
#define MSG_INFO_PSU                        _UxGT("Fuente de poder")
#define MSG_DRIVE_STRENGTH                  _UxGT("Potencia driver")
#define MSG_DAC_PERCENT                     _UxGT("Driver %")
#define MSG_DAC_EEPROM_WRITE                _UxGT("Escribe DAC EEPROM")

#define MSG_FILAMENT_CHANGE_HEADER          _UxGT("IMPR. PAUSADA")
#define MSG_FILAMENT_CHANGE_OPTION_HEADER   _UxGT("OPC. REINICIO:")
#define MSG_FILAMENT_CHANGE_OPTION_EXTRUDE  _UxGT("Extruir más")
#define MSG_FILAMENT_CHANGE_OPTION_RESUME   _UxGT("Resumir imp.")

#define MSG_FILAMENT_CHANGE_MINTEMP         _UxGT("Temp Mínima es ")
#define MSG_FILAMENT_CHANGE_NOZZLE          _UxGT("  Boquilla: ")

#define MSG_FILAMENT_CHANGE_INIT_1          _UxGT("Esperando para")

#define MSG_FILAMENT_CHANGE_INSERT_1        _UxGT("Inserte el filamento")
#define MSG_FILAMENT_CHANGE_INSERT_2        _UxGT("y presione el botón")

#if LCD_HEIGHT >= 4
  // Up to 3 lines allowed
  #define MSG_FILAMENT_CHANGE_INIT_2        _UxGT("iniciar cambio")
  #define MSG_FILAMENT_CHANGE_INIT_3        _UxGT("de filamento")
  #define MSG_FILAMENT_CHANGE_INSERT_3      _UxGT("para continuar...")
#else // LCD_HEIGHT < 4
  // Up to 2 lines allowed
  #define MSG_FILAMENT_CHANGE_INIT_2        _UxGT("iniciar cambio fil.")
#endif // LCD_HEIGHT < 4

#define MSG_FILAMENT_CHANGE_UNLOAD_1        _UxGT("Esperando para")
#define MSG_FILAMENT_CHANGE_UNLOAD_2        _UxGT("expulsar filamento")
#define MSG_FILAMENT_CHANGE_LOAD_1          _UxGT("Esperado para")
#define MSG_FILAMENT_CHANGE_LOAD_2          _UxGT("cargar el filamento")
#define MSG_FILAMENT_CHANGE_RESUME_1        _UxGT("Esperando imp.")
#define MSG_FILAMENT_CHANGE_RESUME_2        _UxGT("para resumir")
#define MSG_FILAMENT_CHANGE_HEAT_1          _UxGT("Oprima botón para")
#define MSG_FILAMENT_CHANGE_HEAT_2          _UxGT("Calentar la boquilla")
#define MSG_FILAMENT_CHANGE_HEATING_1       _UxGT("Calentando boquilla")
#define MSG_FILAMENT_CHANGE_HEATING_2       _UxGT("Espere por favor")
