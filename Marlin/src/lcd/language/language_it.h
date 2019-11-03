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
 * Italian
 *
 * LCD Menu Messages
 * See also http://marlinfw.org/docs/development/lcd_language.html
 *
 */

#define DISPLAY_CHARSET_ISO10646_1

#define WELCOME_MSG                         MACHINE_NAME _UxGT(" pronto.")
#define MSG_YES                             _UxGT("SI")
#define MSG_NO                              _UxGT("NO")
#define MSG_BACK                            _UxGT("Indietro")
#define MSG_SD_INSERTED                     _UxGT("SD Card inserita")
#define MSG_SD_REMOVED                      _UxGT("SD Card rimossa")
#define MSG_SD_RELEASED                     _UxGT("SD Card rilasciata")
#define MSG_LCD_ENDSTOPS                    _UxGT("Finecor.") // Max 8 caratteri
#define MSG_LCD_SOFT_ENDSTOPS               _UxGT("Finecorsa Soft")
#define MSG_MAIN                            _UxGT("Menu principale")
#define MSG_ADVANCED_SETTINGS               _UxGT("Impostaz. avanzate")
#define MSG_CONFIGURATION                   _UxGT("Configurazione")
#define MSG_AUTOSTART                       _UxGT("Autostart")
#define MSG_DISABLE_STEPPERS                _UxGT("Disabilita Motori")
#define MSG_DEBUG_MENU                      _UxGT("Menu di debug")
#define MSG_PROGRESS_BAR_TEST               _UxGT("Test barra avanzam.")
#define MSG_AUTO_HOME                       _UxGT("Auto Home")
#define MSG_AUTO_HOME_X                     _UxGT("Home asse X")
#define MSG_AUTO_HOME_Y                     _UxGT("Home asse Y")
#define MSG_AUTO_HOME_Z                     _UxGT("Home asse Z")
#define MSG_AUTO_Z_ALIGN                    _UxGT("Allineam.automat. Z")
#define MSG_LEVEL_BED_HOMING                _UxGT("Home assi XYZ")
#define MSG_LEVEL_BED_WAITING               _UxGT("Premi per iniziare")
#define MSG_LEVEL_BED_NEXT_POINT            _UxGT("Punto successivo")
#define MSG_LEVEL_BED_DONE                  _UxGT("Livel. terminato!")
#define MSG_Z_FADE_HEIGHT                   _UxGT("Fade Height")
#define MSG_SET_HOME_OFFSETS                _UxGT("Imp. offset home")
#define MSG_HOME_OFFSETS_APPLIED            _UxGT("Offset applicato")
#define MSG_SET_ORIGIN                      _UxGT("Imposta Origine")
#define MSG_PREHEAT_1                       _UxGT("Preriscalda " PREHEAT_1_LABEL)
#define MSG_PREHEAT_1_N                     _UxGT("Preris." PREHEAT_1_LABEL " ")
#define MSG_PREHEAT_1_ALL                   MSG_PREHEAT_1_N _UxGT("Tutto")
#define MSG_PREHEAT_1_END                   MSG_PREHEAT_1_N _UxGT("Ugello")
#define MSG_PREHEAT_1_BEDONLY               MSG_PREHEAT_1_N _UxGT("Piatto")
#define MSG_PREHEAT_1_SETTINGS              MSG_PREHEAT_1_N _UxGT("conf")
#define MSG_PREHEAT_2                       _UxGT("Preriscalda " PREHEAT_2_LABEL)
#define MSG_PREHEAT_2_N                     _UxGT("Preris." PREHEAT_2_LABEL " ")
#define MSG_PREHEAT_2_ALL                   MSG_PREHEAT_2_N _UxGT("Tutto")
#define MSG_PREHEAT_2_END                   MSG_PREHEAT_2_N _UxGT("Ugello")
#define MSG_PREHEAT_2_BEDONLY               MSG_PREHEAT_2_N _UxGT("Piatto")
#define MSG_PREHEAT_2_SETTINGS              MSG_PREHEAT_2_N _UxGT("conf")
#define MSG_PREHEAT_CUSTOM                  _UxGT("Prerisc.personal.")
#define MSG_COOLDOWN                        _UxGT("Raffredda")
#define MSG_LASER_MENU                      _UxGT("Controllo laser")
#define MSG_LASER_OFF                       _UxGT("Laser Off")
#define MSG_LASER_ON                        _UxGT("Laser On")
#define MSG_LASER_POWER                     _UxGT("Potenza laser")
#define MSG_SPINDLE_MENU                    _UxGT("Controllo mandrino")
#define MSG_SPINDLE_OFF                     _UxGT("Mandrino Off")
#define MSG_SPINDLE_ON                      _UxGT("Mandrino On")
#define MSG_SPINDLE_POWER                   _UxGT("Potenza mandrino")
#define MSG_SPINDLE_REVERSE                 _UxGT("Inverti mandrino")
#define MSG_SWITCH_PS_ON                    _UxGT("Accendi aliment.")
#define MSG_SWITCH_PS_OFF                   _UxGT("Spegni aliment.")
#define MSG_EXTRUDE                         _UxGT("Estrudi")
#define MSG_RETRACT                         _UxGT("Ritrai")
#define MSG_MOVE_AXIS                       _UxGT("Muovi Asse")
#define MSG_BED_LEVELING                    _UxGT("Livella piano")
#define MSG_LEVEL_BED                       MSG_BED_LEVELING
#define MSG_LEVEL_CORNERS                   _UxGT("Livella spigoli")
#define MSG_NEXT_CORNER                     _UxGT("Prossimo spigolo")
#define MSG_EDITING_STOPPED                 _UxGT("Modif. Mesh Fermata")
#define MSG_PROBING_MESH                    _UxGT("Punto sondato")
#define MSG_MESH_X                          _UxGT("Indice X")
#define MSG_MESH_Y                          _UxGT("Indice Y")
#define MSG_MESH_EDIT_Z                     _UxGT("Valore di Z")
#define MSG_USER_MENU                       _UxGT("Comandi personaliz.")
#define MSG_UBL_DOING_G29                   _UxGT("G29 in corso")
#define MSG_UBL_UNHOMED                     _UxGT("Home XYZ prima")
#define MSG_UBL_TOOLS                       _UxGT("Strumenti UBL")
#define MSG_UBL_LEVEL_BED                   _UxGT("Unified Bed Leveling")
#define MSG_LCD_TILTING_MESH                _UxGT("Punto inclinaz.")
#define MSG_M48_TEST                        _UxGT("Test sonda M48")
#define MSG_M48_DEVIATION                   _UxGT("Deviazione")
#define MSG_IDEX_MENU                       _UxGT("Modo IDEX")
#define MSG_OFFSETS_MENU                    _UxGT("Strumenti Offsets")
#define MSG_IDEX_MODE_AUTOPARK              _UxGT("Auto-Park")
#define MSG_IDEX_MODE_DUPLICATE             _UxGT("Duplicazione")
#define MSG_IDEX_MODE_MIRRORED_COPY         _UxGT("Copia speculare")
#define MSG_IDEX_MODE_FULL_CTRL             _UxGT("Pieno controllo")
#define MSG_X_OFFSET                        _UxGT("2° ugello X")
#define MSG_Y_OFFSET                        _UxGT("2° ugello Y")
#define MSG_Z_OFFSET                        _UxGT("2° ugello Z")
#define MSG_UBL_MANUAL_MESH                 _UxGT("Mesh Manuale")
#define MSG_UBL_BC_INSERT                   _UxGT("Metti spes. e misura")
#define MSG_UBL_BC_INSERT2                  _UxGT("Misura")
#define MSG_UBL_BC_REMOVE                   _UxGT("Rimuovi e mis.piatto")
#define MSG_UBL_MOVING_TO_NEXT              _UxGT("Spostamento succes.")
#define MSG_UBL_ACTIVATE_MESH               _UxGT("Attiva UBL")
#define MSG_UBL_DEACTIVATE_MESH             _UxGT("Disattiva UBL")
#define MSG_UBL_SET_TEMP_BED                _UxGT("Temp. Piatto")
#define MSG_UBL_BED_TEMP_CUSTOM             MSG_UBL_SET_TEMP_BED
#define MSG_UBL_SET_TEMP_HOTEND             _UxGT("Temp. Ugello")
#define MSG_UBL_HOTEND_TEMP_CUSTOM          MSG_UBL_SET_TEMP_HOTEND
#define MSG_UBL_MESH_EDIT                   _UxGT("Modifica Mesh")
#define MSG_UBL_EDIT_CUSTOM_MESH            _UxGT("Modif.Mesh personal.")
#define MSG_UBL_FINE_TUNE_MESH              _UxGT("Ritocca Mesh")
#define MSG_UBL_DONE_EDITING_MESH           _UxGT("Modif.Mesh fatta")
#define MSG_UBL_BUILD_CUSTOM_MESH           _UxGT("Crea Mesh personal.")
#define MSG_UBL_BUILD_MESH_MENU             _UxGT("Crea Mesh")
#define MSG_UBL_BUILD_MESH_M1               _UxGT("Crea Mesh " PREHEAT_1_LABEL)
#define MSG_UBL_BUILD_MESH_M2               _UxGT("Crea Mesh " PREHEAT_2_LABEL)
#define MSG_UBL_BUILD_COLD_MESH             _UxGT("Crea Mesh a freddo")
#define MSG_UBL_MESH_HEIGHT_ADJUST          _UxGT("Aggiusta Alt. Mesh")
#define MSG_UBL_MESH_HEIGHT_AMOUNT          _UxGT("Altezza")
#define MSG_UBL_VALIDATE_MESH_MENU          _UxGT("Valida Mesh")
#define MSG_UBL_VALIDATE_MESH_M1            _UxGT("Valida Mesh " PREHEAT_1_LABEL)
#define MSG_UBL_VALIDATE_MESH_M2            _UxGT("Valida Mesh " PREHEAT_2_LABEL)
#define MSG_UBL_VALIDATE_CUSTOM_MESH        _UxGT("Valida Mesh pers.")
#define MSG_UBL_CONTINUE_MESH               _UxGT("Continua Mesh")
#define MSG_UBL_MESH_LEVELING               _UxGT("Livell. Mesh")
#define MSG_UBL_3POINT_MESH_LEVELING        _UxGT("Livell. 3 Punti")
#define MSG_UBL_GRID_MESH_LEVELING          _UxGT("Livell. Griglia Mesh")
#define MSG_UBL_MESH_LEVEL                  _UxGT("Livella Mesh")
#define MSG_UBL_SIDE_POINTS                 _UxGT("Punti laterali")
#define MSG_UBL_MAP_TYPE                    _UxGT("Tipo di Mappa")
#define MSG_UBL_OUTPUT_MAP                  _UxGT("Esporta Mappa")
#define MSG_UBL_OUTPUT_MAP_HOST             _UxGT("Esporta per Host")
#define MSG_UBL_OUTPUT_MAP_CSV              _UxGT("Esporta in CSV")
#define MSG_UBL_OUTPUT_MAP_BACKUP           _UxGT("Backup esterno")
#define MSG_UBL_INFO_UBL                    _UxGT("Esporta Info UBL")
#define MSG_EDIT_MESH                       _UxGT("Modifica Mesh")
#define MSG_UBL_FILLIN_AMOUNT               _UxGT("Riempimento")
#define MSG_UBL_MANUAL_FILLIN               _UxGT("Riempimento Manuale")
#define MSG_UBL_SMART_FILLIN                _UxGT("Riempimento Smart")
#define MSG_UBL_FILLIN_MESH                 _UxGT("Riempimento Mesh")
#define MSG_UBL_INVALIDATE_ALL              _UxGT("Invalida Tutto")
#define MSG_UBL_INVALIDATE_CLOSEST          _UxGT("Invalid.Punto Vicino")
#define MSG_UBL_FINE_TUNE_ALL               _UxGT("Ritocca All")
#define MSG_UBL_FINE_TUNE_CLOSEST           _UxGT("Ritocca Punto Vicino")
#define MSG_UBL_STORAGE_MESH_MENU           _UxGT("Mesh Salvate")
#define MSG_UBL_STORAGE_SLOT                _UxGT("Slot di memoria")
#define MSG_UBL_LOAD_MESH                   _UxGT("Carica Mesh Piatto")
#define MSG_UBL_SAVE_MESH                   _UxGT("Salva Mesh Piatto")
#define MSG_MESH_LOADED                     _UxGT("Mesh %i caricata")
#define MSG_MESH_SAVED                      _UxGT("Mesh %i salvata")
#define MSG_NO_STORAGE                      _UxGT("Nessuna memoria")
#define MSG_UBL_SAVE_ERROR                  _UxGT("Err: Salvataggio UBL")
#define MSG_UBL_RESTORE_ERROR               _UxGT("Err: Ripristino UBL")
#define MSG_UBL_Z_OFFSET_STOPPED            _UxGT("Z-Offset Fermato")
#define MSG_UBL_STEP_BY_STEP_MENU           _UxGT("UBL passo passo")

#define MSG_LED_CONTROL                     _UxGT("Controllo LED")
#define MSG_LEDS                            _UxGT("Luci")
#define MSG_LED_PRESETS                     _UxGT("Preset luce")
#define MSG_SET_LEDS_RED                    _UxGT("Rosso")
#define MSG_SET_LEDS_ORANGE                 _UxGT("Arancione")
#define MSG_SET_LEDS_YELLOW                 _UxGT("Giallo")
#define MSG_SET_LEDS_GREEN                  _UxGT("Verde")
#define MSG_SET_LEDS_BLUE                   _UxGT("Blu")
#define MSG_SET_LEDS_INDIGO                 _UxGT("Indaco")
#define MSG_SET_LEDS_VIOLET                 _UxGT("Viola")
#define MSG_SET_LEDS_WHITE                  _UxGT("Bianco")
#define MSG_SET_LEDS_DEFAULT                _UxGT("Predefinito")
#define MSG_CUSTOM_LEDS                     _UxGT("Luci personalizzate")
#define MSG_INTENSITY_R                     _UxGT("Intensità rosso")
#define MSG_INTENSITY_G                     _UxGT("Intensità verde")
#define MSG_INTENSITY_B                     _UxGT("Intensità blu")
#define MSG_INTENSITY_W                     _UxGT("Intensità bianco")
#define MSG_LED_BRIGHTNESS                  _UxGT("Luminosità")

  PROGMEM Language_Str WELCOME_MSG                         = MACHINE_NAME _UxGT(" pronto.");
  PROGMEM Language_Str MSG_YES                             = _UxGT("SI");
  PROGMEM Language_Str MSG_NO                              = _UxGT("NO");
  PROGMEM Language_Str MSG_BACK                            = _UxGT("Indietro");
  PROGMEM Language_Str MSG_MEDIA_ABORTING                  = _UxGT("Annullando...");
  PROGMEM Language_Str MSG_MEDIA_INSERTED                  = _UxGT("Media inserito");
  PROGMEM Language_Str MSG_MEDIA_REMOVED                   = _UxGT("Media rimosso");
  PROGMEM Language_Str MSG_MEDIA_RELEASED                  = _UxGT("Media rilasciato");
  PROGMEM Language_Str MSG_MEDIA_WAITING                   = _UxGT("Aspettando media");
  PROGMEM Language_Str MSG_MEDIA_READ_ERROR                = _UxGT("Err.leggendo media");
  PROGMEM Language_Str MSG_MEDIA_USB_REMOVED               = _UxGT("Dispos.USB rimosso");
  PROGMEM Language_Str MSG_MEDIA_USB_FAILED                = _UxGT("Avvio USB fallito");
  PROGMEM Language_Str MSG_LCD_ENDSTOPS                    = _UxGT("Finecor."); // Max 8 characters
  PROGMEM Language_Str MSG_LCD_SOFT_ENDSTOPS               = _UxGT("Finecorsa Soft");
  PROGMEM Language_Str MSG_MAIN                            = _UxGT("Menu principale");
  PROGMEM Language_Str MSG_ADVANCED_SETTINGS               = _UxGT("Impostaz. avanzate");
  PROGMEM Language_Str MSG_CONFIGURATION                   = _UxGT("Configurazione");
  PROGMEM Language_Str MSG_AUTOSTART                       = _UxGT("Autostart");
  PROGMEM Language_Str MSG_DISABLE_STEPPERS                = _UxGT("Disabilita Motori");
  PROGMEM Language_Str MSG_DEBUG_MENU                      = _UxGT("Menu di debug");
  PROGMEM Language_Str MSG_PROGRESS_BAR_TEST               = _UxGT("Test barra avanzam.");
  PROGMEM Language_Str MSG_AUTO_HOME                       = _UxGT("Auto Home");
  PROGMEM Language_Str MSG_AUTO_HOME_X                     = _UxGT("Home asse X");
  PROGMEM Language_Str MSG_AUTO_HOME_Y                     = _UxGT("Home asse Y");
  PROGMEM Language_Str MSG_AUTO_HOME_Z                     = _UxGT("Home asse Z");
  PROGMEM Language_Str MSG_AUTO_Z_ALIGN                    = _UxGT("Allineam.automat. Z");
  PROGMEM Language_Str MSG_LEVEL_BED_HOMING                = _UxGT("Home assi XYZ");
  PROGMEM Language_Str MSG_LEVEL_BED_WAITING               = _UxGT("Premi per iniziare");
  PROGMEM Language_Str MSG_LEVEL_BED_NEXT_POINT            = _UxGT("Punto successivo");
  PROGMEM Language_Str MSG_LEVEL_BED_DONE                  = _UxGT("Livel. terminato!");
  PROGMEM Language_Str MSG_Z_FADE_HEIGHT                   = _UxGT("Fade Height");
  PROGMEM Language_Str MSG_SET_HOME_OFFSETS                = _UxGT("Imp. offset home");
  PROGMEM Language_Str MSG_HOME_OFFSETS_APPLIED            = _UxGT("Offset applicato");
  PROGMEM Language_Str MSG_SET_ORIGIN                      = _UxGT("Imposta Origine");
  PROGMEM Language_Str MSG_PREHEAT_1                       = _UxGT("Preriscalda ") PREHEAT_1_LABEL;
  PROGMEM Language_Str MSG_PREHEAT_1_H0                    = _UxGT("Preriscalda ") PREHEAT_1_LABEL " " LCD_STR_N0;
  PROGMEM Language_Str MSG_PREHEAT_1_H1                    = _UxGT("Preriscalda ") PREHEAT_1_LABEL " " LCD_STR_N1;
  PROGMEM Language_Str MSG_PREHEAT_1_H2                    = _UxGT("Preriscalda ") PREHEAT_1_LABEL " " LCD_STR_N2;
  PROGMEM Language_Str MSG_PREHEAT_1_H3                    = _UxGT("Preriscalda ") PREHEAT_1_LABEL " " LCD_STR_N3;
  PROGMEM Language_Str MSG_PREHEAT_1_H4                    = _UxGT("Preriscalda ") PREHEAT_1_LABEL " " LCD_STR_N4;
  PROGMEM Language_Str MSG_PREHEAT_1_H5                    = _UxGT("Preriscalda ") PREHEAT_1_LABEL " " LCD_STR_N5;
  PROGMEM Language_Str MSG_PREHEAT_1_END                   = _UxGT("Preris.") PREHEAT_1_LABEL _UxGT(" Ugello");
  PROGMEM Language_Str MSG_PREHEAT_1_END_E0                = _UxGT("Preris.") PREHEAT_1_LABEL _UxGT(" Ugello ") LCD_STR_N0;
  PROGMEM Language_Str MSG_PREHEAT_1_END_E1                = _UxGT("Preris.") PREHEAT_1_LABEL _UxGT(" Ugello ") LCD_STR_N1;
  PROGMEM Language_Str MSG_PREHEAT_1_END_E2                = _UxGT("Preris.") PREHEAT_1_LABEL _UxGT(" Ugello ") LCD_STR_N2;
  PROGMEM Language_Str MSG_PREHEAT_1_END_E3                = _UxGT("Preris.") PREHEAT_1_LABEL _UxGT(" Ugello ") LCD_STR_N3;
  PROGMEM Language_Str MSG_PREHEAT_1_END_E4                = _UxGT("Preris.") PREHEAT_1_LABEL _UxGT(" Ugello ") LCD_STR_N4;
  PROGMEM Language_Str MSG_PREHEAT_1_END_E5                = _UxGT("Preris.") PREHEAT_1_LABEL _UxGT(" Ugello ") LCD_STR_N5;
  PROGMEM Language_Str MSG_PREHEAT_1_ALL                   = _UxGT("Preris.") PREHEAT_1_LABEL _UxGT(" Tutto");
  PROGMEM Language_Str MSG_PREHEAT_1_BEDONLY               = _UxGT("Preris.") PREHEAT_1_LABEL _UxGT(" Piatto");
  PROGMEM Language_Str MSG_PREHEAT_1_SETTINGS              = _UxGT("Preris.") PREHEAT_1_LABEL _UxGT(" conf");
  PROGMEM Language_Str MSG_PREHEAT_2                       = _UxGT("Preriscalda ") PREHEAT_2_LABEL;
  PROGMEM Language_Str MSG_PREHEAT_2_H0                    = _UxGT("Preriscalda ") PREHEAT_2_LABEL " " LCD_STR_N0;
  PROGMEM Language_Str MSG_PREHEAT_2_H1                    = _UxGT("Preriscalda ") PREHEAT_2_LABEL " " LCD_STR_N1;
  PROGMEM Language_Str MSG_PREHEAT_2_H2                    = _UxGT("Preriscalda ") PREHEAT_2_LABEL " " LCD_STR_N2;
  PROGMEM Language_Str MSG_PREHEAT_2_H3                    = _UxGT("Preriscalda ") PREHEAT_2_LABEL " " LCD_STR_N3;
  PROGMEM Language_Str MSG_PREHEAT_2_H4                    = _UxGT("Preriscalda ") PREHEAT_2_LABEL " " LCD_STR_N4;
  PROGMEM Language_Str MSG_PREHEAT_2_H5                    = _UxGT("Preriscalda ") PREHEAT_2_LABEL " " LCD_STR_N5;
  PROGMEM Language_Str MSG_PREHEAT_2_END                   = _UxGT("Preris.") PREHEAT_2_LABEL _UxGT(" Ugello");
  PROGMEM Language_Str MSG_PREHEAT_2_END_E0                = _UxGT("Preris.") PREHEAT_2_LABEL _UxGT(" Ugello ") LCD_STR_N0;
  PROGMEM Language_Str MSG_PREHEAT_2_END_E1                = _UxGT("Preris.") PREHEAT_2_LABEL _UxGT(" Ugello ") LCD_STR_N1;
  PROGMEM Language_Str MSG_PREHEAT_2_END_E2                = _UxGT("Preris.") PREHEAT_2_LABEL _UxGT(" Ugello ") LCD_STR_N2;
  PROGMEM Language_Str MSG_PREHEAT_2_END_E3                = _UxGT("Preris.") PREHEAT_2_LABEL _UxGT(" Ugello ") LCD_STR_N3;
  PROGMEM Language_Str MSG_PREHEAT_2_END_E4                = _UxGT("Preris.") PREHEAT_2_LABEL _UxGT(" Ugello ") LCD_STR_N4;
  PROGMEM Language_Str MSG_PREHEAT_2_END_E5                = _UxGT("Preris.") PREHEAT_2_LABEL _UxGT(" Ugello ") LCD_STR_N5;
  PROGMEM Language_Str MSG_PREHEAT_2_ALL                   = _UxGT("Preris.") PREHEAT_2_LABEL _UxGT(" Tutto");
  PROGMEM Language_Str MSG_PREHEAT_2_BEDONLY               = _UxGT("Preris.") PREHEAT_2_LABEL _UxGT(" Piatto");
  PROGMEM Language_Str MSG_PREHEAT_2_SETTINGS              = _UxGT("Preris.") PREHEAT_2_LABEL _UxGT(" conf");
  PROGMEM Language_Str MSG_PREHEAT_CUSTOM                  = _UxGT("Prerisc.personal.");
  PROGMEM Language_Str MSG_COOLDOWN                        = _UxGT("Raffredda");
  PROGMEM Language_Str MSG_LASER_MENU                      = _UxGT("Controllo laser");
  PROGMEM Language_Str MSG_LASER_OFF                       = _UxGT("Laser Off");
  PROGMEM Language_Str MSG_LASER_ON                        = _UxGT("Laser On");
  PROGMEM Language_Str MSG_LASER_POWER                     = _UxGT("Potenza laser");
  PROGMEM Language_Str MSG_SPINDLE_MENU                    = _UxGT("Controllo mandrino");
  PROGMEM Language_Str MSG_SPINDLE_OFF                     = _UxGT("Mandrino Off");
  PROGMEM Language_Str MSG_SPINDLE_ON                      = _UxGT("Mandrino On");
  PROGMEM Language_Str MSG_SPINDLE_POWER                   = _UxGT("Potenza mandrino");
  PROGMEM Language_Str MSG_SPINDLE_REVERSE                 = _UxGT("Inverti mandrino");
  PROGMEM Language_Str MSG_SWITCH_PS_ON                    = _UxGT("Accendi aliment.");
  PROGMEM Language_Str MSG_SWITCH_PS_OFF                   = _UxGT("Spegni aliment.");
  PROGMEM Language_Str MSG_EXTRUDE                         = _UxGT("Estrudi");
  PROGMEM Language_Str MSG_RETRACT                         = _UxGT("Ritrai");
  PROGMEM Language_Str MSG_MOVE_AXIS                       = _UxGT("Muovi Asse");
  PROGMEM Language_Str MSG_BED_LEVELING                    = _UxGT("Livella piano");
  PROGMEM Language_Str MSG_LEVEL_BED                       = _UxGT("Livella piano");
  PROGMEM Language_Str MSG_LEVEL_CORNERS                   = _UxGT("Livella spigoli");
  PROGMEM Language_Str MSG_NEXT_CORNER                     = _UxGT("Prossimo spigolo");
  PROGMEM Language_Str MSG_MESH_EDITOR                     = _UxGT("Editor Mesh");
  PROGMEM Language_Str MSG_EDIT_MESH                       = _UxGT("Modifica Mesh");
  PROGMEM Language_Str MSG_EDITING_STOPPED                 = _UxGT("Modif. Mesh Fermata");
  PROGMEM Language_Str MSG_PROBING_MESH                    = _UxGT("Punto sondato");
  PROGMEM Language_Str MSG_MESH_X                          = _UxGT("Indice X");
  PROGMEM Language_Str MSG_MESH_Y                          = _UxGT("Indice Y");
  PROGMEM Language_Str MSG_MESH_EDIT_Z                     = _UxGT("Valore di Z");
  PROGMEM Language_Str MSG_USER_MENU                       = _UxGT("Comandi personaliz.");
  PROGMEM Language_Str MSG_LCD_TILTING_MESH                = _UxGT("Punto inclinaz.");
  PROGMEM Language_Str MSG_M48_TEST                        = _UxGT("Test sonda M48");
  PROGMEM Language_Str MSG_M48_POINT                       = _UxGT("Punto M48");
  PROGMEM Language_Str MSG_M48_DEVIATION                   = _UxGT("Deviazione");
  PROGMEM Language_Str MSG_IDEX_MENU                       = _UxGT("Modo IDEX");
  PROGMEM Language_Str MSG_OFFSETS_MENU                    = _UxGT("Strumenti Offsets");
  PROGMEM Language_Str MSG_IDEX_MODE_AUTOPARK              = _UxGT("Auto-Park");
  PROGMEM Language_Str MSG_IDEX_MODE_DUPLICATE             = _UxGT("Duplicazione");
  PROGMEM Language_Str MSG_IDEX_MODE_MIRRORED_COPY         = _UxGT("Copia speculare");
  PROGMEM Language_Str MSG_IDEX_MODE_FULL_CTRL             = _UxGT("Pieno controllo");
  PROGMEM Language_Str MSG_HOTEND_OFFSET_X                 = _UxGT("2° ugello X");
  PROGMEM Language_Str MSG_HOTEND_OFFSET_Y                 = _UxGT("2° ugello Y");
  PROGMEM Language_Str MSG_HOTEND_OFFSET_Z                 = _UxGT("2° ugello Z");
  PROGMEM Language_Str MSG_UBL_DOING_G29                   = _UxGT("G29 in corso");
  PROGMEM Language_Str MSG_UBL_TOOLS                       = _UxGT("Strumenti UBL");
  PROGMEM Language_Str MSG_UBL_LEVEL_BED                   = _UxGT("Unified Bed Leveling");
  PROGMEM Language_Str MSG_UBL_MANUAL_MESH                 = _UxGT("Mesh Manuale");
  PROGMEM Language_Str MSG_UBL_BC_INSERT                   = _UxGT("Metti spes. e misura");
  PROGMEM Language_Str MSG_UBL_BC_INSERT2                  = _UxGT("Misura");
  PROGMEM Language_Str MSG_UBL_BC_REMOVE                   = _UxGT("Rimuovi e mis.piatto");
  PROGMEM Language_Str MSG_UBL_MOVING_TO_NEXT              = _UxGT("Spostamento succes.");
  PROGMEM Language_Str MSG_UBL_ACTIVATE_MESH               = _UxGT("Attiva UBL");
  PROGMEM Language_Str MSG_UBL_DEACTIVATE_MESH             = _UxGT("Disattiva UBL");
  PROGMEM Language_Str MSG_UBL_SET_TEMP_BED                = _UxGT("Temp. Piatto");
  PROGMEM Language_Str MSG_UBL_BED_TEMP_CUSTOM             = _UxGT("Temp. Piatto");
  PROGMEM Language_Str MSG_UBL_SET_TEMP_HOTEND             = _UxGT("Temp. Ugello");
  PROGMEM Language_Str MSG_UBL_HOTEND_TEMP_CUSTOM          = _UxGT("Temp. Ugello");
  PROGMEM Language_Str MSG_UBL_MESH_EDIT                   = _UxGT("Modifica Mesh");
  PROGMEM Language_Str MSG_UBL_EDIT_CUSTOM_MESH            = _UxGT("Modif.Mesh personal.");
  PROGMEM Language_Str MSG_UBL_FINE_TUNE_MESH              = _UxGT("Ritocca Mesh");
  PROGMEM Language_Str MSG_UBL_DONE_EDITING_MESH           = _UxGT("Modif.Mesh fatta");
  PROGMEM Language_Str MSG_UBL_BUILD_CUSTOM_MESH           = _UxGT("Crea Mesh personal.");
  PROGMEM Language_Str MSG_UBL_BUILD_MESH_MENU             = _UxGT("Crea Mesh");
  PROGMEM Language_Str MSG_UBL_BUILD_MESH_M1               = _UxGT("Crea Mesh ") PREHEAT_1_LABEL;
  PROGMEM Language_Str MSG_UBL_BUILD_MESH_M2               = _UxGT("Crea Mesh ") PREHEAT_2_LABEL;
  PROGMEM Language_Str MSG_UBL_BUILD_COLD_MESH             = _UxGT("Crea Mesh a freddo");
  PROGMEM Language_Str MSG_UBL_MESH_HEIGHT_ADJUST          = _UxGT("Aggiusta Alt. Mesh");
  PROGMEM Language_Str MSG_UBL_MESH_HEIGHT_AMOUNT          = _UxGT("Altezza");
  PROGMEM Language_Str MSG_UBL_VALIDATE_MESH_MENU          = _UxGT("Valida Mesh");
  PROGMEM Language_Str MSG_UBL_VALIDATE_MESH_M1            = _UxGT("Valida Mesh ") PREHEAT_1_LABEL;
  PROGMEM Language_Str MSG_UBL_VALIDATE_MESH_M2            = _UxGT("Valida Mesh ") PREHEAT_2_LABEL;
  PROGMEM Language_Str MSG_G26_HEATING_BED                 = _UxGT("G26 riscald.letto");
  PROGMEM Language_Str MSG_G26_HEATING_NOZZLE              = _UxGT("G26 riscald.ugello");
  PROGMEM Language_Str MSG_G26_MANUAL_PRIME                = _UxGT("Priming manuale...");
  PROGMEM Language_Str MSG_G26_FIXED_LENGTH                = _UxGT("Prime a lung.fissa");
  PROGMEM Language_Str MSG_G26_PRIME_DONE                  = _UxGT("Priming terminato");
  PROGMEM Language_Str MSG_G26_CANCELED                    = _UxGT("G26 Annullato");
  PROGMEM Language_Str MSG_G26_LEAVING                     = _UxGT("Uscita da G26");
  PROGMEM Language_Str MSG_UBL_VALIDATE_CUSTOM_MESH        = _UxGT("Valida Mesh pers.");
  PROGMEM Language_Str MSG_UBL_CONTINUE_MESH               = _UxGT("Continua Mesh");
  PROGMEM Language_Str MSG_UBL_MESH_LEVELING               = _UxGT("Livell. Mesh");
  PROGMEM Language_Str MSG_UBL_3POINT_MESH_LEVELING        = _UxGT("Livell. 3 Punti");
  PROGMEM Language_Str MSG_UBL_GRID_MESH_LEVELING          = _UxGT("Livell. Griglia Mesh");
  PROGMEM Language_Str MSG_UBL_MESH_LEVEL                  = _UxGT("Livella Mesh");
  PROGMEM Language_Str MSG_UBL_SIDE_POINTS                 = _UxGT("Punti laterali");
  PROGMEM Language_Str MSG_UBL_MAP_TYPE                    = _UxGT("Tipo di Mappa");
  PROGMEM Language_Str MSG_UBL_OUTPUT_MAP                  = _UxGT("Esporta Mappa");
  PROGMEM Language_Str MSG_UBL_OUTPUT_MAP_HOST             = _UxGT("Esporta per Host");
  PROGMEM Language_Str MSG_UBL_OUTPUT_MAP_CSV              = _UxGT("Esporta in CSV");
  PROGMEM Language_Str MSG_UBL_OUTPUT_MAP_BACKUP           = _UxGT("Backup esterno");
  PROGMEM Language_Str MSG_UBL_INFO_UBL                    = _UxGT("Esporta Info UBL");
  PROGMEM Language_Str MSG_UBL_FILLIN_AMOUNT               = _UxGT("Riempimento");
  PROGMEM Language_Str MSG_UBL_MANUAL_FILLIN               = _UxGT("Riempimento Manuale");
  PROGMEM Language_Str MSG_UBL_SMART_FILLIN                = _UxGT("Riempimento Smart");
  PROGMEM Language_Str MSG_UBL_FILLIN_MESH                 = _UxGT("Riempimento Mesh");
  PROGMEM Language_Str MSG_UBL_INVALIDATE_ALL              = _UxGT("Invalida Tutto");
  PROGMEM Language_Str MSG_UBL_INVALIDATE_CLOSEST          = _UxGT("Invalid.Punto Vicino");
  PROGMEM Language_Str MSG_UBL_FINE_TUNE_ALL               = _UxGT("Ritocca All");
  PROGMEM Language_Str MSG_UBL_FINE_TUNE_CLOSEST           = _UxGT("Ritocca Punto Vicino");
  PROGMEM Language_Str MSG_UBL_STORAGE_MESH_MENU           = _UxGT("Mesh Salvate");
  PROGMEM Language_Str MSG_UBL_STORAGE_SLOT                = _UxGT("Slot di memoria");
  PROGMEM Language_Str MSG_UBL_LOAD_MESH                   = _UxGT("Carica Mesh Piatto");
  PROGMEM Language_Str MSG_UBL_SAVE_MESH                   = _UxGT("Salva Mesh Piatto");
  PROGMEM Language_Str MSG_MESH_LOADED                     = _UxGT("M117 Mesh %i caricata");
  PROGMEM Language_Str MSG_MESH_SAVED                      = _UxGT("M117 Mesh %i salvata");
  PROGMEM Language_Str MSG_UBL_NO_STORAGE                  = _UxGT("Nessuna memoria");
  PROGMEM Language_Str MSG_UBL_SAVE_ERROR                  = _UxGT("Err: Salvataggio UBL");
  PROGMEM Language_Str MSG_UBL_RESTORE_ERROR               = _UxGT("Err: Ripristino UBL");
  PROGMEM Language_Str MSG_UBL_Z_OFFSET                    = _UxGT("Z-Offset: ");
  PROGMEM Language_Str MSG_UBL_Z_OFFSET_STOPPED            = _UxGT("Z-Offset Fermato");
  PROGMEM Language_Str MSG_UBL_STEP_BY_STEP_MENU           = _UxGT("UBL passo passo");
  PROGMEM Language_Str MSG_UBL_1_BUILD_COLD_MESH           = _UxGT("1.Crea Mesh a freddo");
  PROGMEM Language_Str MSG_UBL_2_SMART_FILLIN              = _UxGT("2.Riempimento Smart");
  PROGMEM Language_Str MSG_UBL_3_VALIDATE_MESH_MENU        = _UxGT("3.Valida Mesh");
  PROGMEM Language_Str MSG_UBL_4_FINE_TUNE_ALL             = _UxGT("4.Ritocca All");
  PROGMEM Language_Str MSG_UBL_5_VALIDATE_MESH_MENU        = _UxGT("5.Valida Mesh");
  PROGMEM Language_Str MSG_UBL_6_FINE_TUNE_ALL             = _UxGT("6.Ritocca All");
  PROGMEM Language_Str MSG_UBL_7_SAVE_MESH                 = _UxGT("7.Salva Mesh Piatto");

#define MSG_MMU2_FILAMENT_CHANGE_HEADER     _UxGT("CAMBIO FILAMENTO")
#define MSG_MMU2_CHOOSE_FILAMENT_HEADER     _UxGT("SCELTA FILAMENTO")
#define MSG_MMU2_MENU                       _UxGT("MMU")
#define MSG_MMU2_WRONG_FIRMWARE             _UxGT("Agg.firmware MMU!")
#define MSG_MMU2_NOT_RESPONDING             _UxGT("MMU chiede attenz.")
#define MSG_MMU2_RESUME                     _UxGT("Riprendi stampa")
#define MSG_MMU2_RESUMING                   _UxGT("Ripresa...")
#define MSG_MMU2_LOAD_FILAMENT              _UxGT("Carica filamento")
#define MSG_MMU2_LOAD_ALL                   _UxGT("Carica tutto")
#define MSG_MMU2_LOAD_TO_NOZZLE             _UxGT("Carica fino ugello")
#define MSG_MMU2_EJECT_FILAMENT             _UxGT("Espelli filamento")
#define MSG_MMU2_EJECT_FILAMENT0            _UxGT("Espelli filam.1")
#define MSG_MMU2_EJECT_FILAMENT1            _UxGT("Espelli filam.2")
#define MSG_MMU2_EJECT_FILAMENT2            _UxGT("Espelli filam.3")
#define MSG_MMU2_EJECT_FILAMENT3            _UxGT("Espelli filam.4")
#define MSG_MMU2_EJECT_FILAMENT4            _UxGT("Espelli filam.5")
#define MSG_MMU2_UNLOAD_FILAMENT            _UxGT("Scarica filamento")
#define MSG_MMU2_LOADING_FILAMENT           _UxGT("Caric.fil. %i...")
#define MSG_MMU2_EJECTING_FILAMENT          _UxGT("Esplus.filam. ...")
#define MSG_MMU2_UNLOADING_FILAMENT         _UxGT("Scaric.filam. ...")
#define MSG_MMU2_ALL                        _UxGT("Tutto")
#define MSG_MMU2_FILAMENT0                  _UxGT("Filamento 1")
#define MSG_MMU2_FILAMENT1                  _UxGT("Filamento 2")
#define MSG_MMU2_FILAMENT2                  _UxGT("Filamento 3")
#define MSG_MMU2_FILAMENT3                  _UxGT("Filamento 4")
#define MSG_MMU2_FILAMENT4                  _UxGT("Filamento 5")
#define MSG_MMU2_RESET                      _UxGT("Azzera MMU")
#define MSG_MMU2_RESETTING                  _UxGT("Azzeramento MMU...")
#define MSG_MMU2_EJECT_RECOVER              _UxGT("Rimuovi, click")

#define MSG_MIX                             _UxGT("Miscela")
#define MSG_MIX_COMPONENT                   _UxGT("Componente")
#define MSG_MIXER                           _UxGT("Miscelatore")
#define MSG_GRADIENT                        _UxGT("Gradiente")
#define MSG_FULL_GRADIENT                   _UxGT("Gradiente pieno")
#define MSG_TOGGLE_MIX                      _UxGT("Alterna miscela")
#define MSG_CYCLE_MIX                       _UxGT("Ciclo miscela")
#define MSG_GRADIENT_MIX                    _UxGT("Miscela gradiente")
#define MSG_REVERSE_GRADIENT                _UxGT("Inverti gradiente")
#define MSG_ACTIVE_VTOOL                    _UxGT("V-tool attivo")
#define MSG_START_VTOOL                     _UxGT("V-tool iniziale")
#define MSG_END_VTOOL                       _UxGT("V-tool finale")
#define MSG_GRADIENT_ALIAS                  _UxGT("V-tool alias")
#define MSG_RESET_VTOOLS                    _UxGT("Ripristina V-tools")
#define MSG_COMMIT_VTOOL                    _UxGT("Commit mix V-tool")
#define MSG_VTOOLS_RESET                    _UxGT("V-tools ripristin.")
#define MSG_START_Z                         _UxGT("Z inizio")
#define MSG_END_Z                           _UxGT("Z fine")

#define MSG_GAMES                           _UxGT("Giochi")
#define MSG_BRICKOUT                        _UxGT("Brickout")
#define MSG_INVADERS                        _UxGT("Invaders")
#define MSG_SNAKE                           _UxGT("Sn4k3")
#define MSG_MAZE                            _UxGT("Maze")

//
// Le schermate di Cambio Filamento possono visualizzare fino a 3 linee su un display a 4 righe
//                                                  ...o fino a 2 linee su un display a 3 righe.
#if LCD_HEIGHT >= 4
  #define MSG_ADVANCED_PAUSE_WAITING_1      _UxGT("Premi per")
  #define MSG_ADVANCED_PAUSE_WAITING_2      _UxGT("riprendere")
  #define MSG_ADVANCED_PAUSE_WAITING_3      _UxGT("la stampa")
  #define MSG_PAUSE_PRINT_INIT_1            _UxGT("Parcheggiando...")
  #define MSG_FILAMENT_CHANGE_INIT_1        _UxGT("Attendere avvio")
  #define MSG_FILAMENT_CHANGE_INIT_2        _UxGT("del cambio")
  #define MSG_FILAMENT_CHANGE_INIT_3        _UxGT("di filamento")
  #define MSG_FILAMENT_CHANGE_INSERT_1      _UxGT("Inserisci il")
  #define MSG_FILAMENT_CHANGE_INSERT_2      _UxGT("filamento e premi")
  #define MSG_FILAMENT_CHANGE_INSERT_3      _UxGT("per continuare")
  #define MSG_FILAMENT_CHANGE_HEAT_1        _UxGT("Premi per")
  #define MSG_FILAMENT_CHANGE_HEAT_2        _UxGT("riscaldare ugello")
  #define MSG_FILAMENT_CHANGE_HEATING_1     _UxGT("Riscaldam. ugello")
  #define MSG_FILAMENT_CHANGE_HEATING_2     _UxGT("Attendere prego...")
  #define MSG_FILAMENT_CHANGE_UNLOAD_1      _UxGT("Attendere")
  #define MSG_FILAMENT_CHANGE_UNLOAD_2      _UxGT("l'espulsione")
  #define MSG_FILAMENT_CHANGE_UNLOAD_3      _UxGT("del filamento")
  #define MSG_FILAMENT_CHANGE_LOAD_1        _UxGT("Attendere")
  #define MSG_FILAMENT_CHANGE_LOAD_2        _UxGT("il caricamento")
  #define MSG_FILAMENT_CHANGE_LOAD_3        _UxGT("del filamento")
  #define MSG_FILAMENT_CHANGE_PURGE_1       _UxGT("Attendere")
  #define MSG_FILAMENT_CHANGE_PURGE_2       _UxGT("lo spurgo")
  #define MSG_FILAMENT_CHANGE_PURGE_3       _UxGT("del filamento")
  #define MSG_FILAMENT_CHANGE_CONT_PURGE_1  _UxGT("Premi x terminare")
  #define MSG_FILAMENT_CHANGE_CONT_PURGE_2  _UxGT("lo spurgo")
  #define MSG_FILAMENT_CHANGE_CONT_PURGE_3  _UxGT("del filamento")
  #define MSG_FILAMENT_CHANGE_RESUME_1      _UxGT("Attendere")
  #define MSG_FILAMENT_CHANGE_RESUME_2      _UxGT("la ripresa")
  #define MSG_FILAMENT_CHANGE_RESUME_3      _UxGT("della stampa...")
#else // LCD_HEIGHT < 4
  #define MSG_ADVANCED_PAUSE_WAITING_1      _UxGT("Premi x continuare")
  #define MSG_FILAMENT_CHANGE_INIT_1        _UxGT("Attendere...")
  #define MSG_FILAMENT_CHANGE_INSERT_1      _UxGT("Inserisci e premi")
  #define MSG_FILAMENT_CHANGE_HEAT_1        _UxGT("Riscalda ugello")
  #define MSG_FILAMENT_CHANGE_HEATING_1     _UxGT("Riscaldamento...")
  #define MSG_FILAMENT_CHANGE_UNLOAD_1      _UxGT("Espulsione...")
  #define MSG_FILAMENT_CHANGE_LOAD_1        _UxGT("Caricamento...")
  #define MSG_FILAMENT_CHANGE_PURGE_1       _UxGT("Spurgo filamento")
  #define MSG_FILAMENT_CHANGE_CONT_PURGE_1  _UxGT("Premi x terminare")
  #define MSG_FILAMENT_CHANGE_RESUME_1      _UxGT("Ripresa...")
#endif // LCD_HEIGHT < 4

#define MSG_TMC_DRIVERS                     _UxGT("Drivers TMC")
#define MSG_TMC_CURRENT                     _UxGT("Driver in uso")
#define MSG_TMC_HYBRID_THRS                 _UxGT("Soglia modo ibrido")
#define MSG_TMC_HOMING_THRS                 _UxGT("Azzer. sensorless")
#define MSG_TMC_STEPPING_MODE               _UxGT("Modo stepping")
#define MSG_TMC_STEALTH_ENABLED             _UxGT("StealthChop abil.")

#define MSG_SERVICE_RESET                   _UxGT("Resetta")
#define MSG_SERVICE_IN                      _UxGT(" tra:")

#define MSG_BACKLASH                        _UxGT("Gioco")
#define MSG_BACKLASH_CORRECTION             _UxGT("Correzione")
#define MSG_BACKLASH_SMOOTHING              _UxGT("Smoothing")
