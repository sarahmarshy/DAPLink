/* Flash OS Routines (Automagically Generated)
 * Copyright (c) 2009-2015 ARM Limited
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
 #include "flash_blob.h"

static const uint32_t _flash_prog_blob[] = {
    0xE00ABE00, 0x062D780D, 0x24084068, 0xD3000040, 0x1E644058, 0x1C49D1FA, 0x2A001E52, 0x4770D1F2,
    0x4770ba40, 0x4770bac0, 0x0030ea4f, 0x00004770, 0x4b75b570, 0xf06f4c75, 0x69e20502, 0x0f16f012,
    0x68a0d00d, 0x0005f020, 0x079060a0, 0xf06fd502, 0xbd700001, 0xd5090750, 0x30fff04f, 0x4002bd70,
    0xd101428a, 0xbd702000, 0xd1e61e5b, 0xbd704628, 0xf6414966, 0x63c83071, 0x47702000, 0x68814863,
    0x0105f021, 0x20006081, 0xb5104770, 0x68a04c5f, 0x0001f040, 0xf24660a0, 0x6560301a, 0x7040f44f,
    0xf880f000, 0x65612100, 0xf02168a1, 0x60a10101, 0xd0002800, 0xbd102001, 0x4601b510, 0x5380f44f,
    0x1f1bc904, 0x0201f102, 0x2a00d002, 0xe000d0f8, 0x4c4eb18a, 0xf04168a1, 0x60a10101, 0x20016120,
    0x200260e0, 0xf85ef000, 0xf02168a1, 0x60a10101, 0x2001b108, 0x2000bd10, 0xe92dbd10, 0xf8df41f0,
    0x1cc9810c, 0x0503f021, 0x1008f8d8, 0x46064617, 0x0101f041, 0x1008f8c8, 0xd9322d07, 0xd0070770,
    0x68394630, 0xf843f000, 0x1f2dbb88, 0x1d3f1d36, 0x1008f8d8, 0x0104f041, 0x1008f8c8, 0xbf00e014,
    0x5080f506, 0x000bf36f, 0x42ac1b84, 0x462cd900, 0xd5000760, 0x46221f24, 0x46304639, 0xf82ef000,
    0x4427b9a8, 0x1b2d4426, 0xd8e92d07, 0x20012100, 0xff5ef7ff, 0xf8d8b958, 0xf0211008, 0xf8c80104,
    0xb13d1008, 0x68394630, 0xf811f000, 0x2001b110, 0x81f0e8bd, 0x1008f8d8, 0x0101f021, 0x1008f8c8,
    0xe7f52000, 0x60c84919, 0x20012100, 0x4a17e740, 0x20016110, 0x619160d0, 0xe7f32008, 0x41f0e92d,
    0x4607460c, 0x21004616, 0xf7ff2001, 0x2800ff31, 0x4d0ed1de, 0x2001612f, 0xcc0160e8, 0xcc0161a8,
    0x200861a8, 0xe00960e8, 0x46082108, 0xff20f7ff, 0xd1cd2800, 0x61a8cc01, 0x61a8cc01, 0x2e073e08,
    0x2000d8f2, 0x0000e7c4, 0x00989680, 0x400c0000, 0x00000000
};

// Start address of flash
static const uint32_t flash_start = 0x00000000;
// Size of flash
static const uint32_t flash_size = 0x00100000;

#define SECTOR_INFO_AVAILABLE 1

/**
* List of start and size for each size of flash sector - even indexes are start, odd are size
* The size will apply to all sectors between the listed address and the next address
* in the list.
* The last pair in the list will have sectors starting at that address and ending
* at address flash_start + flash_size.
*/
static const uint32_t sectors_info[] = {
    0x00000000, 0x00001000,
};

static const program_target_t flash = {
    0x20000071, // Init
    0x2000007d, // UnInit
    0x2000008b, // EraseChip
    0x200000b9, // EraseSector
    0x200000fb, // ProgramPage

    // BKPT : start of blob + 1
    // RSB  : blob start + header + rw data offset
    // RSP  : stack pointer
    {
        0x20000001,
        0x20000210,
        0x20000800
    },

    0x20000000 + 0x00000A00,  // mem buffer location
    0x20000000,               // location to write prog_blob in target RAM
    sizeof(_flash_prog_blob),   // prog_blob size
    _flash_prog_blob,           // address of prog_blob
    0x00004000       // ram_to_flash_bytes_to_be_written
};