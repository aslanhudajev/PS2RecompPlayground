#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mpvvlc_InitCbpSub1
// Address: 0x18afc8 - 0x18b54c
void mpvvlc_InitCbpSub1_0x18afc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mpvvlc_InitCbpSub1");


    ctx->pc = 0x18afc8u;

    // 0x18afc8: 0x80102d
    ctx->pc = 0x18afc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18afcc: 0x24030001
    ctx->pc = 0x18afccu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x18afd0: 0x202d
    ctx->pc = 0x18afd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18afd4: 0x0
    ctx->pc = 0x18afd4u;
    // NOP
label_18afd8:
    // 0x18afd8: 0xa4440000
    ctx->pc = 0x18afd8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x18afdc: 0x2463ffff
    ctx->pc = 0x18afdcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18afe0: 0x24420002
    ctx->pc = 0x18afe0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2));
    // 0x18afe4: 0x0
    ctx->pc = 0x18afe4u;
    // NOP
    // 0x18afe8: 0x0
    ctx->pc = 0x18afe8u;
    // NOP
    // 0x18afec: 0x461fffa
    ctx->pc = 0x18AFECu;
    {
        const bool branch_taken_0x18afec = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x18afec) {
            ctx->pc = 0x18AFD8u;
            goto label_18afd8;
        }
    }
    ctx->pc = 0x18AFF4u;
    // 0x18aff4: 0x3404e709
    ctx->pc = 0x18aff4u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 59145));
    // 0x18aff8: 0x182d
    ctx->pc = 0x18aff8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18affc: 0x0
    ctx->pc = 0x18affcu;
    // NOP
label_18b000:
    // 0x18b000: 0xa4440000
    ctx->pc = 0x18b000u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x18b004: 0x2463ffff
    ctx->pc = 0x18b004u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18b008: 0x24420002
    ctx->pc = 0x18b008u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2));
    // 0x18b00c: 0x0
    ctx->pc = 0x18b00cu;
    // NOP
    // 0x18b010: 0x0
    ctx->pc = 0x18b010u;
    // NOP
    // 0x18b014: 0x461fffa
    ctx->pc = 0x18B014u;
    {
        const bool branch_taken_0x18b014 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x18b014) {
            ctx->pc = 0x18B000u;
            goto label_18b000;
        }
    }
    ctx->pc = 0x18B01Cu;
    // 0x18b01c: 0x3404db09
    ctx->pc = 0x18b01cu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 56073));
    // 0x18b020: 0x182d
    ctx->pc = 0x18b020u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b024: 0x0
    ctx->pc = 0x18b024u;
    // NOP
label_18b028:
    // 0x18b028: 0xa4440000
    ctx->pc = 0x18b028u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x18b02c: 0x2463ffff
    ctx->pc = 0x18b02cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18b030: 0x24420002
    ctx->pc = 0x18b030u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2));
    // 0x18b034: 0x0
    ctx->pc = 0x18b034u;
    // NOP
    // 0x18b038: 0x0
    ctx->pc = 0x18b038u;
    // NOP
    // 0x18b03c: 0x461fffa
    ctx->pc = 0x18B03Cu;
    {
        const bool branch_taken_0x18b03c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x18b03c) {
            ctx->pc = 0x18B028u;
            goto label_18b028;
        }
    }
    ctx->pc = 0x18B044u;
    // 0x18b044: 0x3404fb09
    ctx->pc = 0x18b044u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 64265));
    // 0x18b048: 0x182d
    ctx->pc = 0x18b048u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b04c: 0x0
    ctx->pc = 0x18b04cu;
    // NOP
label_18b050:
    // 0x18b050: 0xa4440000
    ctx->pc = 0x18b050u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x18b054: 0x2463ffff
    ctx->pc = 0x18b054u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18b058: 0x24420002
    ctx->pc = 0x18b058u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2));
    // 0x18b05c: 0x0
    ctx->pc = 0x18b05cu;
    // NOP
    // 0x18b060: 0x0
    ctx->pc = 0x18b060u;
    // NOP
    // 0x18b064: 0x461fffa
    ctx->pc = 0x18B064u;
    {
        const bool branch_taken_0x18b064 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x18b064) {
            ctx->pc = 0x18B050u;
            goto label_18b050;
        }
    }
    ctx->pc = 0x18B06Cu;
    // 0x18b06c: 0x3404f709
    ctx->pc = 0x18b06cu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 63241));
    // 0x18b070: 0x182d
    ctx->pc = 0x18b070u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b074: 0x0
    ctx->pc = 0x18b074u;
    // NOP
label_18b078:
    // 0x18b078: 0xa4440000
    ctx->pc = 0x18b078u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x18b07c: 0x2463ffff
    ctx->pc = 0x18b07cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18b080: 0x24420002
    ctx->pc = 0x18b080u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2));
    // 0x18b084: 0x0
    ctx->pc = 0x18b084u;
    // NOP
    // 0x18b088: 0x0
    ctx->pc = 0x18b088u;
    // NOP
    // 0x18b08c: 0x461fffa
    ctx->pc = 0x18B08Cu;
    {
        const bool branch_taken_0x18b08c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x18b08c) {
            ctx->pc = 0x18B078u;
            goto label_18b078;
        }
    }
    ctx->pc = 0x18B094u;
    // 0x18b094: 0x3404ef09
    ctx->pc = 0x18b094u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 61193));
    // 0x18b098: 0x182d
    ctx->pc = 0x18b098u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b09c: 0x0
    ctx->pc = 0x18b09cu;
    // NOP
label_18b0a0:
    // 0x18b0a0: 0xa4440000
    ctx->pc = 0x18b0a0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x18b0a4: 0x2463ffff
    ctx->pc = 0x18b0a4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18b0a8: 0x24420002
    ctx->pc = 0x18b0a8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2));
    // 0x18b0ac: 0x0
    ctx->pc = 0x18b0acu;
    // NOP
    // 0x18b0b0: 0x0
    ctx->pc = 0x18b0b0u;
    // NOP
    // 0x18b0b4: 0x461fffa
    ctx->pc = 0x18B0B4u;
    {
        const bool branch_taken_0x18b0b4 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x18b0b4) {
            ctx->pc = 0x18B0A0u;
            goto label_18b0a0;
        }
    }
    ctx->pc = 0x18B0BCu;
    // 0x18b0bc: 0x3404df09
    ctx->pc = 0x18b0bcu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 57097));
    // 0x18b0c0: 0x182d
    ctx->pc = 0x18b0c0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b0c4: 0x0
    ctx->pc = 0x18b0c4u;
    // NOP
label_18b0c8:
    // 0x18b0c8: 0xa4440000
    ctx->pc = 0x18b0c8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x18b0cc: 0x2463ffff
    ctx->pc = 0x18b0ccu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18b0d0: 0x24420002
    ctx->pc = 0x18b0d0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2));
    // 0x18b0d4: 0x0
    ctx->pc = 0x18b0d4u;
    // NOP
    // 0x18b0d8: 0x0
    ctx->pc = 0x18b0d8u;
    // NOP
    // 0x18b0dc: 0x461fffa
    ctx->pc = 0x18B0DCu;
    {
        const bool branch_taken_0x18b0dc = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x18b0dc) {
            ctx->pc = 0x18B0C8u;
            goto label_18b0c8;
        }
    }
    ctx->pc = 0x18B0E4u;
    // 0x18b0e4: 0x3404ba08
    ctx->pc = 0x18b0e4u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 47624));
    // 0x18b0e8: 0x24030001
    ctx->pc = 0x18b0e8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x18b0ec: 0x0
    ctx->pc = 0x18b0ecu;
    // NOP
label_18b0f0:
    // 0x18b0f0: 0xa4440000
    ctx->pc = 0x18b0f0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x18b0f4: 0x2463ffff
    ctx->pc = 0x18b0f4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18b0f8: 0x24420002
    ctx->pc = 0x18b0f8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2));
    // 0x18b0fc: 0x0
    ctx->pc = 0x18b0fcu;
    // NOP
    // 0x18b100: 0x0
    ctx->pc = 0x18b100u;
    // NOP
    // 0x18b104: 0x461fffa
    ctx->pc = 0x18B104u;
    {
        const bool branch_taken_0x18b104 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x18b104) {
            ctx->pc = 0x18B0F0u;
            goto label_18b0f0;
        }
    }
    ctx->pc = 0x18B10Cu;
    // 0x18b10c: 0x3404b608
    ctx->pc = 0x18b10cu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 46600));
    // 0x18b110: 0x24030001
    ctx->pc = 0x18b110u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x18b114: 0x0
    ctx->pc = 0x18b114u;
    // NOP
label_18b118:
    // 0x18b118: 0xa4440000
    ctx->pc = 0x18b118u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x18b11c: 0x2463ffff
    ctx->pc = 0x18b11cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18b120: 0x24420002
    ctx->pc = 0x18b120u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2));
    // 0x18b124: 0x0
    ctx->pc = 0x18b124u;
    // NOP
    // 0x18b128: 0x0
    ctx->pc = 0x18b128u;
    // NOP
    // 0x18b12c: 0x461fffa
    ctx->pc = 0x18B12Cu;
    {
        const bool branch_taken_0x18b12c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x18b12c) {
            ctx->pc = 0x18B118u;
            goto label_18b118;
        }
    }
    ctx->pc = 0x18B134u;
    // 0x18b134: 0x3404ae08
    ctx->pc = 0x18b134u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 44552));
    // 0x18b138: 0x24030001
    ctx->pc = 0x18b138u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x18b13c: 0x0
    ctx->pc = 0x18b13cu;
    // NOP
label_18b140:
    // 0x18b140: 0xa4440000
    ctx->pc = 0x18b140u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x18b144: 0x2463ffff
    ctx->pc = 0x18b144u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18b148: 0x24420002
    ctx->pc = 0x18b148u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2));
    // 0x18b14c: 0x0
    ctx->pc = 0x18b14cu;
    // NOP
    // 0x18b150: 0x0
    ctx->pc = 0x18b150u;
    // NOP
    // 0x18b154: 0x461fffa
    ctx->pc = 0x18B154u;
    {
        const bool branch_taken_0x18b154 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x18b154) {
            ctx->pc = 0x18B140u;
            goto label_18b140;
        }
    }
    ctx->pc = 0x18B15Cu;
    // 0x18b15c: 0x34049e08
    ctx->pc = 0x18b15cu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 40456));
    // 0x18b160: 0x24030001
    ctx->pc = 0x18b160u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x18b164: 0x0
    ctx->pc = 0x18b164u;
    // NOP
label_18b168:
    // 0x18b168: 0xa4440000
    ctx->pc = 0x18b168u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x18b16c: 0x2463ffff
    ctx->pc = 0x18b16cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18b170: 0x24420002
    ctx->pc = 0x18b170u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2));
    // 0x18b174: 0x0
    ctx->pc = 0x18b174u;
    // NOP
    // 0x18b178: 0x0
    ctx->pc = 0x18b178u;
    // NOP
    // 0x18b17c: 0x461fffa
    ctx->pc = 0x18B17Cu;
    {
        const bool branch_taken_0x18b17c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x18b17c) {
            ctx->pc = 0x18B168u;
            goto label_18b168;
        }
    }
    ctx->pc = 0x18B184u;
    // 0x18b184: 0x24047908
    ctx->pc = 0x18b184u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 30984));
    // 0x18b188: 0x24030001
    ctx->pc = 0x18b188u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x18b18c: 0x0
    ctx->pc = 0x18b18cu;
    // NOP
label_18b190:
    // 0x18b190: 0xa4440000
    ctx->pc = 0x18b190u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x18b194: 0x2463ffff
    ctx->pc = 0x18b194u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18b198: 0x24420002
    ctx->pc = 0x18b198u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2));
    // 0x18b19c: 0x0
    ctx->pc = 0x18b19cu;
    // NOP
    // 0x18b1a0: 0x0
    ctx->pc = 0x18b1a0u;
    // NOP
    // 0x18b1a4: 0x461fffa
    ctx->pc = 0x18B1A4u;
    {
        const bool branch_taken_0x18b1a4 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x18b1a4) {
            ctx->pc = 0x18B190u;
            goto label_18b190;
        }
    }
    ctx->pc = 0x18B1ACu;
    // 0x18b1ac: 0x24047508
    ctx->pc = 0x18b1acu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 29960));
    // 0x18b1b0: 0x24030001
    ctx->pc = 0x18b1b0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x18b1b4: 0x0
    ctx->pc = 0x18b1b4u;
    // NOP
label_18b1b8:
    // 0x18b1b8: 0xa4440000
    ctx->pc = 0x18b1b8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x18b1bc: 0x2463ffff
    ctx->pc = 0x18b1bcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18b1c0: 0x24420002
    ctx->pc = 0x18b1c0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2));
    // 0x18b1c4: 0x0
    ctx->pc = 0x18b1c4u;
    // NOP
    // 0x18b1c8: 0x0
    ctx->pc = 0x18b1c8u;
    // NOP
    // 0x18b1cc: 0x461fffa
    ctx->pc = 0x18B1CCu;
    {
        const bool branch_taken_0x18b1cc = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x18b1cc) {
            ctx->pc = 0x18B1B8u;
            goto label_18b1b8;
        }
    }
    ctx->pc = 0x18B1D4u;
    // 0x18b1d4: 0x24046d08
    ctx->pc = 0x18b1d4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 27912));
    // 0x18b1d8: 0x24030001
    ctx->pc = 0x18b1d8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x18b1dc: 0x0
    ctx->pc = 0x18b1dcu;
    // NOP
label_18b1e0:
    // 0x18b1e0: 0xa4440000
    ctx->pc = 0x18b1e0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x18b1e4: 0x2463ffff
    ctx->pc = 0x18b1e4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18b1e8: 0x24420002
    ctx->pc = 0x18b1e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2));
    // 0x18b1ec: 0x0
    ctx->pc = 0x18b1ecu;
    // NOP
    // 0x18b1f0: 0x0
    ctx->pc = 0x18b1f0u;
    // NOP
    // 0x18b1f4: 0x461fffa
    ctx->pc = 0x18B1F4u;
    {
        const bool branch_taken_0x18b1f4 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x18b1f4) {
            ctx->pc = 0x18B1E0u;
            goto label_18b1e0;
        }
    }
    ctx->pc = 0x18B1FCu;
    // 0x18b1fc: 0x24045d08
    ctx->pc = 0x18b1fcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 23816));
    // 0x18b200: 0x24030001
    ctx->pc = 0x18b200u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x18b204: 0x0
    ctx->pc = 0x18b204u;
    // NOP
label_18b208:
    // 0x18b208: 0xa4440000
    ctx->pc = 0x18b208u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x18b20c: 0x2463ffff
    ctx->pc = 0x18b20cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18b210: 0x24420002
    ctx->pc = 0x18b210u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2));
    // 0x18b214: 0x0
    ctx->pc = 0x18b214u;
    // NOP
    // 0x18b218: 0x0
    ctx->pc = 0x18b218u;
    // NOP
    // 0x18b21c: 0x461fffa
    ctx->pc = 0x18B21Cu;
    {
        const bool branch_taken_0x18b21c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x18b21c) {
            ctx->pc = 0x18B208u;
            goto label_18b208;
        }
    }
    ctx->pc = 0x18B224u;
    // 0x18b224: 0x3404a608
    ctx->pc = 0x18b224u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 42504));
    // 0x18b228: 0x24030001
    ctx->pc = 0x18b228u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x18b22c: 0x0
    ctx->pc = 0x18b22cu;
    // NOP
label_18b230:
    // 0x18b230: 0xa4440000
    ctx->pc = 0x18b230u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x18b234: 0x2463ffff
    ctx->pc = 0x18b234u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18b238: 0x24420002
    ctx->pc = 0x18b238u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2));
    // 0x18b23c: 0x0
    ctx->pc = 0x18b23cu;
    // NOP
    // 0x18b240: 0x0
    ctx->pc = 0x18b240u;
    // NOP
    // 0x18b244: 0x461fffa
    ctx->pc = 0x18B244u;
    {
        const bool branch_taken_0x18b244 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x18b244) {
            ctx->pc = 0x18B230u;
            goto label_18b230;
        }
    }
    ctx->pc = 0x18B24Cu;
    // 0x18b24c: 0x34049a08
    ctx->pc = 0x18b24cu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 39432));
    // 0x18b250: 0x24030001
    ctx->pc = 0x18b250u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x18b254: 0x0
    ctx->pc = 0x18b254u;
    // NOP
label_18b258:
    // 0x18b258: 0xa4440000
    ctx->pc = 0x18b258u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x18b25c: 0x2463ffff
    ctx->pc = 0x18b25cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18b260: 0x24420002
    ctx->pc = 0x18b260u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2));
    // 0x18b264: 0x0
    ctx->pc = 0x18b264u;
    // NOP
    // 0x18b268: 0x0
    ctx->pc = 0x18b268u;
    // NOP
    // 0x18b26c: 0x461fffa
    ctx->pc = 0x18B26Cu;
    {
        const bool branch_taken_0x18b26c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x18b26c) {
            ctx->pc = 0x18B258u;
            goto label_18b258;
        }
    }
    ctx->pc = 0x18B274u;
    // 0x18b274: 0x24046508
    ctx->pc = 0x18b274u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 25864));
    // 0x18b278: 0x24030001
    ctx->pc = 0x18b278u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x18b27c: 0x0
    ctx->pc = 0x18b27cu;
    // NOP
label_18b280:
    // 0x18b280: 0xa4440000
    ctx->pc = 0x18b280u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x18b284: 0x2463ffff
    ctx->pc = 0x18b284u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18b288: 0x24420002
    ctx->pc = 0x18b288u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2));
    // 0x18b28c: 0x0
    ctx->pc = 0x18b28cu;
    // NOP
    // 0x18b290: 0x0
    ctx->pc = 0x18b290u;
    // NOP
    // 0x18b294: 0x461fffa
    ctx->pc = 0x18B294u;
    {
        const bool branch_taken_0x18b294 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x18b294) {
            ctx->pc = 0x18B280u;
            goto label_18b280;
        }
    }
    ctx->pc = 0x18B29Cu;
    // 0x18b29c: 0x24045908
    ctx->pc = 0x18b29cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 22792));
    // 0x18b2a0: 0x24030001
    ctx->pc = 0x18b2a0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x18b2a4: 0x0
    ctx->pc = 0x18b2a4u;
    // NOP
label_18b2a8:
    // 0x18b2a8: 0xa4440000
    ctx->pc = 0x18b2a8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x18b2ac: 0x2463ffff
    ctx->pc = 0x18b2acu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18b2b0: 0x24420002
    ctx->pc = 0x18b2b0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2));
    // 0x18b2b4: 0x0
    ctx->pc = 0x18b2b4u;
    // NOP
    // 0x18b2b8: 0x0
    ctx->pc = 0x18b2b8u;
    // NOP
    // 0x18b2bc: 0x461fffa
    ctx->pc = 0x18B2BCu;
    {
        const bool branch_taken_0x18b2bc = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x18b2bc) {
            ctx->pc = 0x18B2A8u;
            goto label_18b2a8;
        }
    }
    ctx->pc = 0x18B2C4u;
    // 0x18b2c4: 0x3404eb08
    ctx->pc = 0x18b2c4u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 60168));
    // 0x18b2c8: 0x24030001
    ctx->pc = 0x18b2c8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x18b2cc: 0x0
    ctx->pc = 0x18b2ccu;
    // NOP
label_18b2d0:
    // 0x18b2d0: 0xa4440000
    ctx->pc = 0x18b2d0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x18b2d4: 0x2463ffff
    ctx->pc = 0x18b2d4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18b2d8: 0x24420002
    ctx->pc = 0x18b2d8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2));
    // 0x18b2dc: 0x0
    ctx->pc = 0x18b2dcu;
    // NOP
    // 0x18b2e0: 0x0
    ctx->pc = 0x18b2e0u;
    // NOP
    // 0x18b2e4: 0x461fffa
    ctx->pc = 0x18B2E4u;
    {
        const bool branch_taken_0x18b2e4 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x18b2e4) {
            ctx->pc = 0x18B2D0u;
            goto label_18b2d0;
        }
    }
    ctx->pc = 0x18B2ECu;
    // 0x18b2ec: 0x3404d708
    ctx->pc = 0x18b2ecu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 55048));
    // 0x18b2f0: 0x24030001
    ctx->pc = 0x18b2f0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x18b2f4: 0x0
    ctx->pc = 0x18b2f4u;
    // NOP
label_18b2f8:
    // 0x18b2f8: 0xa4440000
    ctx->pc = 0x18b2f8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x18b2fc: 0x2463ffff
    ctx->pc = 0x18b2fcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18b300: 0x24420002
    ctx->pc = 0x18b300u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2));
    // 0x18b304: 0x0
    ctx->pc = 0x18b304u;
    // NOP
    // 0x18b308: 0x0
    ctx->pc = 0x18b308u;
    // NOP
    // 0x18b30c: 0x461fffa
    ctx->pc = 0x18B30Cu;
    {
        const bool branch_taken_0x18b30c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x18b30c) {
            ctx->pc = 0x18B2F8u;
            goto label_18b2f8;
        }
    }
    ctx->pc = 0x18B314u;
    // 0x18b314: 0x3404f308
    ctx->pc = 0x18b314u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 62216));
    // 0x18b318: 0x24030001
    ctx->pc = 0x18b318u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x18b31c: 0x0
    ctx->pc = 0x18b31cu;
    // NOP
label_18b320:
    // 0x18b320: 0xa4440000
    ctx->pc = 0x18b320u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x18b324: 0x2463ffff
    ctx->pc = 0x18b324u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18b328: 0x24420002
    ctx->pc = 0x18b328u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2));
    // 0x18b32c: 0x0
    ctx->pc = 0x18b32cu;
    // NOP
    // 0x18b330: 0x0
    ctx->pc = 0x18b330u;
    // NOP
    // 0x18b334: 0x461fffa
    ctx->pc = 0x18B334u;
    {
        const bool branch_taken_0x18b334 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x18b334) {
            ctx->pc = 0x18B320u;
            goto label_18b320;
        }
    }
    ctx->pc = 0x18B33Cu;
    // 0x18b33c: 0x3404cf08
    ctx->pc = 0x18b33cu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 53000));
    // 0x18b340: 0x24030001
    ctx->pc = 0x18b340u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x18b344: 0x0
    ctx->pc = 0x18b344u;
    // NOP
label_18b348:
    // 0x18b348: 0xa4440000
    ctx->pc = 0x18b348u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x18b34c: 0x2463ffff
    ctx->pc = 0x18b34cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18b350: 0x24420002
    ctx->pc = 0x18b350u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2));
    // 0x18b354: 0x0
    ctx->pc = 0x18b354u;
    // NOP
    // 0x18b358: 0x0
    ctx->pc = 0x18b358u;
    // NOP
    // 0x18b35c: 0x461fffa
    ctx->pc = 0x18B35Cu;
    {
        const bool branch_taken_0x18b35c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x18b35c) {
            ctx->pc = 0x18B348u;
            goto label_18b348;
        }
    }
    ctx->pc = 0x18B364u;
    // 0x18b364: 0x3404aa08
    ctx->pc = 0x18b364u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 43528));
    // 0x18b368: 0x24030001
    ctx->pc = 0x18b368u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x18b36c: 0x0
    ctx->pc = 0x18b36cu;
    // NOP
label_18b370:
    // 0x18b370: 0xa4440000
    ctx->pc = 0x18b370u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x18b374: 0x2463ffff
    ctx->pc = 0x18b374u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18b378: 0x24420002
    ctx->pc = 0x18b378u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2));
    // 0x18b37c: 0x0
    ctx->pc = 0x18b37cu;
    // NOP
    // 0x18b380: 0x0
    ctx->pc = 0x18b380u;
    // NOP
    // 0x18b384: 0x461fffa
    ctx->pc = 0x18B384u;
    {
        const bool branch_taken_0x18b384 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x18b384) {
            ctx->pc = 0x18B370u;
            goto label_18b370;
        }
    }
    ctx->pc = 0x18B38Cu;
    // 0x18b38c: 0x34049608
    ctx->pc = 0x18b38cu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 38408));
    // 0x18b390: 0x24030001
    ctx->pc = 0x18b390u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x18b394: 0x0
    ctx->pc = 0x18b394u;
    // NOP
label_18b398:
    // 0x18b398: 0xa4440000
    ctx->pc = 0x18b398u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x18b39c: 0x2463ffff
    ctx->pc = 0x18b39cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18b3a0: 0x24420002
    ctx->pc = 0x18b3a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2));
    // 0x18b3a4: 0x0
    ctx->pc = 0x18b3a4u;
    // NOP
    // 0x18b3a8: 0x0
    ctx->pc = 0x18b3a8u;
    // NOP
    // 0x18b3ac: 0x461fffa
    ctx->pc = 0x18B3ACu;
    {
        const bool branch_taken_0x18b3ac = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x18b3ac) {
            ctx->pc = 0x18B398u;
            goto label_18b398;
        }
    }
    ctx->pc = 0x18B3B4u;
    // 0x18b3b4: 0x3404b208
    ctx->pc = 0x18b3b4u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 45576));
    // 0x18b3b8: 0x24030001
    ctx->pc = 0x18b3b8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x18b3bc: 0x0
    ctx->pc = 0x18b3bcu;
    // NOP
label_18b3c0:
    // 0x18b3c0: 0xa4440000
    ctx->pc = 0x18b3c0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x18b3c4: 0x2463ffff
    ctx->pc = 0x18b3c4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18b3c8: 0x24420002
    ctx->pc = 0x18b3c8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2));
    // 0x18b3cc: 0x0
    ctx->pc = 0x18b3ccu;
    // NOP
    // 0x18b3d0: 0x0
    ctx->pc = 0x18b3d0u;
    // NOP
    // 0x18b3d4: 0x461fffa
    ctx->pc = 0x18B3D4u;
    {
        const bool branch_taken_0x18b3d4 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x18b3d4) {
            ctx->pc = 0x18B3C0u;
            goto label_18b3c0;
        }
    }
    ctx->pc = 0x18B3DCu;
    // 0x18b3dc: 0x34048e08
    ctx->pc = 0x18b3dcu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 36360));
    // 0x18b3e0: 0x24030001
    ctx->pc = 0x18b3e0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x18b3e4: 0x0
    ctx->pc = 0x18b3e4u;
    // NOP
label_18b3e8:
    // 0x18b3e8: 0xa4440000
    ctx->pc = 0x18b3e8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x18b3ec: 0x2463ffff
    ctx->pc = 0x18b3ecu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18b3f0: 0x24420002
    ctx->pc = 0x18b3f0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2));
    // 0x18b3f4: 0x0
    ctx->pc = 0x18b3f4u;
    // NOP
    // 0x18b3f8: 0x0
    ctx->pc = 0x18b3f8u;
    // NOP
    // 0x18b3fc: 0x461fffa
    ctx->pc = 0x18B3FCu;
    {
        const bool branch_taken_0x18b3fc = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x18b3fc) {
            ctx->pc = 0x18B3E8u;
            goto label_18b3e8;
        }
    }
    ctx->pc = 0x18B404u;
    // 0x18b404: 0x24046908
    ctx->pc = 0x18b404u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 26888));
    // 0x18b408: 0x24030001
    ctx->pc = 0x18b408u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x18b40c: 0x0
    ctx->pc = 0x18b40cu;
    // NOP
label_18b410:
    // 0x18b410: 0xa4440000
    ctx->pc = 0x18b410u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x18b414: 0x2463ffff
    ctx->pc = 0x18b414u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18b418: 0x24420002
    ctx->pc = 0x18b418u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2));
    // 0x18b41c: 0x0
    ctx->pc = 0x18b41cu;
    // NOP
    // 0x18b420: 0x0
    ctx->pc = 0x18b420u;
    // NOP
    // 0x18b424: 0x461fffa
    ctx->pc = 0x18B424u;
    {
        const bool branch_taken_0x18b424 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x18b424) {
            ctx->pc = 0x18B410u;
            goto label_18b410;
        }
    }
    ctx->pc = 0x18B42Cu;
    // 0x18b42c: 0x24045508
    ctx->pc = 0x18b42cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 21768));
    // 0x18b430: 0x24030001
    ctx->pc = 0x18b430u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x18b434: 0x0
    ctx->pc = 0x18b434u;
    // NOP
label_18b438:
    // 0x18b438: 0xa4440000
    ctx->pc = 0x18b438u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x18b43c: 0x2463ffff
    ctx->pc = 0x18b43cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18b440: 0x24420002
    ctx->pc = 0x18b440u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2));
    // 0x18b444: 0x0
    ctx->pc = 0x18b444u;
    // NOP
    // 0x18b448: 0x0
    ctx->pc = 0x18b448u;
    // NOP
    // 0x18b44c: 0x461fffa
    ctx->pc = 0x18B44Cu;
    {
        const bool branch_taken_0x18b44c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x18b44c) {
            ctx->pc = 0x18B438u;
            goto label_18b438;
        }
    }
    ctx->pc = 0x18B454u;
    // 0x18b454: 0x24047108
    ctx->pc = 0x18b454u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 28936));
    // 0x18b458: 0x24030001
    ctx->pc = 0x18b458u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x18b45c: 0x0
    ctx->pc = 0x18b45cu;
    // NOP
label_18b460:
    // 0x18b460: 0xa4440000
    ctx->pc = 0x18b460u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x18b464: 0x2463ffff
    ctx->pc = 0x18b464u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18b468: 0x24420002
    ctx->pc = 0x18b468u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2));
    // 0x18b46c: 0x0
    ctx->pc = 0x18b46cu;
    // NOP
    // 0x18b470: 0x0
    ctx->pc = 0x18b470u;
    // NOP
    // 0x18b474: 0x461fffa
    ctx->pc = 0x18B474u;
    {
        const bool branch_taken_0x18b474 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x18b474) {
            ctx->pc = 0x18B460u;
            goto label_18b460;
        }
    }
    ctx->pc = 0x18B47Cu;
    // 0x18b47c: 0x24044d08
    ctx->pc = 0x18b47cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 19720));
    // 0x18b480: 0x24030001
    ctx->pc = 0x18b480u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x18b484: 0x0
    ctx->pc = 0x18b484u;
    // NOP
label_18b488:
    // 0x18b488: 0xa4440000
    ctx->pc = 0x18b488u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x18b48c: 0x2463ffff
    ctx->pc = 0x18b48cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18b490: 0x24420002
    ctx->pc = 0x18b490u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2));
    // 0x18b494: 0x0
    ctx->pc = 0x18b494u;
    // NOP
    // 0x18b498: 0x0
    ctx->pc = 0x18b498u;
    // NOP
    // 0x18b49c: 0x461fffa
    ctx->pc = 0x18B49Cu;
    {
        const bool branch_taken_0x18b49c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x18b49c) {
            ctx->pc = 0x18B488u;
            goto label_18b488;
        }
    }
    ctx->pc = 0x18B4A4u;
    // 0x18b4a4: 0x3404e308
    ctx->pc = 0x18b4a4u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 58120));
    // 0x18b4a8: 0x24030001
    ctx->pc = 0x18b4a8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x18b4ac: 0x0
    ctx->pc = 0x18b4acu;
    // NOP
label_18b4b0:
    // 0x18b4b0: 0xa4440000
    ctx->pc = 0x18b4b0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x18b4b4: 0x2463ffff
    ctx->pc = 0x18b4b4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18b4b8: 0x24420002
    ctx->pc = 0x18b4b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2));
    // 0x18b4bc: 0x0
    ctx->pc = 0x18b4bcu;
    // NOP
    // 0x18b4c0: 0x0
    ctx->pc = 0x18b4c0u;
    // NOP
    // 0x18b4c4: 0x461fffa
    ctx->pc = 0x18B4C4u;
    {
        const bool branch_taken_0x18b4c4 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x18b4c4) {
            ctx->pc = 0x18B4B0u;
            goto label_18b4b0;
        }
    }
    ctx->pc = 0x18B4CCu;
    // 0x18b4cc: 0x3404d308
    ctx->pc = 0x18b4ccu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 54024));
    // 0x18b4d0: 0x24030001
    ctx->pc = 0x18b4d0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x18b4d4: 0x0
    ctx->pc = 0x18b4d4u;
    // NOP
label_18b4d8:
    // 0x18b4d8: 0xa4440000
    ctx->pc = 0x18b4d8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x18b4dc: 0x2463ffff
    ctx->pc = 0x18b4dcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18b4e0: 0x24420002
    ctx->pc = 0x18b4e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2));
    // 0x18b4e4: 0x0
    ctx->pc = 0x18b4e4u;
    // NOP
    // 0x18b4e8: 0x0
    ctx->pc = 0x18b4e8u;
    // NOP
    // 0x18b4ec: 0x461fffa
    ctx->pc = 0x18B4ECu;
    {
        const bool branch_taken_0x18b4ec = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x18b4ec) {
            ctx->pc = 0x18B4D8u;
            goto label_18b4d8;
        }
    }
    ctx->pc = 0x18B4F4u;
    // 0x18b4f4: 0x3404cb08
    ctx->pc = 0x18b4f4u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 51976));
    // 0x18b4f8: 0x24030001
    ctx->pc = 0x18b4f8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x18b4fc: 0x0
    ctx->pc = 0x18b4fcu;
    // NOP
label_18b500:
    // 0x18b500: 0xa4440000
    ctx->pc = 0x18b500u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x18b504: 0x2463ffff
    ctx->pc = 0x18b504u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18b508: 0x24420002
    ctx->pc = 0x18b508u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2));
    // 0x18b50c: 0x0
    ctx->pc = 0x18b50cu;
    // NOP
    // 0x18b510: 0x0
    ctx->pc = 0x18b510u;
    // NOP
    // 0x18b514: 0x461fffa
    ctx->pc = 0x18B514u;
    {
        const bool branch_taken_0x18b514 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x18b514) {
            ctx->pc = 0x18B500u;
            goto label_18b500;
        }
    }
    ctx->pc = 0x18B51Cu;
    // 0x18b51c: 0x3404c708
    ctx->pc = 0x18b51cu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 50952));
    // 0x18b520: 0x24030001
    ctx->pc = 0x18b520u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x18b524: 0x0
    ctx->pc = 0x18b524u;
    // NOP
label_18b528:
    // 0x18b528: 0xa4440000
    ctx->pc = 0x18b528u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x18b52c: 0x2463ffff
    ctx->pc = 0x18b52cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18b530: 0x24420002
    ctx->pc = 0x18b530u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2));
    // 0x18b534: 0x0
    ctx->pc = 0x18b534u;
    // NOP
    // 0x18b538: 0x0
    ctx->pc = 0x18b538u;
    // NOP
    // 0x18b53c: 0x461fffa
    ctx->pc = 0x18B53Cu;
    {
        const bool branch_taken_0x18b53c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x18b53c) {
            ctx->pc = 0x18B528u;
            goto label_18b528;
        }
    }
    ctx->pc = 0x18B544u;
    // 0x18b544: 0x3e00008
    ctx->pc = 0x18B544u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18AFD8u: goto label_18afd8;
            case 0x18B000u: goto label_18b000;
            case 0x18B028u: goto label_18b028;
            case 0x18B050u: goto label_18b050;
            case 0x18B078u: goto label_18b078;
            case 0x18B0A0u: goto label_18b0a0;
            case 0x18B0C8u: goto label_18b0c8;
            case 0x18B0F0u: goto label_18b0f0;
            case 0x18B118u: goto label_18b118;
            case 0x18B140u: goto label_18b140;
            case 0x18B168u: goto label_18b168;
            case 0x18B190u: goto label_18b190;
            case 0x18B1B8u: goto label_18b1b8;
            case 0x18B1E0u: goto label_18b1e0;
            case 0x18B208u: goto label_18b208;
            case 0x18B230u: goto label_18b230;
            case 0x18B258u: goto label_18b258;
            case 0x18B280u: goto label_18b280;
            case 0x18B2A8u: goto label_18b2a8;
            case 0x18B2D0u: goto label_18b2d0;
            case 0x18B2F8u: goto label_18b2f8;
            case 0x18B320u: goto label_18b320;
            case 0x18B348u: goto label_18b348;
            case 0x18B370u: goto label_18b370;
            case 0x18B398u: goto label_18b398;
            case 0x18B3C0u: goto label_18b3c0;
            case 0x18B3E8u: goto label_18b3e8;
            case 0x18B410u: goto label_18b410;
            case 0x18B438u: goto label_18b438;
            case 0x18B460u: goto label_18b460;
            case 0x18B488u: goto label_18b488;
            case 0x18B4B0u: goto label_18b4b0;
            case 0x18B4D8u: goto label_18b4d8;
            case 0x18B500u: goto label_18b500;
            case 0x18B528u: goto label_18b528;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18B54Cu;
}
