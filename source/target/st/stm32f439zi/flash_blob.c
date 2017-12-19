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
    0x03004601, 0x28200e00, 0x0940d302, 0xe0051d00, 0xd3022810, 0x1cc00900, 0x0880e000, 0xd50102c9,
    0x43082110, 0x48344770, 0x60814932, 0x60814933, 0x22f068c1, 0x60c14311, 0x06806940, 0x4831d406,
    0x6001492f, 0x60412106, 0x6081492f, 0x47702000, 0x69414829, 0x43112201, 0x20006141, 0x48264770,
    0x21f068c2, 0x60c2430a, 0x61824a28, 0x61424a28, 0x23026942, 0x6142431a, 0x061268c2, 0xd0040f12,
    0x430a68c2, 0x200160c2, 0x20004770, 0x20004770, 0xb5104770, 0xca064818, 0x23f068c4, 0x60c4431c,
    0x40224c1a, 0x4a1b6182, 0x1c894011, 0x68c16141, 0xd4fc03c9, 0x060968c1, 0xd0040f09, 0x431968c1,
    0x200160c1, 0x2000bd10, 0xb570bd10, 0x68134e0a, 0x68524c10, 0x40236975, 0x42ab4025, 0x4b0bd106,
    0x401a69b4, 0x42a2401c, 0x1c40d001, 0x1840bd70, 0x0000bd70, 0x08192a3b, 0x40023c00, 0x4c5d6e7f,
    0x00005555, 0x40003000, 0x00000fff, 0x0fff0000, 0x0fffaaec, 0x0ffffffc, 0x00000000
};

// Start address of flash
static const uint32_t flash_start = 0x1fffc000;
// Size of flash
static const uint32_t flash_size = 0x00000008;

#define SECTOR_INFO_AVAILABLE 1

/**
* List of start and size for each size of flash sector - even indexes are start, odd are size
* The size will apply to all sectors between the listed address and the next address
* in the list.
* The last pair in the list will have sectors starting at that address and ending
* at address flash_start + flash_size.
*/
static const uint32_t sectors_info[] = {
    0x1fffc000, 0x00000008,
};

static const program_target_t flash = {
    0x20000047, // Init
    0x20000071, // UnInit
    0x2000007f, // EraseChip
    0x200000af, // EraseSector
    0x200000b3, // ProgramPage

    // BKPT : start of blob + 1
    // RSB  : blob start + header + rw data offset
    // RSP  : stack pointer
    {
        0x20000001,
        0x20000138,
        0x20000800
    },

    0x20000000 + 0x00000A00,  // mem buffer location
    0x20000000,               // location to write prog_blob in target RAM
    sizeof(_flash_prog_blob),   // prog_blob size
    _flash_prog_blob,           // address of prog_blob
    0x00000008       // ram_to_flash_bytes_to_be_written
};