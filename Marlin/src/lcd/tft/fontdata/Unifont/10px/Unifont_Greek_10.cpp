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

#include "../../../../../inc/MarlinConfigPre.h"

#if HAS_GRAPHICAL_TFT

#include <stdint.h>

// Unifont Greek 16pt, capital 'A' heigth: 10px, width: 100%, range: 0x0386-0x03ce, glyphs: 63
extern const uint8_t Unifont_Greek_10[1061] = {
  129,10,134,3,206,3,14,254, // unifont_t
  // 0x0386  Ά
  6,14,14,8,1,0,32,64,128,0,48,72,72,132,132,252,132,132,132,132,
  // 0x0387  ·
  255,
  // 0x0388  Έ
  6,14,14,8,1,0,32,64,128,0,252,128,128,128,248,128,128,128,128,252,
  // 0x0389  Ή
  6,14,14,8,1,0,32,64,128,0,132,132,132,132,252,132,132,132,132,132,
  // 0x038a  Ί
  6,14,14,8,1,0,32,64,128,0,124,16,16,16,16,16,16,16,16,124,
  // 0x038b  ΋
  255,
  // 0x038c  Ό
  6,14,14,8,1,0,32,64,128,0,120,132,132,132,132,132,132,132,132,120,
  // 0x038d  ΍
  255,
  // 0x038e  Ύ
  7,14,14,8,1,0,32,64,128,0,130,130,68,68,40,16,16,16,16,16,
  // 0x038f  Ώ
  7,15,15,8,1,255,32,64,128,0,124,130,130,130,130,130,130,68,40,40,238,
  // 0x0390  ΐ
  255,
  // 0x0391  Α
  6,10,10,8,1,0,48,72,72,132,132,252,132,132,132,132,
  // 0x0392  Β
  6,10,10,8,1,0,248,132,132,132,248,132,132,132,132,248,
  // 0x0393  Γ
  6,10,10,8,1,0,252,132,128,128,128,128,128,128,128,128,
  // 0x0394  Δ
  7,10,10,8,1,0,16,16,40,40,68,68,68,130,130,254,
  // 0x0395  Ε
  6,10,10,8,1,0,252,128,128,128,248,128,128,128,128,252,
  // 0x0396  Ζ
  6,10,10,8,1,0,252,4,4,8,16,32,64,128,128,252,
  // 0x0397  Η
  6,10,10,8,1,0,132,132,132,132,252,132,132,132,132,132,
  // 0x0398  Θ
  6,10,10,8,1,0,120,132,132,132,180,180,132,132,132,120,
  // 0x0399  Ι
  5,10,10,8,2,0,248,32,32,32,32,32,32,32,32,248,
  // 0x039a  Κ
  6,10,10,8,1,0,132,136,144,160,192,192,160,144,136,132,
  // 0x039b  Λ
  7,10,10,8,1,0,16,16,40,40,68,68,68,130,130,130,
  // 0x039c  Μ
  6,10,10,8,1,0,132,132,204,204,180,180,132,132,132,132,
  // 0x039d  Ν
  6,10,10,8,1,0,132,196,196,164,164,148,148,140,140,132,
  // 0x039e  Ξ
  6,10,10,8,1,0,252,0,0,0,120,0,0,0,0,252,
  // 0x039f  Ο
  6,10,10,8,1,0,120,132,132,132,132,132,132,132,132,120,
  // 0x03a0  Π
  7,10,10,8,1,0,254,68,68,68,68,68,68,68,68,68,
  // 0x03a1  Ρ
  6,10,10,8,1,0,248,132,132,132,248,128,128,128,128,128,
  // 0x03a2  ΢
  255,
  // 0x03a3  Σ
  6,10,10,8,1,0,252,128,64,32,16,16,32,64,128,252,
  // 0x03a4  Τ
  7,10,10,8,1,0,254,16,16,16,16,16,16,16,16,16,
  // 0x03a5  Υ
  7,10,10,8,1,0,130,130,68,68,40,16,16,16,16,16,
  // 0x03a6  Φ
  7,10,10,8,1,0,254,16,124,146,146,146,146,124,16,254,
  // 0x03a7  Χ
  6,10,10,8,1,0,132,132,72,72,48,48,72,72,132,132,
  // 0x03a8  Ψ
  7,10,10,8,1,0,146,146,146,146,146,124,16,16,16,16,
  // 0x03a9  Ω
  7,10,10,8,1,0,124,130,130,130,130,130,68,40,40,238,
  // 0x03aa  Ϊ
  255,
  // 0x03ab  Ϋ
  255,
  // 0x03ac  ά
  6,13,13,8,1,0,8,16,32,0,0,100,148,136,136,136,136,148,100,
  // 0x03ad  έ
  6,13,13,8,1,0,8,16,32,0,0,124,128,128,120,128,128,128,124,
  // 0x03ae  ή
  6,15,15,8,1,254,8,16,32,0,0,184,196,132,132,132,132,132,132,4,4,
  // 0x03af  ί
  4,13,13,8,2,0,16,32,64,0,0,192,64,64,64,64,64,64,48,
  // 0x03b0  ΰ
  255,
  // 0x03b1  α
  6,8,8,8,1,0,100,148,136,136,136,136,148,100,
  // 0x03b2  β
  6,12,12,8,1,254,112,136,136,136,248,132,132,132,196,184,128,128,
  // 0x03b3  γ
  7,8,8,8,1,0,98,146,20,8,16,16,32,32,
  // 0x03b4  δ
  6,10,10,8,1,0,56,64,64,64,48,72,132,132,132,120,
  // 0x03b5  ε
  6,8,8,8,1,0,120,132,128,120,128,128,132,120,
  // 0x03b6  ζ
  5,12,12,8,2,254,128,128,112,32,64,128,128,128,128,112,8,112,
  // 0x03b7  η
  6,10,10,8,1,254,184,196,132,132,132,132,132,132,4,4,
  // 0x03b8  θ
  6,10,10,8,1,0,48,72,72,132,252,132,132,72,72,48,
  // 0x03b9  ι
  4,8,8,8,2,0,192,64,64,64,64,64,64,48,
  // 0x03ba  κ
  5,8,8,8,2,0,136,144,160,192,192,160,144,136,
  // 0x03bb  λ
  6,10,10,8,1,0,64,64,32,32,16,48,72,72,132,132,
  // 0x03bc  μ
  6,10,10,8,1,254,132,132,132,132,204,204,180,132,128,128,
  // 0x03bd  ν
  6,8,8,8,1,0,132,132,132,136,136,144,160,192,
  // 0x03be  ξ
  6,12,12,8,1,254,128,128,120,128,128,120,128,128,120,4,4,120,
  // 0x03bf  ο
  6,8,8,8,1,0,120,132,132,132,132,132,132,120,
  // 0x03c0  π
  6,8,8,8,1,0,252,72,72,72,72,72,72,72,
  // 0x03c1  ρ
  6,10,10,8,1,254,120,132,132,132,132,132,196,184,128,128,
  // 0x03c2  ς
  6,10,10,8,1,254,60,64,128,128,128,64,56,4,4,56,
  // 0x03c3  σ
  7,8,8,8,1,0,126,144,136,136,136,136,136,112,
  // 0x03c4  τ
  6,8,8,8,1,0,252,32,32,32,32,32,32,24,
  // 0x03c5  υ
  6,8,8,8,1,0,132,132,132,132,132,132,132,120,
  // 0x03c6  φ
  7,10,10,8,1,254,76,146,146,146,146,146,146,124,16,16,
  // 0x03c7  χ
  8,11,11,8,0,254,193,33,34,18,20,24,40,72,68,132,131,
  // 0x03c8  ψ
  7,10,10,8,1,254,146,146,146,146,146,146,146,124,16,16,
  // 0x03c9  ω
  7,8,8,8,1,0,68,130,130,146,146,146,146,108,
  // 0x03ca  ϊ
  255,
  // 0x03cb  ϋ
  255,
  // 0x03cc  ό
  6,13,13,8,1,0,8,16,32,0,0,120,132,132,132,132,132,132,120,
  // 0x03cd  ύ
  6,13,13,8,1,0,8,16,32,0,0,132,132,132,132,132,132,132,120,
  // 0x03ce  ώ
  7,13,13,8,1,0,8,16,32,0,0,68,130,130,146,146,146,146,108,
};

#endif // HAS_GRAPHICAL_TFT