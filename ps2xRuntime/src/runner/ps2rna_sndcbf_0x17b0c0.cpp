#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ps2rna_sndcbf
// Address: 0x17b0c0 - 0x17b214
void ps2rna_sndcbf_0x17b0c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ps2rna_sndcbf");


    ctx->pc = 0x17b0c0u;

    // 0x17b0c0: 0x3c030024
    ctx->pc = 0x17b0c0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)36 << 16));
    // 0x17b0c4: 0x3c020024
    ctx->pc = 0x17b0c4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
    // 0x17b0c8: 0x2467e0e0
    ctx->pc = 0x17b0c8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 3), 4294959328));
    // 0x17b0cc: 0x2458c840
    ctx->pc = 0x17b0ccu;
    SET_GPR_S32(ctx, 24, ADD32(GPR_U32(ctx, 2), 4294953024));
    // 0x17b0d0: 0x24ef02a0
    ctx->pc = 0x17b0d0u;
    SET_GPR_S32(ctx, 15, ADD32(GPR_U32(ctx, 7), 672));
    // 0x17b0d4: 0x402d
    ctx->pc = 0x17b0d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b0d8: 0x240e0001
    ctx->pc = 0x17b0d8u;
    SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 0), 1));
    // 0x17b0dc: 0x240d0002
    ctx->pc = 0x17b0dcu;
    SET_GPR_S32(ctx, 13, ADD32(GPR_U32(ctx, 0), 2));
    // 0x17b0e0: 0x240c0003
    ctx->pc = 0x17b0e0u;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 0), 3));
    // 0x17b0e4: 0x240b0004
    ctx->pc = 0x17b0e4u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 0), 4));
    // 0x17b0e8: 0x240a0005
    ctx->pc = 0x17b0e8u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 5));
    // 0x17b0ec: 0x24a60010
    ctx->pc = 0x17b0ecu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 5), 16));
    // 0x17b0f0: 0x80e20000
    ctx->pc = 0x17b0f0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x17b0f4: 0x0
    ctx->pc = 0x17b0f4u;
    // NOP
label_17b0f8:
    // 0x17b0f8: 0x544e0041
    ctx->pc = 0x17B0F8u;
    {
        const bool branch_taken_0x17b0f8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 14));
        if (branch_taken_0x17b0f8) {
            ctx->pc = 0x17B0FCu;
            SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 84));
            ctx->pc = 0x17B200u;
            goto label_17b200;
        }
    }
    ctx->pc = 0x17B100u;
    // 0x17b100: 0x24090080
    ctx->pc = 0x17b100u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 128));
    // 0x17b104: 0x11090041
    ctx->pc = 0x17B104u;
    {
        const bool branch_taken_0x17b104 = (GPR_U32(ctx, 8) == GPR_U32(ctx, 9));
        if (branch_taken_0x17b104) {
            ctx->pc = 0x17B20Cu;
            goto label_17b20c;
        }
    }
    ctx->pc = 0x17B10Cu;
    // 0x17b10c: 0x80e30024
    ctx->pc = 0x17b10cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 36)));
    // 0x17b110: 0x80e20025
    ctx->pc = 0x17b110u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 37)));
    // 0x17b114: 0x1062000a
    ctx->pc = 0x17B114u;
    {
        const bool branch_taken_0x17b114 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x17b114) {
            ctx->pc = 0x17B140u;
            goto label_17b140;
        }
    }
    ctx->pc = 0x17B11Cu;
    // 0x17b11c: 0x8ce20020
    ctx->pc = 0x17b11cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x17b120: 0x25080001
    ctx->pc = 0x17b120u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
    // 0x17b124: 0xa4cd0000
    ctx->pc = 0x17b124u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 13));
    // 0x17b128: 0xacc20004
    ctx->pc = 0x17b128u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    // 0x17b12c: 0x80e30024
    ctx->pc = 0x17b12cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 36)));
    // 0x17b130: 0xacc30008
    ctx->pc = 0x17b130u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x17b134: 0x24c60010
    ctx->pc = 0x17b134u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 16));
    // 0x17b138: 0x90e20024
    ctx->pc = 0x17b138u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 36)));
    // 0x17b13c: 0xa0e20025
    ctx->pc = 0x17b13cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 37), (uint8_t)GPR_U32(ctx, 2));
label_17b140:
    // 0x17b140: 0x11090032
    ctx->pc = 0x17B140u;
    {
        const bool branch_taken_0x17b140 = (GPR_U32(ctx, 8) == GPR_U32(ctx, 9));
        if (branch_taken_0x17b140) {
            ctx->pc = 0x17B20Cu;
            goto label_17b20c;
        }
    }
    ctx->pc = 0x17B148u;
    // 0x17b148: 0x80e30026
    ctx->pc = 0x17b148u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 38)));
    // 0x17b14c: 0x80e20027
    ctx->pc = 0x17b14cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 39)));
    // 0x17b150: 0x1062000a
    ctx->pc = 0x17B150u;
    {
        const bool branch_taken_0x17b150 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x17b150) {
            ctx->pc = 0x17B17Cu;
            goto label_17b17c;
        }
    }
    ctx->pc = 0x17B158u;
    // 0x17b158: 0x8ce20020
    ctx->pc = 0x17b158u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x17b15c: 0x25080001
    ctx->pc = 0x17b15cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
    // 0x17b160: 0xa4cc0000
    ctx->pc = 0x17b160u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 12));
    // 0x17b164: 0xacc20004
    ctx->pc = 0x17b164u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    // 0x17b168: 0x80e30026
    ctx->pc = 0x17b168u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 38)));
    // 0x17b16c: 0xacc30008
    ctx->pc = 0x17b16cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x17b170: 0x24c60010
    ctx->pc = 0x17b170u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 16));
    // 0x17b174: 0x90e20026
    ctx->pc = 0x17b174u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 38)));
    // 0x17b178: 0xa0e20027
    ctx->pc = 0x17b178u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 39), (uint8_t)GPR_U32(ctx, 2));
label_17b17c:
    // 0x17b17c: 0x11090023
    ctx->pc = 0x17B17Cu;
    {
        const bool branch_taken_0x17b17c = (GPR_U32(ctx, 8) == GPR_U32(ctx, 9));
        if (branch_taken_0x17b17c) {
            ctx->pc = 0x17B20Cu;
            goto label_17b20c;
        }
    }
    ctx->pc = 0x17B184u;
    // 0x17b184: 0x8ce30028
    ctx->pc = 0x17b184u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 7), 40)));
    // 0x17b188: 0x8ce2002c
    ctx->pc = 0x17b188u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 44)));
    // 0x17b18c: 0x10620009
    ctx->pc = 0x17B18Cu;
    {
        const bool branch_taken_0x17b18c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x17b18c) {
            ctx->pc = 0x17B1B4u;
            goto label_17b1b4;
        }
    }
    ctx->pc = 0x17B194u;
    // 0x17b194: 0xacc30008
    ctx->pc = 0x17b194u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x17b198: 0x25080001
    ctx->pc = 0x17b198u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
    // 0x17b19c: 0x8ce20020
    ctx->pc = 0x17b19cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x17b1a0: 0x8ce30028
    ctx->pc = 0x17b1a0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 7), 40)));
    // 0x17b1a4: 0xacc20004
    ctx->pc = 0x17b1a4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    // 0x17b1a8: 0xa4cb0000
    ctx->pc = 0x17b1a8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 11));
    // 0x17b1ac: 0xace3002c
    ctx->pc = 0x17b1acu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 44), GPR_U32(ctx, 3));
    // 0x17b1b0: 0x24c60010
    ctx->pc = 0x17b1b0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 16));
label_17b1b4:
    // 0x17b1b4: 0x11090015
    ctx->pc = 0x17B1B4u;
    {
        const bool branch_taken_0x17b1b4 = (GPR_U32(ctx, 8) == GPR_U32(ctx, 9));
        if (branch_taken_0x17b1b4) {
            ctx->pc = 0x17B20Cu;
            goto label_17b20c;
        }
    }
    ctx->pc = 0x17B1BCu;
    // 0x17b1bc: 0x8ce30030
    ctx->pc = 0x17b1bcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x17b1c0: 0x8ce20034
    ctx->pc = 0x17b1c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 52)));
    // 0x17b1c4: 0x1062000c
    ctx->pc = 0x17B1C4u;
    {
        const bool branch_taken_0x17b1c4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x17B1C8u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
        if (branch_taken_0x17b1c4) {
            ctx->pc = 0x17B1F8u;
            goto label_17b1f8;
        }
    }
    ctx->pc = 0x17B1CCu;
    // 0x17b1cc: 0x8ce40020
    ctx->pc = 0x17b1ccu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x17b1d0: 0x3021023
    ctx->pc = 0x17b1d0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 24), GPR_U32(ctx, 2)));
    // 0x17b1d4: 0xa4ca0000
    ctx->pc = 0x17b1d4u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 10));
    // 0x17b1d8: 0x8c430000
    ctx->pc = 0x17b1d8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17b1dc: 0x25080001
    ctx->pc = 0x17b1dcu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
    // 0x17b1e0: 0xacc00008
    ctx->pc = 0x17b1e0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
    // 0x17b1e4: 0xacc3000c
    ctx->pc = 0x17b1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
    // 0x17b1e8: 0xacc40004
    ctx->pc = 0x17b1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 4));
    // 0x17b1ec: 0x8ce20030
    ctx->pc = 0x17b1ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x17b1f0: 0x24c60010
    ctx->pc = 0x17b1f0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 16));
    // 0x17b1f4: 0xace20034
    ctx->pc = 0x17b1f4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 52), GPR_U32(ctx, 2));
label_17b1f8:
    // 0x17b1f8: 0x11090004
    ctx->pc = 0x17B1F8u;
    {
        const bool branch_taken_0x17b1f8 = (GPR_U32(ctx, 8) == GPR_U32(ctx, 9));
        ctx->pc = 0x17B1FCu;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 84));
        if (branch_taken_0x17b1f8) {
            ctx->pc = 0x17B20Cu;
            goto label_17b20c;
        }
    }
    ctx->pc = 0x17B200u;
label_17b200:
    // 0x17b200: 0xef102a
    ctx->pc = 0x17b200u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 7), GPR_S32(ctx, 15)));
    // 0x17b204: 0x5440ffbc
    ctx->pc = 0x17B204u;
    {
        const bool branch_taken_0x17b204 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x17b204) {
            ctx->pc = 0x17B208u;
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->pc = 0x17B0F8u;
            goto label_17b0f8;
        }
    }
    ctx->pc = 0x17B20Cu;
label_17b20c:
    // 0x17b20c: 0x3e00008
    ctx->pc = 0x17B20Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B210u;
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 8));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17B0F8u: goto label_17b0f8;
            case 0x17B140u: goto label_17b140;
            case 0x17B17Cu: goto label_17b17c;
            case 0x17B1B4u: goto label_17b1b4;
            case 0x17B1F8u: goto label_17b1f8;
            case 0x17B200u: goto label_17b200;
            case 0x17B20Cu: goto label_17b20c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17B214u;
}
