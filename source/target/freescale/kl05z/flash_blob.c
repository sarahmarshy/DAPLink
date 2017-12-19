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
    0xb5104935, 0x60084449, 0x21004834, 0x48356001, 0x44484a33, 0x22016002, 0x04926041, 0x02926082,
    0x220560c2, 0x61420692, 0x03122201, 0x46026182, 0x70113220, 0x62411e49, 0xf910f000, 0xd0002800,
    0xbd102001, 0x47702000, 0xb5084a27, 0x0349447a, 0x0c0a9200, 0x48234601, 0x44482300, 0xf99ef000,
    0xd0002800, 0xbd082001, 0x491fb508, 0x481d4479, 0x44483920, 0xf8a1f000, 0xd10e2800, 0x4478481a,
    0x38324b1a, 0x9000447b, 0x22044816, 0x44484918, 0xf941f000, 0xd0002800, 0xbd082001, 0x4b12b510,
    0x4601447b, 0x2201480f, 0x02923b54, 0xf0004448, 0xbd10f88d, 0x460cb538, 0x4479490b, 0x9100396e,
    0x48084601, 0x46224613, 0xf0004448, 0x2800f924, 0x2001d000, 0x0000bd38, 0x00000004, 0x40048100,
    0x40020000, 0x00000008, 0x000000a5, 0x00000510, 0x0000040c, 0x4604b570, 0x25006800, 0x061b7803,
    0x2370d5fc, 0x20007003, 0x0003e03a, 0xfa37f000, 0x0f0b070c, 0x1f1b1713, 0x2f2b2723, 0x68263633,
    0x71f37813, 0x6826e02a, 0x71b37853, 0x6826e026, 0x71737893, 0x6826e022, 0x713378d3, 0x6826e01e,
    0x72f37913, 0x6826e01a, 0x72b37953, 0x6826e016, 0x72737993, 0x6826e012, 0x723379d3, 0x6826e00e,
    0x73f37a13, 0x6826e00a, 0x73b37a53, 0x6826e006, 0x73737a93, 0x6826e002, 0x73337ad3, 0xb2c01c40,
    0xd9c24288, 0x20806821, 0xe0037008, 0x1c416a60, 0x4780d000, 0x78006820, 0xd5f70600, 0x78006820,
    0xd5010681, 0xe0062504, 0xd50106c1, 0xe0022508, 0xd00007c0, 0x46282510, 0xb508bd70, 0x2244460b,
    0x700a4669, 0x2100466a, 0xbd084798, 0xb081b5ff, 0x9a014615, 0x68522701, 0x19482600, 0x428a02bf,
    0x9b01d804, 0x18d3689b, 0xd20f4283, 0x68d29a01, 0xd804428a, 0x691b9b01, 0x428318d3, 0x2602d201,
    0x1a88e029, 0x05c92101, 0xe0001844, 0x46391a8c, 0xf0004620, 0x2900f907, 0x26ffd002, 0xe01a3601,
    0x46284639, 0xf8fef000, 0xd0122900, 0xe0122601, 0x46692009, 0x0c207008, 0x0a207048, 0x70cc7088,
    0x466a9b04, 0x98012103, 0x00064798, 0x1bedd103, 0x2d0019e4, 0x4630d1ec, 0xbdf0b005, 0x6801b5f0,
    0x780a2400, 0xd5fc0612, 0x700a2270, 0x21036802, 0x680171d1, 0x718a2280, 0x21006803, 0x68057159,
    0x712b23fc, 0x73d96803, 0x701a6803, 0x78136802, 0xd5fc061b, 0x7a127a55, 0x22010717, 0x03d20f3f,
    0x003b1056, 0xf96bf000, 0x0e0b0910, 0x09090910, 0x0e1f1009, 0x09090909, 0x61021109, 0x2203e005,
    0xe7fa0352, 0xe0006106, 0x072a6101, 0x00130f12, 0xf955f000, 0x0c0c0c10, 0x1815120f, 0x0c1f1d1b,
    0x0c0c0c0c, 0x22010d0c, 0xe7e60352, 0x462061c1, 0x2101bdf0, 0xe7f902c9, 0x02892101, 0x2101e7f6,
    0xe7f30249, 0x310121ff, 0x2180e7f0, 0x2140e7ee, 0x2120e7ec, 0xb5fee7ea, 0x46074616, 0x2000461d,
    0x078b198a, 0x20ffd002, 0xbdfe3001, 0xd00107b3, 0xbdfe2001, 0x428b687b, 0x68bcd803, 0x4294191c,
    0x68fbd20d, 0xd803428b, 0x191c693c, 0xd2014294, 0xbdfe2002, 0x1ac92201, 0x188c05d2, 0x1acce01b,
    0x2006e019, 0x70084669, 0x70480c20, 0x70880a20, 0x78e870cc, 0x78a87108, 0x78687148, 0x78287188,
    0x9b0871c8, 0x2107466a, 0x47984638, 0xd1e02800, 0x1f361d24, 0x2e001d2d, 0xbdfed1e3, 0x4615b5fe,
    0x68424604, 0x184000a8, 0x428a461e, 0x68a3d803, 0x428b18d3, 0x68e3d808, 0xd803428b, 0x19db6927,
    0xd801428b, 0xbdfe2002, 0xd8054282, 0x18d368a3, 0xd3014283, 0xe00a1a8f, 0x428268e2, 0x6923d903,
    0x428318d3, 0x1a88d3ee, 0x05c92101, 0x21041847, 0xf0004638, 0x2900f817, 0x20ffd002, 0xbdfe3001,
    0x46692001, 0x0c387008, 0x0a387048, 0x70cf7088, 0x71080a28, 0x718e714d, 0x466a9b08, 0x46202106,
    0xbdfe4798, 0x09032200, 0xd32c428b, 0x428b0a03, 0x2300d311, 0xe04e469c, 0x430b4603, 0x2200d43c,
    0x428b0843, 0x0903d331, 0xd31c428b, 0x428b0a03, 0x4694d301, 0x09c3e03f, 0xd301428b, 0x1ac001cb,
    0x09834152, 0xd301428b, 0x1ac0018b, 0x09434152, 0xd301428b, 0x1ac0014b, 0x09034152, 0xd301428b,
    0x1ac0010b, 0x08c34152, 0xd301428b, 0x1ac000cb, 0x08834152, 0xd301428b, 0x1ac0008b, 0x08434152,
    0xd301428b, 0x1ac0004b, 0x1a414152, 0x4601d200, 0x46104152, 0xe05d4770, 0xd0000fca, 0x10034249,
    0x4240d300, 0x22004053, 0x0903469c, 0xd32d428b, 0x428b0a03, 0x22fcd312, 0xba120189, 0x428b0a03,
    0x0189d30c, 0x428b1192, 0x0189d308, 0x428b1192, 0x0189d304, 0x1192d03a, 0x0989e000, 0x428b09c3,
    0x01cbd301, 0x41521ac0, 0x428b0983, 0x018bd301, 0x41521ac0, 0x428b0943, 0x014bd301, 0x41521ac0,
    0x428b0903, 0x010bd301, 0x41521ac0, 0x428b08c3, 0x00cbd301, 0x41521ac0, 0x428b0883, 0x008bd301,
    0x41521ac0, 0x0843d2d9, 0xd301428b, 0x1ac0004b, 0x1a414152, 0x4601d200, 0x41524663, 0x4610105b,
    0x4240d301, 0xd5002b00, 0x47704249, 0x105b4663, 0x4240d300, 0x2000b501, 0x46c046c0, 0xb430bd02,
    0x1e644674, 0x1c647825, 0xd20042ab, 0x5d63461d, 0x18e3005b, 0x4718bc30, 0xfffffffe, 0x00000000,
    0xffffffff, 0xfffffffe, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000
};

// Start address of flash
static const uint32_t flash_start = 0x00000000;
// Size of flash
static const uint32_t flash_size = 0x00008000;

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
    0x20000065, // UnInit
    0x20000089, // EraseChip
    0x200000bd, // EraseSector
    0x200000d5, // ProgramPage

    // BKPT : start of blob + 1
    // RSB  : blob start + header + rw data offset
    // RSP  : stack pointer
    {
        0x20000001,
        0x200005c8,
        0x20000800
    },

    0x20000000 + 0x00000A00,  // mem buffer location
    0x20000000,               // location to write prog_blob in target RAM
    sizeof(_flash_prog_blob),   // prog_blob size
    _flash_prog_blob,           // address of prog_blob
    0x00000100       // ram_to_flash_bytes_to_be_written
};