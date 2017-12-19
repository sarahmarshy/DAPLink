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

static const uint32_t _flash_prog_blob[] = {
    0xE00ABE00, 0x062D780D, 0x24084068, 0xD3000040, 0x1E644058, 0x1C49D1FA, 0x2A001E52, 0x4770D1F2,
    0xb510493b, 0x60084449, 0x2100483a, 0x483a6001, 0x06527842, 0x2a020f92, 0x7842d105, 0x401a239f,
    0x48367042, 0x48377880, 0x44484a35, 0x22016002, 0x04926041, 0x02926082, 0x220560c2, 0x61420692,
    0x03122201, 0x46026182, 0x70113220, 0x43c92100, 0xf0006241, 0x2800f93c, 0x2001d000, 0x2000bd10,
    0x4a294770, 0x447ab508, 0x92000349, 0x46010c0a, 0x23004824, 0xf0004448, 0x2800f9c7, 0x2001d000,
    0xb508bd08, 0x44794920, 0x3920481e, 0xf0004448, 0x2800f8a4, 0x481cd10e, 0x4b1c4478, 0x447b3832,
    0x48189000, 0x491a2204, 0xf0004448, 0x2800f96a, 0x2001d000, 0xb510bd08, 0x447b4b13, 0x48114601,
    0x3b542201, 0x44480292, 0xf8b9f000, 0xb538bd10, 0x490d460c, 0x396e4479, 0x46019100, 0x46134809,
    0x44484622, 0xf94df000, 0xd0002800, 0xbd382001, 0x00000004, 0x40048100, 0x4007e000, 0x4007d000,
    0x40020000, 0x00000008, 0x000000ab, 0x00000562, 0x0000040c, 0x4604b570, 0x25006800, 0x061b7803,
    0x2370d5fc, 0x20007003, 0x0003e03a, 0xfa5df000, 0x0f0b070c, 0x1f1b1713, 0x2f2b2723, 0x68263633,
    0x71f37813, 0x6826e02a, 0x71b37853, 0x6826e026, 0x71737893, 0x6826e022, 0x713378d3, 0x6826e01e,
    0x72f37913, 0x6826e01a, 0x72b37953, 0x6826e016, 0x72737993, 0x6826e012, 0x723379d3, 0x6826e00e,
    0x73f37a13, 0x6826e00a, 0x73b37a53, 0x6826e006, 0x73737a93, 0x6826e002, 0x73337ad3, 0xb2c01c40,
    0xd9c24288, 0x20806821, 0xe0037008, 0x1c416a60, 0x4780d000, 0x78006820, 0xd5f70600, 0x78006820,
    0xd5010681, 0xe0062504, 0xd50106c1, 0xe0022508, 0xd00007c0, 0x46282510, 0xb508bd70, 0x2244460b,
    0x700a4669, 0x2100466a, 0xbd084798, 0x4614b538, 0xd002078a, 0x300120ff, 0x6842bd38, 0xd803428a,
    0x18d36883, 0xd80d428b, 0x428b68c3, 0x6902d803, 0x428a189a, 0x2002d801, 0x2201bd38, 0x05d21ac9,
    0xe0001889, 0x22081a89, 0x701a466b, 0x705a0c0a, 0x709a0a0a, 0x466a70d9, 0x47a02103, 0xb5ffbd38,
    0x4615b081, 0x27019a01, 0x26006852, 0x02bf1948, 0xd804428a, 0x689b9b01, 0x428318d3, 0x9a01d20f,
    0x428a68d2, 0x9b01d804, 0x18d3691b, 0xd2014283, 0xe0292602, 0x21011a88, 0x184405c9, 0x1a8ce000,
    0x46204639, 0xf904f000, 0xd0022900, 0x360126ff, 0x4639e01a, 0xf0004628, 0x2900f8fb, 0x2601d012,
    0x2009e012, 0x70084669, 0x70480c20, 0x70880a20, 0x9b0470cc, 0x2103466a, 0x47989801, 0xd1030006,
    0x19e41bed, 0xd1ec2d00, 0xb0054630, 0xb5f0bdf0, 0x24006801, 0x0612780a, 0x2270d5fc, 0x6802700a,
    0x71d12103, 0x22806801, 0x6803718a, 0x71592100, 0x23fc6805, 0x6803712b, 0x680373d9, 0x6802701a,
    0x061b7813, 0x7a55d5fc, 0x07177a12, 0x0f3f2201, 0x10560412, 0xf000003b, 0x0910f968, 0x0b0d0b0b,
    0x0b0b0b0b, 0x090d0b0b, 0x0e090b0b, 0xe0026102, 0xe0006101, 0x072a6106, 0x00130f12, 0xf955f000,
    0x0c090910, 0x1815120f, 0x091f1d1b, 0x09090909, 0x61c10a09, 0xbdf04620, 0x03092101, 0x2101e7f9,
    0xe7f602c9, 0x02892101, 0x2101e7f3, 0xe7f00249, 0x310121ff, 0x2180e7ed, 0x2140e7eb, 0x2120e7e9,
    0xb5fee7e7, 0x46074616, 0x2000461d, 0x078b198a, 0x20ffd002, 0xbdfe3001, 0xd00107b3, 0xbdfe2001,
    0x428b687b, 0x68bcd803, 0x4294191c, 0x68fbd20d, 0xd803428b, 0x191c693c, 0xd2014294, 0xbdfe2002,
    0x1ac92201, 0x188c05d2, 0x1acce01b, 0x2006e019, 0x70084669, 0x70480c20, 0x70880a20, 0x78e870cc,
    0x78a87108, 0x78687148, 0x78287188, 0x9b0871c8, 0x2107466a, 0x47984638, 0xd1e02800, 0x1d2d1d24,
    0x2e001f36, 0xbdfed1e3, 0x4615b5fe, 0x68424604, 0x184000a8, 0x428a461e, 0x68a3d803, 0x428b18d3,
    0x68e3d808, 0xd803428b, 0x19db6927, 0xd801428b, 0xbdfe2002, 0xd8054282, 0x18d368a3, 0xd3014283,
    0xe00a1a8f, 0x428268e2, 0x6923d903, 0x428318d3, 0x1a88d3ee, 0x05c92101, 0x21041847, 0xf0004638,
    0x2900f817, 0x20ffd002, 0xbdfe3001, 0x46692001, 0x0c387008, 0x0a387048, 0x70cf7088, 0x71080a28,
    0x718e714d, 0x466a9b08, 0x46202106, 0xbdfe4798, 0x09032200, 0xd32c428b, 0x428b0a03, 0x2300d311,
    0xe04e469c, 0x430b4603, 0x2200d43c, 0x428b0843, 0x0903d331, 0xd31c428b, 0x428b0a03, 0x4694d301,
    0x09c3e03f, 0xd301428b, 0x1ac001cb, 0x09834152, 0xd301428b, 0x1ac0018b, 0x09434152, 0xd301428b,
    0x1ac0014b, 0x09034152, 0xd301428b, 0x1ac0010b, 0x08c34152, 0xd301428b, 0x1ac000cb, 0x08834152,
    0xd301428b, 0x1ac0008b, 0x08434152, 0xd301428b, 0x1ac0004b, 0x1a414152, 0x4601d200, 0x46104152,
    0xe05d4770, 0xd0000fca, 0x10034249, 0x4240d300, 0x22004053, 0x0903469c, 0xd32d428b, 0x428b0a03,
    0x22fcd312, 0xba120189, 0x428b0a03, 0x0189d30c, 0x428b1192, 0x0189d308, 0x428b1192, 0x0189d304,
    0x1192d03a, 0x0989e000, 0x428b09c3, 0x01cbd301, 0x41521ac0, 0x428b0983, 0x018bd301, 0x41521ac0,
    0x428b0943, 0x014bd301, 0x41521ac0, 0x428b0903, 0x010bd301, 0x41521ac0, 0x428b08c3, 0x00cbd301,
    0x41521ac0, 0x428b0883, 0x008bd301, 0x41521ac0, 0x0843d2d9, 0xd301428b, 0x1ac0004b, 0x1a414152,
    0x4601d200, 0x41524663, 0x4610105b, 0x4240d301, 0xd5002b00, 0x47704249, 0x105b4663, 0x4240d300,
    0x2000b501, 0x46c046c0, 0xb430bd02, 0x1e644674, 0x1c647825, 0xd20042ab, 0x5d63461d, 0x18e3005b,
    0x4718bc30, 0xfffffffe, 0xffffffff, 0xfffffffe, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000
};

// Start address of flash
static const uint32_t flash_start = 0x00000000;
// Size of flash
static const uint32_t flash_size = 0x00040000;

#define SECTOR_INFO_AVAILABLE 1

/**
* List of start and size for each size of flash sector - even indexes are start, odd are size
* The size will apply to all sectors between the listed address and the next address
* in the list.
* The last pair in the list will have sectors starting at that address and ending
* at address flash_start + flash_size.
*/
static const uint32_t sectors_info[] = {
    0x00000000, 0x00000400,
};

static const program_target_t flash = {
    0x20000021, // Init
    0x2000007f, // UnInit
    0x200000a3, // EraseChip
    0x200000d7, // EraseSector
    0x200000ef, // ProgramPage

    // BKPT : start of blob + 1
    // RSB  : blob start + header + rw data offset
    // RSP  : stack pointer
    {
        0x20000001,
        0x20000630,
        0x20000800
    },

    0x20000000 + 0x00000A00,  // mem buffer location
    0x20000000,               // location to write prog_blob in target RAM
    sizeof(_flash_prog_blob),   // prog_blob size
    _flash_prog_blob,           // address of prog_blob
    0x00000100       // ram_to_flash_bytes_to_be_written
};