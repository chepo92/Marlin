/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2019 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
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

const short temptable_22[][2] PROGMEM = {
   { OV(1), 245},
   { OV(6), 230},
   { OV(11), 220},
   { OV(16), 210},
   { OV(20), 200},
   { OV(26), 190},
   { OV(31), 180},
   { OV(40), 170},
   { OV(51), 160},
   { OV(61), 155},
   { OV(71), 149},
   { OV(81), 145},
   { OV(90), 142},
   { OV(101), 138},
   { OV(111), 130},
   { OV(150), 120},
   { OV(199), 110},
   { OV(276), 102},
   { OV(300), 110},
   { OV(313), 98},
   { OV(360), 92},
   { OV(400), 88},
   { OV(453), 84},
   { OV(511), 77},
   { OV(580), 76},
   { OV(608), 70},
   { OV(661), 63},
   { OV(731), 60},
   { OV(991), 23},
   { OV(1001), 21},
   { OV(1011), 19},
   { OV(1021),  5}
};
