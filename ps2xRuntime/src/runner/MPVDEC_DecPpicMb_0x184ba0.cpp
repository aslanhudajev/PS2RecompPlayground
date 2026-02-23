#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MPVDEC_DecPpicMb
// Address: 0x184ba0 - 0x1850a8
void MPVDEC_DecPpicMb_0x184ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MPVDEC_DecPpicMb");


    ctx->pc = 0x184ba0u;

label_184ba0:
    // 0x184ba0: 0x27bdff50
    ctx->pc = 0x184ba0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967120));
label_184ba4:
    // 0x184ba4: 0x240e0001
    ctx->pc = 0x184ba4u;
    SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 0), 1));
label_184ba8:
    // 0x184ba8: 0xffbe0090
    ctx->pc = 0x184ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
label_184bac:
    // 0x184bac: 0xffb70080
    ctx->pc = 0x184bacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
label_184bb0:
    // 0x184bb0: 0xa0f02d
    ctx->pc = 0x184bb0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_184bb4:
    // 0x184bb4: 0xffb30040
    ctx->pc = 0x184bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
label_184bb8:
    // 0x184bb8: 0xe0b82d
    ctx->pc = 0x184bb8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_184bbc:
    // 0x184bbc: 0xffbf00a0
    ctx->pc = 0x184bbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_184bc0:
    // 0x184bc0: 0x80982d
    ctx->pc = 0x184bc0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_184bc4:
    // 0x184bc4: 0xffb60070
    ctx->pc = 0x184bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
label_184bc8:
    // 0x184bc8: 0xffb40050
    ctx->pc = 0x184bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_184bcc:
    // 0x184bcc: 0xffb20030
    ctx->pc = 0x184bccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_184bd0:
    // 0x184bd0: 0xffb10020
    ctx->pc = 0x184bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_184bd4:
    // 0x184bd4: 0xffb00010
    ctx->pc = 0x184bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_184bd8:
    // 0x184bd8: 0xffb50060
    ctx->pc = 0x184bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
label_184bdc:
    // 0x184bdc: 0x8e750000
    ctx->pc = 0x184bdcu;
    SET_GPR_U32(ctx, 21, READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_184be0:
    // 0x184be0: 0x10000108
label_184be4:
    if (ctx->pc == 0x184BE4u) {
        ctx->pc = 0x184BE4u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
        ctx->pc = 0x184BE8u;
        goto label_184be8;
    }
    ctx->pc = 0x184BE0u;
    {
        const bool branch_taken_0x184be0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x184BE4u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
        if (branch_taken_0x184be0) {
            ctx->pc = 0x185004u;
            goto label_185004;
        }
    }
    ctx->pc = 0x184BE8u;
label_184be8:
    // 0x184be8: 0x3c030024
    ctx->pc = 0x184be8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)36 << 16));
label_184bec:
    // 0x184bec: 0x3c07ffff
    ctx->pc = 0x184becu;
    SET_GPR_U32(ctx, 7, ((uint32_t)65535 << 16));
label_184bf0:
    // 0x184bf0: 0x8c481a30
    ctx->pc = 0x184bf0u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 2), 6704)));
label_184bf4:
    // 0x184bf4: 0x8c641a34
    ctx->pc = 0x184bf4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 6708)));
label_184bf8:
    // 0x184bf8: 0x240d0035
    ctx->pc = 0x184bf8u;
    SET_GPR_S32(ctx, 13, ADD32(GPR_U32(ctx, 0), 53));
label_184bfc:
    // 0x184bfc: 0x8e69029c
    ctx->pc = 0x184bfcu;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 19), 668)));
label_184c00:
    // 0x184c00: 0x240c0022
    ctx->pc = 0x184c00u;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 0), 34));
label_184c04:
    // 0x184c04: 0x240a0023
    ctx->pc = 0x184c04u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 35));
label_184c08:
    // 0x184c08: 0x240b0024
    ctx->pc = 0x184c08u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 0), 36));
label_184c0c:
    // 0x184c0c: 0x1000000b
label_184c10:
    if (ctx->pc == 0x184C10u) {
        ctx->pc = 0x184C10u;
        SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65534));
        ctx->pc = 0x184C14u;
        goto label_184c14;
    }
    ctx->pc = 0x184C0Cu;
    {
        const bool branch_taken_0x184c0c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x184C10u;
        SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65534));
        if (branch_taken_0x184c0c) {
            ctx->pc = 0x184C3Cu;
            goto label_184c3c;
        }
    }
    ctx->pc = 0x184C14u;
label_184c14:
    // 0x184c14: 0x0
    ctx->pc = 0x184c14u;
    // NOP
label_184c18:
    // 0x184c18: 0x52282
    ctx->pc = 0x184c18u;
    SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 5), 10));
label_184c1c:
    // 0x184c1c: 0x8e6302a0
    ctx->pc = 0x184c1cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 672)));
label_184c20:
    // 0x184c20: 0x461021
    ctx->pc = 0x184c20u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_184c24:
    // 0x184c24: 0xae6402a4
    ctx->pc = 0x184c24u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 676), GPR_U32(ctx, 4));
label_184c28:
    // 0x184c28: 0x62182a
    ctx->pc = 0x184c28u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 2)));
label_184c2c:
    // 0x184c2c: 0x492823
    ctx->pc = 0x184c2cu;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
label_184c30:
    // 0x184c30: 0xe3280b
    ctx->pc = 0x184c30u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 7));
label_184c34:
    // 0x184c34: 0x10000034
label_184c38:
    if (ctx->pc == 0x184C38u) {
        ctx->pc = 0x184C38u;
        WRITE32(ADD32(GPR_U32(ctx, 19), 668), GPR_U32(ctx, 2));
        ctx->pc = 0x184C3Cu;
        goto label_184c3c;
    }
    ctx->pc = 0x184C34u;
    {
        const bool branch_taken_0x184c34 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x184C38u;
        WRITE32(ADD32(GPR_U32(ctx, 19), 668), GPR_U32(ctx, 2));
        if (branch_taken_0x184c34) {
            ctx->pc = 0x184D08u;
            goto label_184d08;
        }
    }
    ctx->pc = 0x184C3Cu;
label_184c3c:
    // 0x184c3c: 0x2a820016
    ctx->pc = 0x184c3cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 20), 22));
label_184c40:
    // 0x184c40: 0x14400004
label_184c44:
    if (ctx->pc == 0x184C44u) {
        ctx->pc = 0x184C44u;
        SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 21), 21));
        ctx->pc = 0x184C48u;
        goto label_184c48;
    }
    ctx->pc = 0x184C40u;
    {
        const bool branch_taken_0x184c40 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x184C44u;
        SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 21), 21));
        if (branch_taken_0x184c40) {
            ctx->pc = 0x184C54u;
            goto label_184c54;
        }
    }
    ctx->pc = 0x184C48u;
label_184c48:
    // 0x184c48: 0x1b41023
    ctx->pc = 0x184c48u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 20)));
label_184c4c:
    // 0x184c4c: 0x511006
    ctx->pc = 0x184c4cu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 17), GPR_U32(ctx, 2) & 0x1F));
label_184c50:
    // 0x184c50: 0x621825
    ctx->pc = 0x184c50u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_184c54:
    // 0x184c54: 0x311c2
    ctx->pc = 0x184c54u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 3), 7));
label_184c58:
    // 0x184c58: 0x54400004
label_184c5c:
    if (ctx->pc == 0x184C5Cu) {
        ctx->pc = 0x184C5Cu;
        SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 3), 6));
        ctx->pc = 0x184C60u;
        goto label_184c60;
    }
    ctx->pc = 0x184C58u;
    {
        const bool branch_taken_0x184c58 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x184c58) {
            ctx->pc = 0x184C5Cu;
            SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 3), 6));
            ctx->pc = 0x184C6Cu;
            goto label_184c6c;
        }
    }
    ctx->pc = 0x184C60u;
label_184c60:
    // 0x184c60: 0x31040
    ctx->pc = 0x184c60u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 1));
label_184c64:
    // 0x184c64: 0x10000003
label_184c68:
    if (ctx->pc == 0x184C68u) {
        ctx->pc = 0x184C68u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
        ctx->pc = 0x184C6Cu;
        goto label_184c6c;
    }
    ctx->pc = 0x184C64u;
    {
        const bool branch_taken_0x184c64 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x184C68u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
        if (branch_taken_0x184c64) {
            ctx->pc = 0x184C74u;
            goto label_184c74;
        }
    }
    ctx->pc = 0x184C6Cu;
label_184c6c:
    // 0x184c6c: 0x21040
    ctx->pc = 0x184c6cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
label_184c70:
    // 0x184c70: 0x441021
    ctx->pc = 0x184c70u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_184c74:
    // 0x184c74: 0x84450000
    ctx->pc = 0x184c74u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_184c78:
    // 0x184c78: 0x30a6000f
    ctx->pc = 0x184c78u;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 5), 15));
label_184c7c:
    // 0x184c7c: 0x286a021
    ctx->pc = 0x184c7cu;
    SET_GPR_U32(ctx, 20, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 6)));
label_184c80:
    // 0x184c80: 0x2a820020
    ctx->pc = 0x184c80u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 20), 32));
label_184c84:
    // 0x184c84: 0x14400011
label_184c88:
    if (ctx->pc == 0x184C88u) {
        ctx->pc = 0x184C88u;
        SET_GPR_U32(ctx, 21, SLL32(GPR_U32(ctx, 21), GPR_U32(ctx, 6) & 0x1F));
        ctx->pc = 0x184C8Cu;
        goto label_184c8c;
    }
    ctx->pc = 0x184C84u;
    {
        const bool branch_taken_0x184c84 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x184C88u;
        SET_GPR_U32(ctx, 21, SLL32(GPR_U32(ctx, 21), GPR_U32(ctx, 6) & 0x1F));
        if (branch_taken_0x184c84) {
            ctx->pc = 0x184CCCu;
            goto label_184ccc;
        }
    }
    ctx->pc = 0x184C8Cu;
label_184c8c:
    // 0x184c8c: 0x2694ffe0
    ctx->pc = 0x184c8cu;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 4294967264));
label_184c90:
    // 0x184c90: 0x291a804
    ctx->pc = 0x184c90u;
    SET_GPR_U32(ctx, 21, SLL32(GPR_U32(ctx, 17), GPR_U32(ctx, 20) & 0x1F));
label_184c94:
    // 0x184c94: 0x82510000
    ctx->pc = 0x184c94u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_184c98:
    // 0x184c98: 0x26520001
    ctx->pc = 0x184c98u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
label_184c9c:
    // 0x184c9c: 0x92420000
    ctx->pc = 0x184c9cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_184ca0:
    // 0x184ca0: 0x118a00
    ctx->pc = 0x184ca0u;
    SET_GPR_U32(ctx, 17, SLL32(GPR_U32(ctx, 17), 8));
label_184ca4:
    // 0x184ca4: 0x26520001
    ctx->pc = 0x184ca4u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
label_184ca8:
    // 0x184ca8: 0x2228825
    ctx->pc = 0x184ca8u;
    SET_GPR_U32(ctx, 17, OR32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_184cac:
    // 0x184cac: 0x92430000
    ctx->pc = 0x184cacu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_184cb0:
    // 0x184cb0: 0x26520001
    ctx->pc = 0x184cb0u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
label_184cb4:
    // 0x184cb4: 0x118a00
    ctx->pc = 0x184cb4u;
    SET_GPR_U32(ctx, 17, SLL32(GPR_U32(ctx, 17), 8));
label_184cb8:
    // 0x184cb8: 0x92420000
    ctx->pc = 0x184cb8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_184cbc:
    // 0x184cbc: 0x2238825
    ctx->pc = 0x184cbcu;
    SET_GPR_U32(ctx, 17, OR32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_184cc0:
    // 0x184cc0: 0x118a00
    ctx->pc = 0x184cc0u;
    SET_GPR_U32(ctx, 17, SLL32(GPR_U32(ctx, 17), 8));
label_184cc4:
    // 0x184cc4: 0x26520001
    ctx->pc = 0x184cc4u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
label_184cc8:
    // 0x184cc8: 0x2228825
    ctx->pc = 0x184cc8u;
    SET_GPR_U32(ctx, 17, OR32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_184ccc:
    // 0x184ccc: 0x51082
    ctx->pc = 0x184cccu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 5), 2));
label_184cd0:
    // 0x184cd0: 0x304200ff
    ctx->pc = 0x184cd0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 255));
label_184cd4:
    // 0x184cd4: 0x23082
    ctx->pc = 0x184cd4u;
    SET_GPR_U32(ctx, 6, SRL32(GPR_U32(ctx, 2), 2));
label_184cd8:
    // 0x184cd8: 0x10ccffd9
label_184cdc:
    if (ctx->pc == 0x184CDCu) {
        ctx->pc = 0x184CDCu;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 20), 22));
        ctx->pc = 0x184CE0u;
        goto label_184ce0;
    }
    ctx->pc = 0x184CD8u;
    {
        const bool branch_taken_0x184cd8 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 12));
        ctx->pc = 0x184CDCu;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 20), 22));
        if (branch_taken_0x184cd8) {
            ctx->pc = 0x184C40u;
            goto label_184c40;
        }
    }
    ctx->pc = 0x184CE0u;
label_184ce0:
    // 0x184ce0: 0x14ca0005
label_184ce4:
    if (ctx->pc == 0x184CE4u) {
        ctx->pc = 0x184CE8u;
        goto label_184ce8;
    }
    ctx->pc = 0x184CE0u;
    {
        const bool branch_taken_0x184ce0 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 10));
        if (branch_taken_0x184ce0) {
            ctx->pc = 0x184CF8u;
            goto label_184cf8;
        }
    }
    ctx->pc = 0x184CE8u;
label_184ce8:
    // 0x184ce8: 0x8e62029c
    ctx->pc = 0x184ce8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 668)));
label_184cec:
    // 0x184cec: 0x24420021
    ctx->pc = 0x184cecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 33));
label_184cf0:
    // 0x184cf0: 0x1000ffd2
label_184cf4:
    if (ctx->pc == 0x184CF4u) {
        ctx->pc = 0x184CF4u;
        WRITE32(ADD32(GPR_U32(ctx, 19), 668), GPR_U32(ctx, 2));
        ctx->pc = 0x184CF8u;
        goto label_184cf8;
    }
    ctx->pc = 0x184CF0u;
    {
        const bool branch_taken_0x184cf0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x184CF4u;
        WRITE32(ADD32(GPR_U32(ctx, 19), 668), GPR_U32(ctx, 2));
        if (branch_taken_0x184cf0) {
            ctx->pc = 0x184C3Cu;
            goto label_184c3c;
        }
    }
    ctx->pc = 0x184CF8u;
label_184cf8:
    // 0x184cf8: 0x54cbffc7
label_184cfc:
    if (ctx->pc == 0x184CFCu) {
        ctx->pc = 0x184CFCu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 668)));
        ctx->pc = 0x184D00u;
        goto label_184d00;
    }
    ctx->pc = 0x184CF8u;
    {
        const bool branch_taken_0x184cf8 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 11));
        if (branch_taken_0x184cf8) {
            ctx->pc = 0x184CFCu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 668)));
            ctx->pc = 0x184C18u;
            goto label_184c18;
        }
    }
    ctx->pc = 0x184D00u;
label_184d00:
    // 0x184d00: 0x3c05ffff
    ctx->pc = 0x184d00u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65535 << 16));
label_184d04:
    // 0x184d04: 0x34a5fffe
    ctx->pc = 0x184d04u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 65534));
label_184d08:
    // 0x184d08: 0x3c02ffff
    ctx->pc = 0x184d08u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
label_184d0c:
    // 0x184d0c: 0x3442fffe
    ctx->pc = 0x184d0cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65534));
label_184d10:
    // 0x184d10: 0x10a200c9
label_184d14:
    if (ctx->pc == 0x184D14u) {
        ctx->pc = 0x184D14u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 20), 7));
        ctx->pc = 0x184D18u;
        goto label_184d18;
    }
    ctx->pc = 0x184D10u;
    {
        const bool branch_taken_0x184d10 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 2));
        ctx->pc = 0x184D14u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 20), 7));
        if (branch_taken_0x184d10) {
            ctx->pc = 0x185038u;
            goto label_185038;
        }
    }
    ctx->pc = 0x184D18u;
label_184d18:
    // 0x184d18: 0x15c0000d
label_184d1c:
    if (ctx->pc == 0x184D1Cu) {
        ctx->pc = 0x184D1Cu;
        SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 19), 596));
        ctx->pc = 0x184D20u;
        goto label_184d20;
    }
    ctx->pc = 0x184D18u;
    {
        const bool branch_taken_0x184d18 = (GPR_U32(ctx, 14) != GPR_U32(ctx, 0));
        ctx->pc = 0x184D1Cu;
        SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 19), 596));
        if (branch_taken_0x184d18) {
            ctx->pc = 0x184D50u;
            goto label_184d50;
        }
    }
    ctx->pc = 0x184D20u;
label_184d20:
    // 0x184d20: 0x2ca20002
    ctx->pc = 0x184d20u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 5), 2));
label_184d24:
    // 0x184d24: 0x5440000b
label_184d28:
    if (ctx->pc == 0x184D28u) {
        ctx->pc = 0x184D28u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 676)));
        ctx->pc = 0x184D2Cu;
        goto label_184d2c;
    }
    ctx->pc = 0x184D24u;
    {
        const bool branch_taken_0x184d24 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x184d24) {
            ctx->pc = 0x184D28u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 676)));
            ctx->pc = 0x184D54u;
            goto label_184d54;
        }
    }
    ctx->pc = 0x184D2Cu;
label_184d2c:
    // 0x184d2c: 0x8e620230
    ctx->pc = 0x184d2cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 560)));
label_184d30:
    // 0x184d30: 0x40f809
label_184d34:
    if (ctx->pc == 0x184D34u) {
        ctx->pc = 0x184D34u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x184D38u;
        goto label_184d38;
    }
    ctx->pc = 0x184D30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x184D38u);
        ctx->pc = 0x184D34u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x184BA0u: goto label_184ba0;
            case 0x184BA4u: goto label_184ba4;
            case 0x184BA8u: goto label_184ba8;
            case 0x184BACu: goto label_184bac;
            case 0x184BB0u: goto label_184bb0;
            case 0x184BB4u: goto label_184bb4;
            case 0x184BB8u: goto label_184bb8;
            case 0x184BBCu: goto label_184bbc;
            case 0x184BC0u: goto label_184bc0;
            case 0x184BC4u: goto label_184bc4;
            case 0x184BC8u: goto label_184bc8;
            case 0x184BCCu: goto label_184bcc;
            case 0x184BD0u: goto label_184bd0;
            case 0x184BD4u: goto label_184bd4;
            case 0x184BD8u: goto label_184bd8;
            case 0x184BDCu: goto label_184bdc;
            case 0x184BE0u: goto label_184be0;
            case 0x184BE4u: goto label_184be4;
            case 0x184BE8u: goto label_184be8;
            case 0x184BECu: goto label_184bec;
            case 0x184BF0u: goto label_184bf0;
            case 0x184BF4u: goto label_184bf4;
            case 0x184BF8u: goto label_184bf8;
            case 0x184BFCu: goto label_184bfc;
            case 0x184C00u: goto label_184c00;
            case 0x184C04u: goto label_184c04;
            case 0x184C08u: goto label_184c08;
            case 0x184C0Cu: goto label_184c0c;
            case 0x184C10u: goto label_184c10;
            case 0x184C14u: goto label_184c14;
            case 0x184C18u: goto label_184c18;
            case 0x184C1Cu: goto label_184c1c;
            case 0x184C20u: goto label_184c20;
            case 0x184C24u: goto label_184c24;
            case 0x184C28u: goto label_184c28;
            case 0x184C2Cu: goto label_184c2c;
            case 0x184C30u: goto label_184c30;
            case 0x184C34u: goto label_184c34;
            case 0x184C38u: goto label_184c38;
            case 0x184C3Cu: goto label_184c3c;
            case 0x184C40u: goto label_184c40;
            case 0x184C44u: goto label_184c44;
            case 0x184C48u: goto label_184c48;
            case 0x184C4Cu: goto label_184c4c;
            case 0x184C50u: goto label_184c50;
            case 0x184C54u: goto label_184c54;
            case 0x184C58u: goto label_184c58;
            case 0x184C5Cu: goto label_184c5c;
            case 0x184C60u: goto label_184c60;
            case 0x184C64u: goto label_184c64;
            case 0x184C68u: goto label_184c68;
            case 0x184C6Cu: goto label_184c6c;
            case 0x184C70u: goto label_184c70;
            case 0x184C74u: goto label_184c74;
            case 0x184C78u: goto label_184c78;
            case 0x184C7Cu: goto label_184c7c;
            case 0x184C80u: goto label_184c80;
            case 0x184C84u: goto label_184c84;
            case 0x184C88u: goto label_184c88;
            case 0x184C8Cu: goto label_184c8c;
            case 0x184C90u: goto label_184c90;
            case 0x184C94u: goto label_184c94;
            case 0x184C98u: goto label_184c98;
            case 0x184C9Cu: goto label_184c9c;
            case 0x184CA0u: goto label_184ca0;
            case 0x184CA4u: goto label_184ca4;
            case 0x184CA8u: goto label_184ca8;
            case 0x184CACu: goto label_184cac;
            case 0x184CB0u: goto label_184cb0;
            case 0x184CB4u: goto label_184cb4;
            case 0x184CB8u: goto label_184cb8;
            case 0x184CBCu: goto label_184cbc;
            case 0x184CC0u: goto label_184cc0;
            case 0x184CC4u: goto label_184cc4;
            case 0x184CC8u: goto label_184cc8;
            case 0x184CCCu: goto label_184ccc;
            case 0x184CD0u: goto label_184cd0;
            case 0x184CD4u: goto label_184cd4;
            case 0x184CD8u: goto label_184cd8;
            case 0x184CDCu: goto label_184cdc;
            case 0x184CE0u: goto label_184ce0;
            case 0x184CE4u: goto label_184ce4;
            case 0x184CE8u: goto label_184ce8;
            case 0x184CECu: goto label_184cec;
            case 0x184CF0u: goto label_184cf0;
            case 0x184CF4u: goto label_184cf4;
            case 0x184CF8u: goto label_184cf8;
            case 0x184CFCu: goto label_184cfc;
            case 0x184D00u: goto label_184d00;
            case 0x184D04u: goto label_184d04;
            case 0x184D08u: goto label_184d08;
            case 0x184D0Cu: goto label_184d0c;
            case 0x184D10u: goto label_184d10;
            case 0x184D14u: goto label_184d14;
            case 0x184D18u: goto label_184d18;
            case 0x184D1Cu: goto label_184d1c;
            case 0x184D20u: goto label_184d20;
            case 0x184D24u: goto label_184d24;
            case 0x184D28u: goto label_184d28;
            case 0x184D2Cu: goto label_184d2c;
            case 0x184D30u: goto label_184d30;
            case 0x184D34u: goto label_184d34;
            case 0x184D38u: goto label_184d38;
            case 0x184D3Cu: goto label_184d3c;
            case 0x184D40u: goto label_184d40;
            case 0x184D44u: goto label_184d44;
            case 0x184D48u: goto label_184d48;
            case 0x184D4Cu: goto label_184d4c;
            case 0x184D50u: goto label_184d50;
            case 0x184D54u: goto label_184d54;
            case 0x184D58u: goto label_184d58;
            case 0x184D5Cu: goto label_184d5c;
            case 0x184D60u: goto label_184d60;
            case 0x184D64u: goto label_184d64;
            case 0x184D68u: goto label_184d68;
            case 0x184D6Cu: goto label_184d6c;
            case 0x184D70u: goto label_184d70;
            case 0x184D74u: goto label_184d74;
            case 0x184D78u: goto label_184d78;
            case 0x184D7Cu: goto label_184d7c;
            case 0x184D80u: goto label_184d80;
            case 0x184D84u: goto label_184d84;
            case 0x184D88u: goto label_184d88;
            case 0x184D8Cu: goto label_184d8c;
            case 0x184D90u: goto label_184d90;
            case 0x184D94u: goto label_184d94;
            case 0x184D98u: goto label_184d98;
            case 0x184D9Cu: goto label_184d9c;
            case 0x184DA0u: goto label_184da0;
            case 0x184DA4u: goto label_184da4;
            case 0x184DA8u: goto label_184da8;
            case 0x184DACu: goto label_184dac;
            case 0x184DB0u: goto label_184db0;
            case 0x184DB4u: goto label_184db4;
            case 0x184DB8u: goto label_184db8;
            case 0x184DBCu: goto label_184dbc;
            case 0x184DC0u: goto label_184dc0;
            case 0x184DC4u: goto label_184dc4;
            case 0x184DC8u: goto label_184dc8;
            case 0x184DCCu: goto label_184dcc;
            case 0x184DD0u: goto label_184dd0;
            case 0x184DD4u: goto label_184dd4;
            case 0x184DD8u: goto label_184dd8;
            case 0x184DDCu: goto label_184ddc;
            case 0x184DE0u: goto label_184de0;
            case 0x184DE4u: goto label_184de4;
            case 0x184DE8u: goto label_184de8;
            case 0x184DECu: goto label_184dec;
            case 0x184DF0u: goto label_184df0;
            case 0x184DF4u: goto label_184df4;
            case 0x184DF8u: goto label_184df8;
            case 0x184DFCu: goto label_184dfc;
            case 0x184E00u: goto label_184e00;
            case 0x184E04u: goto label_184e04;
            case 0x184E08u: goto label_184e08;
            case 0x184E0Cu: goto label_184e0c;
            case 0x184E10u: goto label_184e10;
            case 0x184E14u: goto label_184e14;
            case 0x184E18u: goto label_184e18;
            case 0x184E1Cu: goto label_184e1c;
            case 0x184E20u: goto label_184e20;
            case 0x184E24u: goto label_184e24;
            case 0x184E28u: goto label_184e28;
            case 0x184E2Cu: goto label_184e2c;
            case 0x184E30u: goto label_184e30;
            case 0x184E34u: goto label_184e34;
            case 0x184E38u: goto label_184e38;
            case 0x184E3Cu: goto label_184e3c;
            case 0x184E40u: goto label_184e40;
            case 0x184E44u: goto label_184e44;
            case 0x184E48u: goto label_184e48;
            case 0x184E4Cu: goto label_184e4c;
            case 0x184E50u: goto label_184e50;
            case 0x184E54u: goto label_184e54;
            case 0x184E58u: goto label_184e58;
            case 0x184E5Cu: goto label_184e5c;
            case 0x184E60u: goto label_184e60;
            case 0x184E64u: goto label_184e64;
            case 0x184E68u: goto label_184e68;
            case 0x184E6Cu: goto label_184e6c;
            case 0x184E70u: goto label_184e70;
            case 0x184E74u: goto label_184e74;
            case 0x184E78u: goto label_184e78;
            case 0x184E7Cu: goto label_184e7c;
            case 0x184E80u: goto label_184e80;
            case 0x184E84u: goto label_184e84;
            case 0x184E88u: goto label_184e88;
            case 0x184E8Cu: goto label_184e8c;
            case 0x184E90u: goto label_184e90;
            case 0x184E94u: goto label_184e94;
            case 0x184E98u: goto label_184e98;
            case 0x184E9Cu: goto label_184e9c;
            case 0x184EA0u: goto label_184ea0;
            case 0x184EA4u: goto label_184ea4;
            case 0x184EA8u: goto label_184ea8;
            case 0x184EACu: goto label_184eac;
            case 0x184EB0u: goto label_184eb0;
            case 0x184EB4u: goto label_184eb4;
            case 0x184EB8u: goto label_184eb8;
            case 0x184EBCu: goto label_184ebc;
            case 0x184EC0u: goto label_184ec0;
            case 0x184EC4u: goto label_184ec4;
            case 0x184EC8u: goto label_184ec8;
            case 0x184ECCu: goto label_184ecc;
            case 0x184ED0u: goto label_184ed0;
            case 0x184ED4u: goto label_184ed4;
            case 0x184ED8u: goto label_184ed8;
            case 0x184EDCu: goto label_184edc;
            case 0x184EE0u: goto label_184ee0;
            case 0x184EE4u: goto label_184ee4;
            case 0x184EE8u: goto label_184ee8;
            case 0x184EECu: goto label_184eec;
            case 0x184EF0u: goto label_184ef0;
            case 0x184EF4u: goto label_184ef4;
            case 0x184EF8u: goto label_184ef8;
            case 0x184EFCu: goto label_184efc;
            case 0x184F00u: goto label_184f00;
            case 0x184F04u: goto label_184f04;
            case 0x184F08u: goto label_184f08;
            case 0x184F0Cu: goto label_184f0c;
            case 0x184F10u: goto label_184f10;
            case 0x184F14u: goto label_184f14;
            case 0x184F18u: goto label_184f18;
            case 0x184F1Cu: goto label_184f1c;
            case 0x184F20u: goto label_184f20;
            case 0x184F24u: goto label_184f24;
            case 0x184F28u: goto label_184f28;
            case 0x184F2Cu: goto label_184f2c;
            case 0x184F30u: goto label_184f30;
            case 0x184F34u: goto label_184f34;
            case 0x184F38u: goto label_184f38;
            case 0x184F3Cu: goto label_184f3c;
            case 0x184F40u: goto label_184f40;
            case 0x184F44u: goto label_184f44;
            case 0x184F48u: goto label_184f48;
            case 0x184F4Cu: goto label_184f4c;
            case 0x184F50u: goto label_184f50;
            case 0x184F54u: goto label_184f54;
            case 0x184F58u: goto label_184f58;
            case 0x184F5Cu: goto label_184f5c;
            case 0x184F60u: goto label_184f60;
            case 0x184F64u: goto label_184f64;
            case 0x184F68u: goto label_184f68;
            case 0x184F6Cu: goto label_184f6c;
            case 0x184F70u: goto label_184f70;
            case 0x184F74u: goto label_184f74;
            case 0x184F78u: goto label_184f78;
            case 0x184F7Cu: goto label_184f7c;
            case 0x184F80u: goto label_184f80;
            case 0x184F84u: goto label_184f84;
            case 0x184F88u: goto label_184f88;
            case 0x184F8Cu: goto label_184f8c;
            case 0x184F90u: goto label_184f90;
            case 0x184F94u: goto label_184f94;
            case 0x184F98u: goto label_184f98;
            case 0x184F9Cu: goto label_184f9c;
            case 0x184FA0u: goto label_184fa0;
            case 0x184FA4u: goto label_184fa4;
            case 0x184FA8u: goto label_184fa8;
            case 0x184FACu: goto label_184fac;
            case 0x184FB0u: goto label_184fb0;
            case 0x184FB4u: goto label_184fb4;
            case 0x184FB8u: goto label_184fb8;
            case 0x184FBCu: goto label_184fbc;
            case 0x184FC0u: goto label_184fc0;
            case 0x184FC4u: goto label_184fc4;
            case 0x184FC8u: goto label_184fc8;
            case 0x184FCCu: goto label_184fcc;
            case 0x184FD0u: goto label_184fd0;
            case 0x184FD4u: goto label_184fd4;
            case 0x184FD8u: goto label_184fd8;
            case 0x184FDCu: goto label_184fdc;
            case 0x184FE0u: goto label_184fe0;
            case 0x184FE4u: goto label_184fe4;
            case 0x184FE8u: goto label_184fe8;
            case 0x184FECu: goto label_184fec;
            case 0x184FF0u: goto label_184ff0;
            case 0x184FF4u: goto label_184ff4;
            case 0x184FF8u: goto label_184ff8;
            case 0x184FFCu: goto label_184ffc;
            case 0x185000u: goto label_185000;
            case 0x185004u: goto label_185004;
            case 0x185008u: goto label_185008;
            case 0x18500Cu: goto label_18500c;
            case 0x185010u: goto label_185010;
            case 0x185014u: goto label_185014;
            case 0x185018u: goto label_185018;
            case 0x18501Cu: goto label_18501c;
            case 0x185020u: goto label_185020;
            case 0x185024u: goto label_185024;
            case 0x185028u: goto label_185028;
            case 0x18502Cu: goto label_18502c;
            case 0x185030u: goto label_185030;
            case 0x185034u: goto label_185034;
            case 0x185038u: goto label_185038;
            case 0x18503Cu: goto label_18503c;
            case 0x185040u: goto label_185040;
            case 0x185044u: goto label_185044;
            case 0x185048u: goto label_185048;
            case 0x18504Cu: goto label_18504c;
            case 0x185050u: goto label_185050;
            case 0x185054u: goto label_185054;
            case 0x185058u: goto label_185058;
            case 0x18505Cu: goto label_18505c;
            case 0x185060u: goto label_185060;
            case 0x185064u: goto label_185064;
            case 0x185068u: goto label_185068;
            case 0x18506Cu: goto label_18506c;
            case 0x185070u: goto label_185070;
            case 0x185074u: goto label_185074;
            case 0x185078u: goto label_185078;
            case 0x18507Cu: goto label_18507c;
            case 0x185080u: goto label_185080;
            case 0x185084u: goto label_185084;
            case 0x185088u: goto label_185088;
            case 0x18508Cu: goto label_18508c;
            case 0x185090u: goto label_185090;
            case 0x185094u: goto label_185094;
            case 0x185098u: goto label_185098;
            case 0x18509Cu: goto label_18509c;
            case 0x1850A0u: goto label_1850a0;
            case 0x1850A4u: goto label_1850a4;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x184D38u; }
            if (ctx->pc != 0x184D38u) { return; }
        }
    }
    ctx->pc = 0x184D38u;
label_184d38:
    // 0x184d38: 0xc06142a
label_184d3c:
    if (ctx->pc == 0x184D3Cu) {
        ctx->pc = 0x184D3Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x184D40u;
        goto label_184d40;
    }
    ctx->pc = 0x184D38u;
    SET_GPR_U32(ctx, 31, 0x184D40u);
    ctx->pc = 0x184D3Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1850A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MPVDEC_ResetMv_0x1850a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184D40u; }
        else if (ctx->pc != 0x184D40u) { ctx->pc = 0x184D40u; }
    }
    if (ctx->pc != 0x184D40u) { return; }
    ctx->pc = 0x184D40u;
label_184d40:
    // 0x184d40: 0xc061430
label_184d44:
    if (ctx->pc == 0x184D44u) {
        ctx->pc = 0x184D44u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x184D48u;
        goto label_184d48;
    }
    ctx->pc = 0x184D40u;
    SET_GPR_U32(ctx, 31, 0x184D48u);
    ctx->pc = 0x184D44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1850C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MPVDEC_ResetDc_0x1850c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184D48u; }
        else if (ctx->pc != 0x184D48u) { ctx->pc = 0x184D48u; }
    }
    if (ctx->pc != 0x184D48u) { return; }
    ctx->pc = 0x184D48u;
label_184d48:
    // 0x184d48: 0x10000002
label_184d4c:
    if (ctx->pc == 0x184D4Cu) {
        ctx->pc = 0x184D4Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 676)));
        ctx->pc = 0x184D50u;
        goto label_184d50;
    }
    ctx->pc = 0x184D48u;
    {
        const bool branch_taken_0x184d48 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x184D4Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 676)));
        if (branch_taken_0x184d48) {
            ctx->pc = 0x184D54u;
            goto label_184d54;
        }
    }
    ctx->pc = 0x184D50u;
label_184d50:
    // 0x184d50: 0x8e6402a4
    ctx->pc = 0x184d50u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 676)));
label_184d54:
    // 0x184d54: 0x30820020
    ctx->pc = 0x184d54u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 32));
label_184d58:
    // 0x184d58: 0x14400028
label_184d5c:
    if (ctx->pc == 0x184D5Cu) {
        ctx->pc = 0x184D5Cu;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 16));
        ctx->pc = 0x184D60u;
        goto label_184d60;
    }
    ctx->pc = 0x184D58u;
    {
        const bool branch_taken_0x184d58 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x184D5Cu;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 16));
        if (branch_taken_0x184d58) {
            ctx->pc = 0x184DFCu;
            goto label_184dfc;
        }
    }
    ctx->pc = 0x184D60u;
label_184d60:
    // 0x184d60: 0x2a82001c
    ctx->pc = 0x184d60u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 20), 28));
label_184d64:
    // 0x184d64: 0x14400005
label_184d68:
    if (ctx->pc == 0x184D68u) {
        ctx->pc = 0x184D68u;
        SET_GPR_U32(ctx, 5, SRL32(GPR_U32(ctx, 21), 27));
        ctx->pc = 0x184D6Cu;
        goto label_184d6c;
    }
    ctx->pc = 0x184D64u;
    {
        const bool branch_taken_0x184d64 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x184D68u;
        SET_GPR_U32(ctx, 5, SRL32(GPR_U32(ctx, 21), 27));
        if (branch_taken_0x184d64) {
            ctx->pc = 0x184D7Cu;
            goto label_184d7c;
        }
    }
    ctx->pc = 0x184D6Cu;
label_184d6c:
    // 0x184d6c: 0x2402003b
    ctx->pc = 0x184d6cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 59));
label_184d70:
    // 0x184d70: 0x541023
    ctx->pc = 0x184d70u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_184d74:
    // 0x184d74: 0x511006
    ctx->pc = 0x184d74u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 17), GPR_U32(ctx, 2) & 0x1F));
label_184d78:
    // 0x184d78: 0xa22825
    ctx->pc = 0x184d78u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_184d7c:
    // 0x184d7c: 0x3c040024
    ctx->pc = 0x184d7cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
label_184d80:
    // 0x184d80: 0x51040
    ctx->pc = 0x184d80u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 1));
label_184d84:
    // 0x184d84: 0x8c831a40
    ctx->pc = 0x184d84u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 6720)));
label_184d88:
    // 0x184d88: 0x431021
    ctx->pc = 0x184d88u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_184d8c:
    // 0x184d8c: 0x84450000
    ctx->pc = 0x184d8cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_184d90:
    // 0x184d90: 0x51a02
    ctx->pc = 0x184d90u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 5), 8));
label_184d94:
    // 0x184d94: 0x30a500ff
    ctx->pc = 0x184d94u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), 255));
label_184d98:
    // 0x184d98: 0x285a021
    ctx->pc = 0x184d98u;
    SET_GPR_U32(ctx, 20, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
label_184d9c:
    // 0x184d9c: 0x2a820020
    ctx->pc = 0x184d9cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 20), 32));
label_184da0:
    // 0x184da0: 0x14400013
label_184da4:
    if (ctx->pc == 0x184DA4u) {
        ctx->pc = 0x184DA4u;
        WRITE32(ADD32(GPR_U32(ctx, 19), 676), GPR_U32(ctx, 3));
        ctx->pc = 0x184DA8u;
        goto label_184da8;
    }
    ctx->pc = 0x184DA0u;
    {
        const bool branch_taken_0x184da0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x184DA4u;
        WRITE32(ADD32(GPR_U32(ctx, 19), 676), GPR_U32(ctx, 3));
        if (branch_taken_0x184da0) {
            ctx->pc = 0x184DF0u;
            goto label_184df0;
        }
    }
    ctx->pc = 0x184DA8u;
label_184da8:
    // 0x184da8: 0x2694ffe0
    ctx->pc = 0x184da8u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 4294967264));
label_184dac:
    // 0x184dac: 0x60202d
    ctx->pc = 0x184dacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_184db0:
    // 0x184db0: 0x291a804
    ctx->pc = 0x184db0u;
    SET_GPR_U32(ctx, 21, SLL32(GPR_U32(ctx, 17), GPR_U32(ctx, 20) & 0x1F));
label_184db4:
    // 0x184db4: 0x82510000
    ctx->pc = 0x184db4u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_184db8:
    // 0x184db8: 0x26520001
    ctx->pc = 0x184db8u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
label_184dbc:
    // 0x184dbc: 0x92420000
    ctx->pc = 0x184dbcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_184dc0:
    // 0x184dc0: 0x118a00
    ctx->pc = 0x184dc0u;
    SET_GPR_U32(ctx, 17, SLL32(GPR_U32(ctx, 17), 8));
label_184dc4:
    // 0x184dc4: 0x26520001
    ctx->pc = 0x184dc4u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
label_184dc8:
    // 0x184dc8: 0x2228825
    ctx->pc = 0x184dc8u;
    SET_GPR_U32(ctx, 17, OR32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_184dcc:
    // 0x184dcc: 0x92430000
    ctx->pc = 0x184dccu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_184dd0:
    // 0x184dd0: 0x26520001
    ctx->pc = 0x184dd0u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
label_184dd4:
    // 0x184dd4: 0x118a00
    ctx->pc = 0x184dd4u;
    SET_GPR_U32(ctx, 17, SLL32(GPR_U32(ctx, 17), 8));
label_184dd8:
    // 0x184dd8: 0x92420000
    ctx->pc = 0x184dd8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_184ddc:
    // 0x184ddc: 0x2238825
    ctx->pc = 0x184ddcu;
    SET_GPR_U32(ctx, 17, OR32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_184de0:
    // 0x184de0: 0x118a00
    ctx->pc = 0x184de0u;
    SET_GPR_U32(ctx, 17, SLL32(GPR_U32(ctx, 17), 8));
label_184de4:
    // 0x184de4: 0x26520001
    ctx->pc = 0x184de4u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
label_184de8:
    // 0x184de8: 0x10000003
label_184dec:
    if (ctx->pc == 0x184DECu) {
        ctx->pc = 0x184DECu;
        SET_GPR_U32(ctx, 17, OR32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->pc = 0x184DF0u;
        goto label_184df0;
    }
    ctx->pc = 0x184DE8u;
    {
        const bool branch_taken_0x184de8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x184DECu;
        SET_GPR_U32(ctx, 17, OR32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        if (branch_taken_0x184de8) {
            ctx->pc = 0x184DF8u;
            goto label_184df8;
        }
    }
    ctx->pc = 0x184DF0u;
label_184df0:
    // 0x184df0: 0xb5a804
    ctx->pc = 0x184df0u;
    SET_GPR_U32(ctx, 21, SLL32(GPR_U32(ctx, 21), GPR_U32(ctx, 5) & 0x1F));
label_184df4:
    // 0x184df4: 0x60202d
    ctx->pc = 0x184df4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_184df8:
    // 0x184df8: 0x30820010
    ctx->pc = 0x184df8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 16));
label_184dfc:
    // 0x184dfc: 0x1040001f
label_184e00:
    if (ctx->pc == 0x184E00u) {
        ctx->pc = 0x184E00u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 20), 27));
        ctx->pc = 0x184E04u;
        goto label_184e04;
    }
    ctx->pc = 0x184DFCu;
    {
        const bool branch_taken_0x184dfc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x184E00u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 20), 27));
        if (branch_taken_0x184dfc) {
            ctx->pc = 0x184E7Cu;
            goto label_184e7c;
        }
    }
    ctx->pc = 0x184E04u;
label_184e04:
    // 0x184e04: 0x1440001a
label_184e08:
    if (ctx->pc == 0x184E08u) {
        ctx->pc = 0x184E08u;
        SET_GPR_U32(ctx, 5, SRL32(GPR_U32(ctx, 21), 27));
        ctx->pc = 0x184E0Cu;
        goto label_184e0c;
    }
    ctx->pc = 0x184E04u;
    {
        const bool branch_taken_0x184e04 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x184E08u;
        SET_GPR_U32(ctx, 5, SRL32(GPR_U32(ctx, 21), 27));
        if (branch_taken_0x184e04) {
            ctx->pc = 0x184E70u;
            goto label_184e70;
        }
    }
    ctx->pc = 0x184E0Cu;
label_184e0c:
    // 0x184e0c: 0x2694ffe5
    ctx->pc = 0x184e0cu;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 4294967269));
label_184e10:
    // 0x184e10: 0x12800007
label_184e14:
    if (ctx->pc == 0x184E14u) {
        ctx->pc = 0x184E14u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x184E18u;
        goto label_184e18;
    }
    ctx->pc = 0x184E10u;
    {
        const bool branch_taken_0x184e10 = (GPR_U32(ctx, 20) == GPR_U32(ctx, 0));
        ctx->pc = 0x184E14u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
        if (branch_taken_0x184e10) {
            ctx->pc = 0x184E30u;
            goto label_184e30;
        }
    }
    ctx->pc = 0x184E18u;
label_184e18:
    // 0x184e18: 0x541023
    ctx->pc = 0x184e18u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_184e1c:
    // 0x184e1c: 0x511006
    ctx->pc = 0x184e1cu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 17), GPR_U32(ctx, 2) & 0x1F));
label_184e20:
    // 0x184e20: 0x2a2a825
    ctx->pc = 0x184e20u;
    SET_GPR_U32(ctx, 21, OR32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_184e24:
    // 0x184e24: 0x152ec2
    ctx->pc = 0x184e24u;
    SET_GPR_U32(ctx, 5, SRL32(GPR_U32(ctx, 21), 27));
label_184e28:
    // 0x184e28: 0x10000002
label_184e2c:
    if (ctx->pc == 0x184E2Cu) {
        ctx->pc = 0x184E2Cu;
        SET_GPR_U32(ctx, 21, SLL32(GPR_U32(ctx, 17), GPR_U32(ctx, 20) & 0x1F));
        ctx->pc = 0x184E30u;
        goto label_184e30;
    }
    ctx->pc = 0x184E28u;
    {
        const bool branch_taken_0x184e28 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x184E2Cu;
        SET_GPR_U32(ctx, 21, SLL32(GPR_U32(ctx, 17), GPR_U32(ctx, 20) & 0x1F));
        if (branch_taken_0x184e28) {
            ctx->pc = 0x184E34u;
            goto label_184e34;
        }
    }
    ctx->pc = 0x184E30u;
label_184e30:
    // 0x184e30: 0x220a82d
    ctx->pc = 0x184e30u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_184e34:
    // 0x184e34: 0x82510000
    ctx->pc = 0x184e34u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_184e38:
    // 0x184e38: 0x26520001
    ctx->pc = 0x184e38u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
label_184e3c:
    // 0x184e3c: 0x92420000
    ctx->pc = 0x184e3cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_184e40:
    // 0x184e40: 0x118a00
    ctx->pc = 0x184e40u;
    SET_GPR_U32(ctx, 17, SLL32(GPR_U32(ctx, 17), 8));
label_184e44:
    // 0x184e44: 0x26520001
    ctx->pc = 0x184e44u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
label_184e48:
    // 0x184e48: 0x2228825
    ctx->pc = 0x184e48u;
    SET_GPR_U32(ctx, 17, OR32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_184e4c:
    // 0x184e4c: 0x92430000
    ctx->pc = 0x184e4cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_184e50:
    // 0x184e50: 0x26520001
    ctx->pc = 0x184e50u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
label_184e54:
    // 0x184e54: 0x118a00
    ctx->pc = 0x184e54u;
    SET_GPR_U32(ctx, 17, SLL32(GPR_U32(ctx, 17), 8));
label_184e58:
    // 0x184e58: 0x92420000
    ctx->pc = 0x184e58u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_184e5c:
    // 0x184e5c: 0x2238825
    ctx->pc = 0x184e5cu;
    SET_GPR_U32(ctx, 17, OR32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_184e60:
    // 0x184e60: 0x118a00
    ctx->pc = 0x184e60u;
    SET_GPR_U32(ctx, 17, SLL32(GPR_U32(ctx, 17), 8));
label_184e64:
    // 0x184e64: 0x26520001
    ctx->pc = 0x184e64u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
label_184e68:
    // 0x184e68: 0x10000003
label_184e6c:
    if (ctx->pc == 0x184E6Cu) {
        ctx->pc = 0x184E6Cu;
        SET_GPR_U32(ctx, 17, OR32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->pc = 0x184E70u;
        goto label_184e70;
    }
    ctx->pc = 0x184E68u;
    {
        const bool branch_taken_0x184e68 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x184E6Cu;
        SET_GPR_U32(ctx, 17, OR32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        if (branch_taken_0x184e68) {
            ctx->pc = 0x184E78u;
            goto label_184e78;
        }
    }
    ctx->pc = 0x184E70u;
label_184e70:
    // 0x184e70: 0x26940005
    ctx->pc = 0x184e70u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 5));
label_184e74:
    // 0x184e74: 0x15a940
    ctx->pc = 0x184e74u;
    SET_GPR_U32(ctx, 21, SLL32(GPR_U32(ctx, 21), 5));
label_184e78:
    // 0x184e78: 0xae650250
    ctx->pc = 0x184e78u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 592), GPR_U32(ctx, 5));
label_184e7c:
    // 0x184e7c: 0x30820008
    ctx->pc = 0x184e7cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 8));
label_184e80:
    // 0x184e80: 0x10400017
label_184e84:
    if (ctx->pc == 0x184E84u) {
        ctx->pc = 0x184E84u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x184E88u;
        goto label_184e88;
    }
    ctx->pc = 0x184E80u;
    {
        const bool branch_taken_0x184e80 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x184E84u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x184e80) {
            ctx->pc = 0x184EE0u;
            goto label_184ee0;
        }
    }
    ctx->pc = 0x184E88u;
label_184e88:
    // 0x184e88: 0xae750000
    ctx->pc = 0x184e88u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 21));
label_184e8c:
    // 0x184e8c: 0xae710004
    ctx->pc = 0x184e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 17));
label_184e90:
    // 0x184e90: 0x2c0282d
    ctx->pc = 0x184e90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_184e94:
    // 0x184e94: 0xae740008
    ctx->pc = 0x184e94u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 20));
label_184e98:
    // 0x184e98: 0x2666026c
    ctx->pc = 0x184e98u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 19), 620));
label_184e9c:
    // 0x184e9c: 0xae72000c
    ctx->pc = 0x184e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 18));
label_184ea0:
    // 0x184ea0: 0xc061436
label_184ea4:
    if (ctx->pc == 0x184EA4u) {
        ctx->pc = 0x184EA4u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 19), 612));
        ctx->pc = 0x184EA8u;
        goto label_184ea8;
    }
    ctx->pc = 0x184EA0u;
    SET_GPR_U32(ctx, 31, 0x184EA8u);
    ctx->pc = 0x184EA4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 19), 612));
    ctx->pc = 0x1850D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        mpvdec_MotionSub_0x1850d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184EA8u; }
        else if (ctx->pc != 0x184EA8u) { ctx->pc = 0x184EA8u; }
    }
    if (ctx->pc != 0x184EA8u) { return; }
    ctx->pc = 0x184EA8u;
label_184ea8:
    // 0x184ea8: 0x40802d
    ctx->pc = 0x184ea8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_184eac:
    // 0x184eac: 0x2c0282d
    ctx->pc = 0x184eacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_184eb0:
    // 0x184eb0: 0x260202d
    ctx->pc = 0x184eb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_184eb4:
    // 0x184eb4: 0x26660270
    ctx->pc = 0x184eb4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 19), 624));
label_184eb8:
    // 0x184eb8: 0xc061436
label_184ebc:
    if (ctx->pc == 0x184EBCu) {
        ctx->pc = 0x184EBCu;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 19), 616));
        ctx->pc = 0x184EC0u;
        goto label_184ec0;
    }
    ctx->pc = 0x184EB8u;
    SET_GPR_U32(ctx, 31, 0x184EC0u);
    ctx->pc = 0x184EBCu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 19), 616));
    ctx->pc = 0x1850D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        mpvdec_MotionSub_0x1850d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184EC0u; }
        else if (ctx->pc != 0x184EC0u) { ctx->pc = 0x184EC0u; }
    }
    if (ctx->pc != 0x184EC0u) { return; }
    ctx->pc = 0x184EC0u;
label_184ec0:
    // 0x184ec0: 0x2028025
    ctx->pc = 0x184ec0u;
    SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_184ec4:
    // 0x184ec4: 0x8e750000
    ctx->pc = 0x184ec4u;
    SET_GPR_U32(ctx, 21, READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_184ec8:
    // 0x184ec8: 0x8e710004
    ctx->pc = 0x184ec8u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_184ecc:
    // 0x184ecc: 0x8e740008
    ctx->pc = 0x184eccu;
    SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_184ed0:
    // 0x184ed0: 0x16000058
label_184ed4:
    if (ctx->pc == 0x184ED4u) {
        ctx->pc = 0x184ED4u;
        SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 19), 12)));
        ctx->pc = 0x184ED8u;
        goto label_184ed8;
    }
    ctx->pc = 0x184ED0u;
    {
        const bool branch_taken_0x184ed0 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x184ED4u;
        SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 19), 12)));
        if (branch_taken_0x184ed0) {
            ctx->pc = 0x185034u;
            goto label_185034;
        }
    }
    ctx->pc = 0x184ED8u;
label_184ed8:
    // 0x184ed8: 0x10000004
label_184edc:
    if (ctx->pc == 0x184EDCu) {
        ctx->pc = 0x184EDCu;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 19), 676)));
        ctx->pc = 0x184EE0u;
        goto label_184ee0;
    }
    ctx->pc = 0x184ED8u;
    {
        const bool branch_taken_0x184ed8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x184EDCu;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 19), 676)));
        if (branch_taken_0x184ed8) {
            ctx->pc = 0x184EECu;
            goto label_184eec;
        }
    }
    ctx->pc = 0x184EE0u;
label_184ee0:
    // 0x184ee0: 0xc06142a
label_184ee4:
    if (ctx->pc == 0x184EE4u) {
        ctx->pc = 0x184EE4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x184EE8u;
        goto label_184ee8;
    }
    ctx->pc = 0x184EE0u;
    SET_GPR_U32(ctx, 31, 0x184EE8u);
    ctx->pc = 0x184EE4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1850A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MPVDEC_ResetMv_0x1850a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184EE8u; }
        else if (ctx->pc != 0x184EE8u) { ctx->pc = 0x184EE8u; }
    }
    if (ctx->pc != 0x184EE8u) { return; }
    ctx->pc = 0x184EE8u;
label_184ee8:
    // 0x184ee8: 0x8e6602a4
    ctx->pc = 0x184ee8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 19), 676)));
label_184eec:
    // 0x184eec: 0x30c20002
    ctx->pc = 0x184eecu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), 2));
label_184ef0:
    // 0x184ef0: 0x10400028
label_184ef4:
    if (ctx->pc == 0x184EF4u) {
        ctx->pc = 0x184EF4u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 20), 24));
        ctx->pc = 0x184EF8u;
        goto label_184ef8;
    }
    ctx->pc = 0x184EF0u;
    {
        const bool branch_taken_0x184ef0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x184EF4u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 20), 24));
        if (branch_taken_0x184ef0) {
            ctx->pc = 0x184F94u;
            goto label_184f94;
        }
    }
    ctx->pc = 0x184EF8u;
label_184ef8:
    // 0x184ef8: 0x14400005
label_184efc:
    if (ctx->pc == 0x184EFCu) {
        ctx->pc = 0x184EFCu;
        SET_GPR_U32(ctx, 5, SRL32(GPR_U32(ctx, 21), 23));
        ctx->pc = 0x184F00u;
        goto label_184f00;
    }
    ctx->pc = 0x184EF8u;
    {
        const bool branch_taken_0x184ef8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x184EFCu;
        SET_GPR_U32(ctx, 5, SRL32(GPR_U32(ctx, 21), 23));
        if (branch_taken_0x184ef8) {
            ctx->pc = 0x184F10u;
            goto label_184f10;
        }
    }
    ctx->pc = 0x184F00u;
label_184f00:
    // 0x184f00: 0x24020037
    ctx->pc = 0x184f00u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 55));
label_184f04:
    // 0x184f04: 0x541023
    ctx->pc = 0x184f04u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_184f08:
    // 0x184f08: 0x511006
    ctx->pc = 0x184f08u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 17), GPR_U32(ctx, 2) & 0x1F));
label_184f0c:
    // 0x184f0c: 0xa22825
    ctx->pc = 0x184f0cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_184f10:
    // 0x184f10: 0x51840
    ctx->pc = 0x184f10u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 1));
label_184f14:
    // 0x184f14: 0x3c040024
    ctx->pc = 0x184f14u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
label_184f18:
    // 0x184f18: 0x8c851a50
    ctx->pc = 0x184f18u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 6736)));
label_184f1c:
    // 0x184f1c: 0x3c02ffff
    ctx->pc = 0x184f1cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
label_184f20:
    // 0x184f20: 0x3442fff0
    ctx->pc = 0x184f20u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65520));
label_184f24:
    // 0x184f24: 0x651821
    ctx->pc = 0x184f24u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_184f28:
    // 0x184f28: 0x84650000
    ctx->pc = 0x184f28u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_184f2c:
    // 0x184f2c: 0xa21024
    ctx->pc = 0x184f2cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_184f30:
    // 0x184f30: 0x30a500ff
    ctx->pc = 0x184f30u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), 255));
label_184f34:
    // 0x184f34: 0x21400
    ctx->pc = 0x184f34u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 16));
label_184f38:
    // 0x184f38: 0x285a021
    ctx->pc = 0x184f38u;
    SET_GPR_U32(ctx, 20, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
label_184f3c:
    // 0x184f3c: 0x2a830020
    ctx->pc = 0x184f3cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 20), 32));
label_184f40:
    // 0x184f40: 0x14600012
label_184f44:
    if (ctx->pc == 0x184F44u) {
        ctx->pc = 0x184F44u;
        WRITE32(ADD32(GPR_U32(ctx, 19), 680), GPR_U32(ctx, 2));
        ctx->pc = 0x184F48u;
        goto label_184f48;
    }
    ctx->pc = 0x184F40u;
    {
        const bool branch_taken_0x184f40 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x184F44u;
        WRITE32(ADD32(GPR_U32(ctx, 19), 680), GPR_U32(ctx, 2));
        if (branch_taken_0x184f40) {
            ctx->pc = 0x184F8Cu;
            goto label_184f8c;
        }
    }
    ctx->pc = 0x184F48u;
label_184f48:
    // 0x184f48: 0x2694ffe0
    ctx->pc = 0x184f48u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 4294967264));
label_184f4c:
    // 0x184f4c: 0x291a804
    ctx->pc = 0x184f4cu;
    SET_GPR_U32(ctx, 21, SLL32(GPR_U32(ctx, 17), GPR_U32(ctx, 20) & 0x1F));
label_184f50:
    // 0x184f50: 0x82510000
    ctx->pc = 0x184f50u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_184f54:
    // 0x184f54: 0x26520001
    ctx->pc = 0x184f54u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
label_184f58:
    // 0x184f58: 0x92420000
    ctx->pc = 0x184f58u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_184f5c:
    // 0x184f5c: 0x118a00
    ctx->pc = 0x184f5cu;
    SET_GPR_U32(ctx, 17, SLL32(GPR_U32(ctx, 17), 8));
label_184f60:
    // 0x184f60: 0x26520001
    ctx->pc = 0x184f60u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
label_184f64:
    // 0x184f64: 0x2228825
    ctx->pc = 0x184f64u;
    SET_GPR_U32(ctx, 17, OR32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_184f68:
    // 0x184f68: 0x92430000
    ctx->pc = 0x184f68u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_184f6c:
    // 0x184f6c: 0x26520001
    ctx->pc = 0x184f6cu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
label_184f70:
    // 0x184f70: 0x118a00
    ctx->pc = 0x184f70u;
    SET_GPR_U32(ctx, 17, SLL32(GPR_U32(ctx, 17), 8));
label_184f74:
    // 0x184f74: 0x92420000
    ctx->pc = 0x184f74u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_184f78:
    // 0x184f78: 0x2238825
    ctx->pc = 0x184f78u;
    SET_GPR_U32(ctx, 17, OR32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_184f7c:
    // 0x184f7c: 0x118a00
    ctx->pc = 0x184f7cu;
    SET_GPR_U32(ctx, 17, SLL32(GPR_U32(ctx, 17), 8));
label_184f80:
    // 0x184f80: 0x26520001
    ctx->pc = 0x184f80u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
label_184f84:
    // 0x184f84: 0x10000004
label_184f88:
    if (ctx->pc == 0x184F88u) {
        ctx->pc = 0x184F88u;
        SET_GPR_U32(ctx, 17, OR32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->pc = 0x184F8Cu;
        goto label_184f8c;
    }
    ctx->pc = 0x184F84u;
    {
        const bool branch_taken_0x184f84 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x184F88u;
        SET_GPR_U32(ctx, 17, OR32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        if (branch_taken_0x184f84) {
            ctx->pc = 0x184F98u;
            goto label_184f98;
        }
    }
    ctx->pc = 0x184F8Cu;
label_184f8c:
    // 0x184f8c: 0x10000002
label_184f90:
    if (ctx->pc == 0x184F90u) {
        ctx->pc = 0x184F90u;
        SET_GPR_U32(ctx, 21, SLL32(GPR_U32(ctx, 21), GPR_U32(ctx, 5) & 0x1F));
        ctx->pc = 0x184F94u;
        goto label_184f94;
    }
    ctx->pc = 0x184F8Cu;
    {
        const bool branch_taken_0x184f8c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x184F90u;
        SET_GPR_U32(ctx, 21, SLL32(GPR_U32(ctx, 21), GPR_U32(ctx, 5) & 0x1F));
        if (branch_taken_0x184f8c) {
            ctx->pc = 0x184F98u;
            goto label_184f98;
        }
    }
    ctx->pc = 0x184F94u;
label_184f94:
    // 0x184f94: 0xae6002a8
    ctx->pc = 0x184f94u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 680), GPR_U32(ctx, 0));
label_184f98:
    // 0x184f98: 0xae750000
    ctx->pc = 0x184f98u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 21));
label_184f9c:
    // 0x184f9c: 0x30c20001
    ctx->pc = 0x184f9cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), 1));
label_184fa0:
    // 0x184fa0: 0xae710004
    ctx->pc = 0x184fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 17));
label_184fa4:
    // 0x184fa4: 0xae740008
    ctx->pc = 0x184fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 20));
label_184fa8:
    // 0x184fa8: 0x10400009
label_184fac:
    if (ctx->pc == 0x184FACu) {
        ctx->pc = 0x184FACu;
        WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 18));
        ctx->pc = 0x184FB0u;
        goto label_184fb0;
    }
    ctx->pc = 0x184FA8u;
    {
        const bool branch_taken_0x184fa8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x184FACu;
        WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 18));
        if (branch_taken_0x184fa8) {
            ctx->pc = 0x184FD0u;
            goto label_184fd0;
        }
    }
    ctx->pc = 0x184FB0u;
label_184fb0:
    // 0x184fb0: 0x8e620234
    ctx->pc = 0x184fb0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 564)));
label_184fb4:
    // 0x184fb4: 0x40f809
label_184fb8:
    if (ctx->pc == 0x184FB8u) {
        ctx->pc = 0x184FB8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x184FBCu;
        goto label_184fbc;
    }
    ctx->pc = 0x184FB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x184FBCu);
        ctx->pc = 0x184FB8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x184BA0u: goto label_184ba0;
            case 0x184BA4u: goto label_184ba4;
            case 0x184BA8u: goto label_184ba8;
            case 0x184BACu: goto label_184bac;
            case 0x184BB0u: goto label_184bb0;
            case 0x184BB4u: goto label_184bb4;
            case 0x184BB8u: goto label_184bb8;
            case 0x184BBCu: goto label_184bbc;
            case 0x184BC0u: goto label_184bc0;
            case 0x184BC4u: goto label_184bc4;
            case 0x184BC8u: goto label_184bc8;
            case 0x184BCCu: goto label_184bcc;
            case 0x184BD0u: goto label_184bd0;
            case 0x184BD4u: goto label_184bd4;
            case 0x184BD8u: goto label_184bd8;
            case 0x184BDCu: goto label_184bdc;
            case 0x184BE0u: goto label_184be0;
            case 0x184BE4u: goto label_184be4;
            case 0x184BE8u: goto label_184be8;
            case 0x184BECu: goto label_184bec;
            case 0x184BF0u: goto label_184bf0;
            case 0x184BF4u: goto label_184bf4;
            case 0x184BF8u: goto label_184bf8;
            case 0x184BFCu: goto label_184bfc;
            case 0x184C00u: goto label_184c00;
            case 0x184C04u: goto label_184c04;
            case 0x184C08u: goto label_184c08;
            case 0x184C0Cu: goto label_184c0c;
            case 0x184C10u: goto label_184c10;
            case 0x184C14u: goto label_184c14;
            case 0x184C18u: goto label_184c18;
            case 0x184C1Cu: goto label_184c1c;
            case 0x184C20u: goto label_184c20;
            case 0x184C24u: goto label_184c24;
            case 0x184C28u: goto label_184c28;
            case 0x184C2Cu: goto label_184c2c;
            case 0x184C30u: goto label_184c30;
            case 0x184C34u: goto label_184c34;
            case 0x184C38u: goto label_184c38;
            case 0x184C3Cu: goto label_184c3c;
            case 0x184C40u: goto label_184c40;
            case 0x184C44u: goto label_184c44;
            case 0x184C48u: goto label_184c48;
            case 0x184C4Cu: goto label_184c4c;
            case 0x184C50u: goto label_184c50;
            case 0x184C54u: goto label_184c54;
            case 0x184C58u: goto label_184c58;
            case 0x184C5Cu: goto label_184c5c;
            case 0x184C60u: goto label_184c60;
            case 0x184C64u: goto label_184c64;
            case 0x184C68u: goto label_184c68;
            case 0x184C6Cu: goto label_184c6c;
            case 0x184C70u: goto label_184c70;
            case 0x184C74u: goto label_184c74;
            case 0x184C78u: goto label_184c78;
            case 0x184C7Cu: goto label_184c7c;
            case 0x184C80u: goto label_184c80;
            case 0x184C84u: goto label_184c84;
            case 0x184C88u: goto label_184c88;
            case 0x184C8Cu: goto label_184c8c;
            case 0x184C90u: goto label_184c90;
            case 0x184C94u: goto label_184c94;
            case 0x184C98u: goto label_184c98;
            case 0x184C9Cu: goto label_184c9c;
            case 0x184CA0u: goto label_184ca0;
            case 0x184CA4u: goto label_184ca4;
            case 0x184CA8u: goto label_184ca8;
            case 0x184CACu: goto label_184cac;
            case 0x184CB0u: goto label_184cb0;
            case 0x184CB4u: goto label_184cb4;
            case 0x184CB8u: goto label_184cb8;
            case 0x184CBCu: goto label_184cbc;
            case 0x184CC0u: goto label_184cc0;
            case 0x184CC4u: goto label_184cc4;
            case 0x184CC8u: goto label_184cc8;
            case 0x184CCCu: goto label_184ccc;
            case 0x184CD0u: goto label_184cd0;
            case 0x184CD4u: goto label_184cd4;
            case 0x184CD8u: goto label_184cd8;
            case 0x184CDCu: goto label_184cdc;
            case 0x184CE0u: goto label_184ce0;
            case 0x184CE4u: goto label_184ce4;
            case 0x184CE8u: goto label_184ce8;
            case 0x184CECu: goto label_184cec;
            case 0x184CF0u: goto label_184cf0;
            case 0x184CF4u: goto label_184cf4;
            case 0x184CF8u: goto label_184cf8;
            case 0x184CFCu: goto label_184cfc;
            case 0x184D00u: goto label_184d00;
            case 0x184D04u: goto label_184d04;
            case 0x184D08u: goto label_184d08;
            case 0x184D0Cu: goto label_184d0c;
            case 0x184D10u: goto label_184d10;
            case 0x184D14u: goto label_184d14;
            case 0x184D18u: goto label_184d18;
            case 0x184D1Cu: goto label_184d1c;
            case 0x184D20u: goto label_184d20;
            case 0x184D24u: goto label_184d24;
            case 0x184D28u: goto label_184d28;
            case 0x184D2Cu: goto label_184d2c;
            case 0x184D30u: goto label_184d30;
            case 0x184D34u: goto label_184d34;
            case 0x184D38u: goto label_184d38;
            case 0x184D3Cu: goto label_184d3c;
            case 0x184D40u: goto label_184d40;
            case 0x184D44u: goto label_184d44;
            case 0x184D48u: goto label_184d48;
            case 0x184D4Cu: goto label_184d4c;
            case 0x184D50u: goto label_184d50;
            case 0x184D54u: goto label_184d54;
            case 0x184D58u: goto label_184d58;
            case 0x184D5Cu: goto label_184d5c;
            case 0x184D60u: goto label_184d60;
            case 0x184D64u: goto label_184d64;
            case 0x184D68u: goto label_184d68;
            case 0x184D6Cu: goto label_184d6c;
            case 0x184D70u: goto label_184d70;
            case 0x184D74u: goto label_184d74;
            case 0x184D78u: goto label_184d78;
            case 0x184D7Cu: goto label_184d7c;
            case 0x184D80u: goto label_184d80;
            case 0x184D84u: goto label_184d84;
            case 0x184D88u: goto label_184d88;
            case 0x184D8Cu: goto label_184d8c;
            case 0x184D90u: goto label_184d90;
            case 0x184D94u: goto label_184d94;
            case 0x184D98u: goto label_184d98;
            case 0x184D9Cu: goto label_184d9c;
            case 0x184DA0u: goto label_184da0;
            case 0x184DA4u: goto label_184da4;
            case 0x184DA8u: goto label_184da8;
            case 0x184DACu: goto label_184dac;
            case 0x184DB0u: goto label_184db0;
            case 0x184DB4u: goto label_184db4;
            case 0x184DB8u: goto label_184db8;
            case 0x184DBCu: goto label_184dbc;
            case 0x184DC0u: goto label_184dc0;
            case 0x184DC4u: goto label_184dc4;
            case 0x184DC8u: goto label_184dc8;
            case 0x184DCCu: goto label_184dcc;
            case 0x184DD0u: goto label_184dd0;
            case 0x184DD4u: goto label_184dd4;
            case 0x184DD8u: goto label_184dd8;
            case 0x184DDCu: goto label_184ddc;
            case 0x184DE0u: goto label_184de0;
            case 0x184DE4u: goto label_184de4;
            case 0x184DE8u: goto label_184de8;
            case 0x184DECu: goto label_184dec;
            case 0x184DF0u: goto label_184df0;
            case 0x184DF4u: goto label_184df4;
            case 0x184DF8u: goto label_184df8;
            case 0x184DFCu: goto label_184dfc;
            case 0x184E00u: goto label_184e00;
            case 0x184E04u: goto label_184e04;
            case 0x184E08u: goto label_184e08;
            case 0x184E0Cu: goto label_184e0c;
            case 0x184E10u: goto label_184e10;
            case 0x184E14u: goto label_184e14;
            case 0x184E18u: goto label_184e18;
            case 0x184E1Cu: goto label_184e1c;
            case 0x184E20u: goto label_184e20;
            case 0x184E24u: goto label_184e24;
            case 0x184E28u: goto label_184e28;
            case 0x184E2Cu: goto label_184e2c;
            case 0x184E30u: goto label_184e30;
            case 0x184E34u: goto label_184e34;
            case 0x184E38u: goto label_184e38;
            case 0x184E3Cu: goto label_184e3c;
            case 0x184E40u: goto label_184e40;
            case 0x184E44u: goto label_184e44;
            case 0x184E48u: goto label_184e48;
            case 0x184E4Cu: goto label_184e4c;
            case 0x184E50u: goto label_184e50;
            case 0x184E54u: goto label_184e54;
            case 0x184E58u: goto label_184e58;
            case 0x184E5Cu: goto label_184e5c;
            case 0x184E60u: goto label_184e60;
            case 0x184E64u: goto label_184e64;
            case 0x184E68u: goto label_184e68;
            case 0x184E6Cu: goto label_184e6c;
            case 0x184E70u: goto label_184e70;
            case 0x184E74u: goto label_184e74;
            case 0x184E78u: goto label_184e78;
            case 0x184E7Cu: goto label_184e7c;
            case 0x184E80u: goto label_184e80;
            case 0x184E84u: goto label_184e84;
            case 0x184E88u: goto label_184e88;
            case 0x184E8Cu: goto label_184e8c;
            case 0x184E90u: goto label_184e90;
            case 0x184E94u: goto label_184e94;
            case 0x184E98u: goto label_184e98;
            case 0x184E9Cu: goto label_184e9c;
            case 0x184EA0u: goto label_184ea0;
            case 0x184EA4u: goto label_184ea4;
            case 0x184EA8u: goto label_184ea8;
            case 0x184EACu: goto label_184eac;
            case 0x184EB0u: goto label_184eb0;
            case 0x184EB4u: goto label_184eb4;
            case 0x184EB8u: goto label_184eb8;
            case 0x184EBCu: goto label_184ebc;
            case 0x184EC0u: goto label_184ec0;
            case 0x184EC4u: goto label_184ec4;
            case 0x184EC8u: goto label_184ec8;
            case 0x184ECCu: goto label_184ecc;
            case 0x184ED0u: goto label_184ed0;
            case 0x184ED4u: goto label_184ed4;
            case 0x184ED8u: goto label_184ed8;
            case 0x184EDCu: goto label_184edc;
            case 0x184EE0u: goto label_184ee0;
            case 0x184EE4u: goto label_184ee4;
            case 0x184EE8u: goto label_184ee8;
            case 0x184EECu: goto label_184eec;
            case 0x184EF0u: goto label_184ef0;
            case 0x184EF4u: goto label_184ef4;
            case 0x184EF8u: goto label_184ef8;
            case 0x184EFCu: goto label_184efc;
            case 0x184F00u: goto label_184f00;
            case 0x184F04u: goto label_184f04;
            case 0x184F08u: goto label_184f08;
            case 0x184F0Cu: goto label_184f0c;
            case 0x184F10u: goto label_184f10;
            case 0x184F14u: goto label_184f14;
            case 0x184F18u: goto label_184f18;
            case 0x184F1Cu: goto label_184f1c;
            case 0x184F20u: goto label_184f20;
            case 0x184F24u: goto label_184f24;
            case 0x184F28u: goto label_184f28;
            case 0x184F2Cu: goto label_184f2c;
            case 0x184F30u: goto label_184f30;
            case 0x184F34u: goto label_184f34;
            case 0x184F38u: goto label_184f38;
            case 0x184F3Cu: goto label_184f3c;
            case 0x184F40u: goto label_184f40;
            case 0x184F44u: goto label_184f44;
            case 0x184F48u: goto label_184f48;
            case 0x184F4Cu: goto label_184f4c;
            case 0x184F50u: goto label_184f50;
            case 0x184F54u: goto label_184f54;
            case 0x184F58u: goto label_184f58;
            case 0x184F5Cu: goto label_184f5c;
            case 0x184F60u: goto label_184f60;
            case 0x184F64u: goto label_184f64;
            case 0x184F68u: goto label_184f68;
            case 0x184F6Cu: goto label_184f6c;
            case 0x184F70u: goto label_184f70;
            case 0x184F74u: goto label_184f74;
            case 0x184F78u: goto label_184f78;
            case 0x184F7Cu: goto label_184f7c;
            case 0x184F80u: goto label_184f80;
            case 0x184F84u: goto label_184f84;
            case 0x184F88u: goto label_184f88;
            case 0x184F8Cu: goto label_184f8c;
            case 0x184F90u: goto label_184f90;
            case 0x184F94u: goto label_184f94;
            case 0x184F98u: goto label_184f98;
            case 0x184F9Cu: goto label_184f9c;
            case 0x184FA0u: goto label_184fa0;
            case 0x184FA4u: goto label_184fa4;
            case 0x184FA8u: goto label_184fa8;
            case 0x184FACu: goto label_184fac;
            case 0x184FB0u: goto label_184fb0;
            case 0x184FB4u: goto label_184fb4;
            case 0x184FB8u: goto label_184fb8;
            case 0x184FBCu: goto label_184fbc;
            case 0x184FC0u: goto label_184fc0;
            case 0x184FC4u: goto label_184fc4;
            case 0x184FC8u: goto label_184fc8;
            case 0x184FCCu: goto label_184fcc;
            case 0x184FD0u: goto label_184fd0;
            case 0x184FD4u: goto label_184fd4;
            case 0x184FD8u: goto label_184fd8;
            case 0x184FDCu: goto label_184fdc;
            case 0x184FE0u: goto label_184fe0;
            case 0x184FE4u: goto label_184fe4;
            case 0x184FE8u: goto label_184fe8;
            case 0x184FECu: goto label_184fec;
            case 0x184FF0u: goto label_184ff0;
            case 0x184FF4u: goto label_184ff4;
            case 0x184FF8u: goto label_184ff8;
            case 0x184FFCu: goto label_184ffc;
            case 0x185000u: goto label_185000;
            case 0x185004u: goto label_185004;
            case 0x185008u: goto label_185008;
            case 0x18500Cu: goto label_18500c;
            case 0x185010u: goto label_185010;
            case 0x185014u: goto label_185014;
            case 0x185018u: goto label_185018;
            case 0x18501Cu: goto label_18501c;
            case 0x185020u: goto label_185020;
            case 0x185024u: goto label_185024;
            case 0x185028u: goto label_185028;
            case 0x18502Cu: goto label_18502c;
            case 0x185030u: goto label_185030;
            case 0x185034u: goto label_185034;
            case 0x185038u: goto label_185038;
            case 0x18503Cu: goto label_18503c;
            case 0x185040u: goto label_185040;
            case 0x185044u: goto label_185044;
            case 0x185048u: goto label_185048;
            case 0x18504Cu: goto label_18504c;
            case 0x185050u: goto label_185050;
            case 0x185054u: goto label_185054;
            case 0x185058u: goto label_185058;
            case 0x18505Cu: goto label_18505c;
            case 0x185060u: goto label_185060;
            case 0x185064u: goto label_185064;
            case 0x185068u: goto label_185068;
            case 0x18506Cu: goto label_18506c;
            case 0x185070u: goto label_185070;
            case 0x185074u: goto label_185074;
            case 0x185078u: goto label_185078;
            case 0x18507Cu: goto label_18507c;
            case 0x185080u: goto label_185080;
            case 0x185084u: goto label_185084;
            case 0x185088u: goto label_185088;
            case 0x18508Cu: goto label_18508c;
            case 0x185090u: goto label_185090;
            case 0x185094u: goto label_185094;
            case 0x185098u: goto label_185098;
            case 0x18509Cu: goto label_18509c;
            case 0x1850A0u: goto label_1850a0;
            case 0x1850A4u: goto label_1850a4;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x184FBCu; }
            if (ctx->pc != 0x184FBCu) { return; }
        }
    }
    ctx->pc = 0x184FBCu;
label_184fbc:
    // 0x184fbc: 0x8e63023c
    ctx->pc = 0x184fbcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 572)));
label_184fc0:
    // 0x184fc0: 0x60f809
label_184fc4:
    if (ctx->pc == 0x184FC4u) {
        ctx->pc = 0x184FC4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x184FC8u;
        goto label_184fc8;
    }
    ctx->pc = 0x184FC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x184FC8u);
        ctx->pc = 0x184FC4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x184BA0u: goto label_184ba0;
            case 0x184BA4u: goto label_184ba4;
            case 0x184BA8u: goto label_184ba8;
            case 0x184BACu: goto label_184bac;
            case 0x184BB0u: goto label_184bb0;
            case 0x184BB4u: goto label_184bb4;
            case 0x184BB8u: goto label_184bb8;
            case 0x184BBCu: goto label_184bbc;
            case 0x184BC0u: goto label_184bc0;
            case 0x184BC4u: goto label_184bc4;
            case 0x184BC8u: goto label_184bc8;
            case 0x184BCCu: goto label_184bcc;
            case 0x184BD0u: goto label_184bd0;
            case 0x184BD4u: goto label_184bd4;
            case 0x184BD8u: goto label_184bd8;
            case 0x184BDCu: goto label_184bdc;
            case 0x184BE0u: goto label_184be0;
            case 0x184BE4u: goto label_184be4;
            case 0x184BE8u: goto label_184be8;
            case 0x184BECu: goto label_184bec;
            case 0x184BF0u: goto label_184bf0;
            case 0x184BF4u: goto label_184bf4;
            case 0x184BF8u: goto label_184bf8;
            case 0x184BFCu: goto label_184bfc;
            case 0x184C00u: goto label_184c00;
            case 0x184C04u: goto label_184c04;
            case 0x184C08u: goto label_184c08;
            case 0x184C0Cu: goto label_184c0c;
            case 0x184C10u: goto label_184c10;
            case 0x184C14u: goto label_184c14;
            case 0x184C18u: goto label_184c18;
            case 0x184C1Cu: goto label_184c1c;
            case 0x184C20u: goto label_184c20;
            case 0x184C24u: goto label_184c24;
            case 0x184C28u: goto label_184c28;
            case 0x184C2Cu: goto label_184c2c;
            case 0x184C30u: goto label_184c30;
            case 0x184C34u: goto label_184c34;
            case 0x184C38u: goto label_184c38;
            case 0x184C3Cu: goto label_184c3c;
            case 0x184C40u: goto label_184c40;
            case 0x184C44u: goto label_184c44;
            case 0x184C48u: goto label_184c48;
            case 0x184C4Cu: goto label_184c4c;
            case 0x184C50u: goto label_184c50;
            case 0x184C54u: goto label_184c54;
            case 0x184C58u: goto label_184c58;
            case 0x184C5Cu: goto label_184c5c;
            case 0x184C60u: goto label_184c60;
            case 0x184C64u: goto label_184c64;
            case 0x184C68u: goto label_184c68;
            case 0x184C6Cu: goto label_184c6c;
            case 0x184C70u: goto label_184c70;
            case 0x184C74u: goto label_184c74;
            case 0x184C78u: goto label_184c78;
            case 0x184C7Cu: goto label_184c7c;
            case 0x184C80u: goto label_184c80;
            case 0x184C84u: goto label_184c84;
            case 0x184C88u: goto label_184c88;
            case 0x184C8Cu: goto label_184c8c;
            case 0x184C90u: goto label_184c90;
            case 0x184C94u: goto label_184c94;
            case 0x184C98u: goto label_184c98;
            case 0x184C9Cu: goto label_184c9c;
            case 0x184CA0u: goto label_184ca0;
            case 0x184CA4u: goto label_184ca4;
            case 0x184CA8u: goto label_184ca8;
            case 0x184CACu: goto label_184cac;
            case 0x184CB0u: goto label_184cb0;
            case 0x184CB4u: goto label_184cb4;
            case 0x184CB8u: goto label_184cb8;
            case 0x184CBCu: goto label_184cbc;
            case 0x184CC0u: goto label_184cc0;
            case 0x184CC4u: goto label_184cc4;
            case 0x184CC8u: goto label_184cc8;
            case 0x184CCCu: goto label_184ccc;
            case 0x184CD0u: goto label_184cd0;
            case 0x184CD4u: goto label_184cd4;
            case 0x184CD8u: goto label_184cd8;
            case 0x184CDCu: goto label_184cdc;
            case 0x184CE0u: goto label_184ce0;
            case 0x184CE4u: goto label_184ce4;
            case 0x184CE8u: goto label_184ce8;
            case 0x184CECu: goto label_184cec;
            case 0x184CF0u: goto label_184cf0;
            case 0x184CF4u: goto label_184cf4;
            case 0x184CF8u: goto label_184cf8;
            case 0x184CFCu: goto label_184cfc;
            case 0x184D00u: goto label_184d00;
            case 0x184D04u: goto label_184d04;
            case 0x184D08u: goto label_184d08;
            case 0x184D0Cu: goto label_184d0c;
            case 0x184D10u: goto label_184d10;
            case 0x184D14u: goto label_184d14;
            case 0x184D18u: goto label_184d18;
            case 0x184D1Cu: goto label_184d1c;
            case 0x184D20u: goto label_184d20;
            case 0x184D24u: goto label_184d24;
            case 0x184D28u: goto label_184d28;
            case 0x184D2Cu: goto label_184d2c;
            case 0x184D30u: goto label_184d30;
            case 0x184D34u: goto label_184d34;
            case 0x184D38u: goto label_184d38;
            case 0x184D3Cu: goto label_184d3c;
            case 0x184D40u: goto label_184d40;
            case 0x184D44u: goto label_184d44;
            case 0x184D48u: goto label_184d48;
            case 0x184D4Cu: goto label_184d4c;
            case 0x184D50u: goto label_184d50;
            case 0x184D54u: goto label_184d54;
            case 0x184D58u: goto label_184d58;
            case 0x184D5Cu: goto label_184d5c;
            case 0x184D60u: goto label_184d60;
            case 0x184D64u: goto label_184d64;
            case 0x184D68u: goto label_184d68;
            case 0x184D6Cu: goto label_184d6c;
            case 0x184D70u: goto label_184d70;
            case 0x184D74u: goto label_184d74;
            case 0x184D78u: goto label_184d78;
            case 0x184D7Cu: goto label_184d7c;
            case 0x184D80u: goto label_184d80;
            case 0x184D84u: goto label_184d84;
            case 0x184D88u: goto label_184d88;
            case 0x184D8Cu: goto label_184d8c;
            case 0x184D90u: goto label_184d90;
            case 0x184D94u: goto label_184d94;
            case 0x184D98u: goto label_184d98;
            case 0x184D9Cu: goto label_184d9c;
            case 0x184DA0u: goto label_184da0;
            case 0x184DA4u: goto label_184da4;
            case 0x184DA8u: goto label_184da8;
            case 0x184DACu: goto label_184dac;
            case 0x184DB0u: goto label_184db0;
            case 0x184DB4u: goto label_184db4;
            case 0x184DB8u: goto label_184db8;
            case 0x184DBCu: goto label_184dbc;
            case 0x184DC0u: goto label_184dc0;
            case 0x184DC4u: goto label_184dc4;
            case 0x184DC8u: goto label_184dc8;
            case 0x184DCCu: goto label_184dcc;
            case 0x184DD0u: goto label_184dd0;
            case 0x184DD4u: goto label_184dd4;
            case 0x184DD8u: goto label_184dd8;
            case 0x184DDCu: goto label_184ddc;
            case 0x184DE0u: goto label_184de0;
            case 0x184DE4u: goto label_184de4;
            case 0x184DE8u: goto label_184de8;
            case 0x184DECu: goto label_184dec;
            case 0x184DF0u: goto label_184df0;
            case 0x184DF4u: goto label_184df4;
            case 0x184DF8u: goto label_184df8;
            case 0x184DFCu: goto label_184dfc;
            case 0x184E00u: goto label_184e00;
            case 0x184E04u: goto label_184e04;
            case 0x184E08u: goto label_184e08;
            case 0x184E0Cu: goto label_184e0c;
            case 0x184E10u: goto label_184e10;
            case 0x184E14u: goto label_184e14;
            case 0x184E18u: goto label_184e18;
            case 0x184E1Cu: goto label_184e1c;
            case 0x184E20u: goto label_184e20;
            case 0x184E24u: goto label_184e24;
            case 0x184E28u: goto label_184e28;
            case 0x184E2Cu: goto label_184e2c;
            case 0x184E30u: goto label_184e30;
            case 0x184E34u: goto label_184e34;
            case 0x184E38u: goto label_184e38;
            case 0x184E3Cu: goto label_184e3c;
            case 0x184E40u: goto label_184e40;
            case 0x184E44u: goto label_184e44;
            case 0x184E48u: goto label_184e48;
            case 0x184E4Cu: goto label_184e4c;
            case 0x184E50u: goto label_184e50;
            case 0x184E54u: goto label_184e54;
            case 0x184E58u: goto label_184e58;
            case 0x184E5Cu: goto label_184e5c;
            case 0x184E60u: goto label_184e60;
            case 0x184E64u: goto label_184e64;
            case 0x184E68u: goto label_184e68;
            case 0x184E6Cu: goto label_184e6c;
            case 0x184E70u: goto label_184e70;
            case 0x184E74u: goto label_184e74;
            case 0x184E78u: goto label_184e78;
            case 0x184E7Cu: goto label_184e7c;
            case 0x184E80u: goto label_184e80;
            case 0x184E84u: goto label_184e84;
            case 0x184E88u: goto label_184e88;
            case 0x184E8Cu: goto label_184e8c;
            case 0x184E90u: goto label_184e90;
            case 0x184E94u: goto label_184e94;
            case 0x184E98u: goto label_184e98;
            case 0x184E9Cu: goto label_184e9c;
            case 0x184EA0u: goto label_184ea0;
            case 0x184EA4u: goto label_184ea4;
            case 0x184EA8u: goto label_184ea8;
            case 0x184EACu: goto label_184eac;
            case 0x184EB0u: goto label_184eb0;
            case 0x184EB4u: goto label_184eb4;
            case 0x184EB8u: goto label_184eb8;
            case 0x184EBCu: goto label_184ebc;
            case 0x184EC0u: goto label_184ec0;
            case 0x184EC4u: goto label_184ec4;
            case 0x184EC8u: goto label_184ec8;
            case 0x184ECCu: goto label_184ecc;
            case 0x184ED0u: goto label_184ed0;
            case 0x184ED4u: goto label_184ed4;
            case 0x184ED8u: goto label_184ed8;
            case 0x184EDCu: goto label_184edc;
            case 0x184EE0u: goto label_184ee0;
            case 0x184EE4u: goto label_184ee4;
            case 0x184EE8u: goto label_184ee8;
            case 0x184EECu: goto label_184eec;
            case 0x184EF0u: goto label_184ef0;
            case 0x184EF4u: goto label_184ef4;
            case 0x184EF8u: goto label_184ef8;
            case 0x184EFCu: goto label_184efc;
            case 0x184F00u: goto label_184f00;
            case 0x184F04u: goto label_184f04;
            case 0x184F08u: goto label_184f08;
            case 0x184F0Cu: goto label_184f0c;
            case 0x184F10u: goto label_184f10;
            case 0x184F14u: goto label_184f14;
            case 0x184F18u: goto label_184f18;
            case 0x184F1Cu: goto label_184f1c;
            case 0x184F20u: goto label_184f20;
            case 0x184F24u: goto label_184f24;
            case 0x184F28u: goto label_184f28;
            case 0x184F2Cu: goto label_184f2c;
            case 0x184F30u: goto label_184f30;
            case 0x184F34u: goto label_184f34;
            case 0x184F38u: goto label_184f38;
            case 0x184F3Cu: goto label_184f3c;
            case 0x184F40u: goto label_184f40;
            case 0x184F44u: goto label_184f44;
            case 0x184F48u: goto label_184f48;
            case 0x184F4Cu: goto label_184f4c;
            case 0x184F50u: goto label_184f50;
            case 0x184F54u: goto label_184f54;
            case 0x184F58u: goto label_184f58;
            case 0x184F5Cu: goto label_184f5c;
            case 0x184F60u: goto label_184f60;
            case 0x184F64u: goto label_184f64;
            case 0x184F68u: goto label_184f68;
            case 0x184F6Cu: goto label_184f6c;
            case 0x184F70u: goto label_184f70;
            case 0x184F74u: goto label_184f74;
            case 0x184F78u: goto label_184f78;
            case 0x184F7Cu: goto label_184f7c;
            case 0x184F80u: goto label_184f80;
            case 0x184F84u: goto label_184f84;
            case 0x184F88u: goto label_184f88;
            case 0x184F8Cu: goto label_184f8c;
            case 0x184F90u: goto label_184f90;
            case 0x184F94u: goto label_184f94;
            case 0x184F98u: goto label_184f98;
            case 0x184F9Cu: goto label_184f9c;
            case 0x184FA0u: goto label_184fa0;
            case 0x184FA4u: goto label_184fa4;
            case 0x184FA8u: goto label_184fa8;
            case 0x184FACu: goto label_184fac;
            case 0x184FB0u: goto label_184fb0;
            case 0x184FB4u: goto label_184fb4;
            case 0x184FB8u: goto label_184fb8;
            case 0x184FBCu: goto label_184fbc;
            case 0x184FC0u: goto label_184fc0;
            case 0x184FC4u: goto label_184fc4;
            case 0x184FC8u: goto label_184fc8;
            case 0x184FCCu: goto label_184fcc;
            case 0x184FD0u: goto label_184fd0;
            case 0x184FD4u: goto label_184fd4;
            case 0x184FD8u: goto label_184fd8;
            case 0x184FDCu: goto label_184fdc;
            case 0x184FE0u: goto label_184fe0;
            case 0x184FE4u: goto label_184fe4;
            case 0x184FE8u: goto label_184fe8;
            case 0x184FECu: goto label_184fec;
            case 0x184FF0u: goto label_184ff0;
            case 0x184FF4u: goto label_184ff4;
            case 0x184FF8u: goto label_184ff8;
            case 0x184FFCu: goto label_184ffc;
            case 0x185000u: goto label_185000;
            case 0x185004u: goto label_185004;
            case 0x185008u: goto label_185008;
            case 0x18500Cu: goto label_18500c;
            case 0x185010u: goto label_185010;
            case 0x185014u: goto label_185014;
            case 0x185018u: goto label_185018;
            case 0x18501Cu: goto label_18501c;
            case 0x185020u: goto label_185020;
            case 0x185024u: goto label_185024;
            case 0x185028u: goto label_185028;
            case 0x18502Cu: goto label_18502c;
            case 0x185030u: goto label_185030;
            case 0x185034u: goto label_185034;
            case 0x185038u: goto label_185038;
            case 0x18503Cu: goto label_18503c;
            case 0x185040u: goto label_185040;
            case 0x185044u: goto label_185044;
            case 0x185048u: goto label_185048;
            case 0x18504Cu: goto label_18504c;
            case 0x185050u: goto label_185050;
            case 0x185054u: goto label_185054;
            case 0x185058u: goto label_185058;
            case 0x18505Cu: goto label_18505c;
            case 0x185060u: goto label_185060;
            case 0x185064u: goto label_185064;
            case 0x185068u: goto label_185068;
            case 0x18506Cu: goto label_18506c;
            case 0x185070u: goto label_185070;
            case 0x185074u: goto label_185074;
            case 0x185078u: goto label_185078;
            case 0x18507Cu: goto label_18507c;
            case 0x185080u: goto label_185080;
            case 0x185084u: goto label_185084;
            case 0x185088u: goto label_185088;
            case 0x18508Cu: goto label_18508c;
            case 0x185090u: goto label_185090;
            case 0x185094u: goto label_185094;
            case 0x185098u: goto label_185098;
            case 0x18509Cu: goto label_18509c;
            case 0x1850A0u: goto label_1850a0;
            case 0x1850A4u: goto label_1850a4;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x184FC8u; }
            if (ctx->pc != 0x184FC8u) { return; }
        }
    }
    ctx->pc = 0x184FC8u;
label_184fc8:
    // 0x184fc8: 0x1000000d
label_184fcc:
    if (ctx->pc == 0x184FCCu) {
        ctx->pc = 0x184FCCu;
        SET_GPR_U32(ctx, 21, READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->pc = 0x184FD0u;
        goto label_184fd0;
    }
    ctx->pc = 0x184FC8u;
    {
        const bool branch_taken_0x184fc8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x184FCCu;
        SET_GPR_U32(ctx, 21, READ32(ADD32(GPR_U32(ctx, 19), 0)));
        if (branch_taken_0x184fc8) {
            ctx->pc = 0x185000u;
            goto label_185000;
        }
    }
    ctx->pc = 0x184FD0u;
label_184fd0:
    // 0x184fd0: 0x8e6202a8
    ctx->pc = 0x184fd0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 680)));
label_184fd4:
    // 0x184fd4: 0x50400005
label_184fd8:
    if (ctx->pc == 0x184FD8u) {
        ctx->pc = 0x184FD8u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 584)));
        ctx->pc = 0x184FDCu;
        goto label_184fdc;
    }
    ctx->pc = 0x184FD4u;
    {
        const bool branch_taken_0x184fd4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x184fd4) {
            ctx->pc = 0x184FD8u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 584)));
            ctx->pc = 0x184FECu;
            goto label_184fec;
        }
    }
    ctx->pc = 0x184FDCu;
label_184fdc:
    // 0x184fdc: 0x8e620238
    ctx->pc = 0x184fdcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 568)));
label_184fe0:
    // 0x184fe0: 0x40f809
label_184fe4:
    if (ctx->pc == 0x184FE4u) {
        ctx->pc = 0x184FE4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x184FE8u;
        goto label_184fe8;
    }
    ctx->pc = 0x184FE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x184FE8u);
        ctx->pc = 0x184FE4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x184BA0u: goto label_184ba0;
            case 0x184BA4u: goto label_184ba4;
            case 0x184BA8u: goto label_184ba8;
            case 0x184BACu: goto label_184bac;
            case 0x184BB0u: goto label_184bb0;
            case 0x184BB4u: goto label_184bb4;
            case 0x184BB8u: goto label_184bb8;
            case 0x184BBCu: goto label_184bbc;
            case 0x184BC0u: goto label_184bc0;
            case 0x184BC4u: goto label_184bc4;
            case 0x184BC8u: goto label_184bc8;
            case 0x184BCCu: goto label_184bcc;
            case 0x184BD0u: goto label_184bd0;
            case 0x184BD4u: goto label_184bd4;
            case 0x184BD8u: goto label_184bd8;
            case 0x184BDCu: goto label_184bdc;
            case 0x184BE0u: goto label_184be0;
            case 0x184BE4u: goto label_184be4;
            case 0x184BE8u: goto label_184be8;
            case 0x184BECu: goto label_184bec;
            case 0x184BF0u: goto label_184bf0;
            case 0x184BF4u: goto label_184bf4;
            case 0x184BF8u: goto label_184bf8;
            case 0x184BFCu: goto label_184bfc;
            case 0x184C00u: goto label_184c00;
            case 0x184C04u: goto label_184c04;
            case 0x184C08u: goto label_184c08;
            case 0x184C0Cu: goto label_184c0c;
            case 0x184C10u: goto label_184c10;
            case 0x184C14u: goto label_184c14;
            case 0x184C18u: goto label_184c18;
            case 0x184C1Cu: goto label_184c1c;
            case 0x184C20u: goto label_184c20;
            case 0x184C24u: goto label_184c24;
            case 0x184C28u: goto label_184c28;
            case 0x184C2Cu: goto label_184c2c;
            case 0x184C30u: goto label_184c30;
            case 0x184C34u: goto label_184c34;
            case 0x184C38u: goto label_184c38;
            case 0x184C3Cu: goto label_184c3c;
            case 0x184C40u: goto label_184c40;
            case 0x184C44u: goto label_184c44;
            case 0x184C48u: goto label_184c48;
            case 0x184C4Cu: goto label_184c4c;
            case 0x184C50u: goto label_184c50;
            case 0x184C54u: goto label_184c54;
            case 0x184C58u: goto label_184c58;
            case 0x184C5Cu: goto label_184c5c;
            case 0x184C60u: goto label_184c60;
            case 0x184C64u: goto label_184c64;
            case 0x184C68u: goto label_184c68;
            case 0x184C6Cu: goto label_184c6c;
            case 0x184C70u: goto label_184c70;
            case 0x184C74u: goto label_184c74;
            case 0x184C78u: goto label_184c78;
            case 0x184C7Cu: goto label_184c7c;
            case 0x184C80u: goto label_184c80;
            case 0x184C84u: goto label_184c84;
            case 0x184C88u: goto label_184c88;
            case 0x184C8Cu: goto label_184c8c;
            case 0x184C90u: goto label_184c90;
            case 0x184C94u: goto label_184c94;
            case 0x184C98u: goto label_184c98;
            case 0x184C9Cu: goto label_184c9c;
            case 0x184CA0u: goto label_184ca0;
            case 0x184CA4u: goto label_184ca4;
            case 0x184CA8u: goto label_184ca8;
            case 0x184CACu: goto label_184cac;
            case 0x184CB0u: goto label_184cb0;
            case 0x184CB4u: goto label_184cb4;
            case 0x184CB8u: goto label_184cb8;
            case 0x184CBCu: goto label_184cbc;
            case 0x184CC0u: goto label_184cc0;
            case 0x184CC4u: goto label_184cc4;
            case 0x184CC8u: goto label_184cc8;
            case 0x184CCCu: goto label_184ccc;
            case 0x184CD0u: goto label_184cd0;
            case 0x184CD4u: goto label_184cd4;
            case 0x184CD8u: goto label_184cd8;
            case 0x184CDCu: goto label_184cdc;
            case 0x184CE0u: goto label_184ce0;
            case 0x184CE4u: goto label_184ce4;
            case 0x184CE8u: goto label_184ce8;
            case 0x184CECu: goto label_184cec;
            case 0x184CF0u: goto label_184cf0;
            case 0x184CF4u: goto label_184cf4;
            case 0x184CF8u: goto label_184cf8;
            case 0x184CFCu: goto label_184cfc;
            case 0x184D00u: goto label_184d00;
            case 0x184D04u: goto label_184d04;
            case 0x184D08u: goto label_184d08;
            case 0x184D0Cu: goto label_184d0c;
            case 0x184D10u: goto label_184d10;
            case 0x184D14u: goto label_184d14;
            case 0x184D18u: goto label_184d18;
            case 0x184D1Cu: goto label_184d1c;
            case 0x184D20u: goto label_184d20;
            case 0x184D24u: goto label_184d24;
            case 0x184D28u: goto label_184d28;
            case 0x184D2Cu: goto label_184d2c;
            case 0x184D30u: goto label_184d30;
            case 0x184D34u: goto label_184d34;
            case 0x184D38u: goto label_184d38;
            case 0x184D3Cu: goto label_184d3c;
            case 0x184D40u: goto label_184d40;
            case 0x184D44u: goto label_184d44;
            case 0x184D48u: goto label_184d48;
            case 0x184D4Cu: goto label_184d4c;
            case 0x184D50u: goto label_184d50;
            case 0x184D54u: goto label_184d54;
            case 0x184D58u: goto label_184d58;
            case 0x184D5Cu: goto label_184d5c;
            case 0x184D60u: goto label_184d60;
            case 0x184D64u: goto label_184d64;
            case 0x184D68u: goto label_184d68;
            case 0x184D6Cu: goto label_184d6c;
            case 0x184D70u: goto label_184d70;
            case 0x184D74u: goto label_184d74;
            case 0x184D78u: goto label_184d78;
            case 0x184D7Cu: goto label_184d7c;
            case 0x184D80u: goto label_184d80;
            case 0x184D84u: goto label_184d84;
            case 0x184D88u: goto label_184d88;
            case 0x184D8Cu: goto label_184d8c;
            case 0x184D90u: goto label_184d90;
            case 0x184D94u: goto label_184d94;
            case 0x184D98u: goto label_184d98;
            case 0x184D9Cu: goto label_184d9c;
            case 0x184DA0u: goto label_184da0;
            case 0x184DA4u: goto label_184da4;
            case 0x184DA8u: goto label_184da8;
            case 0x184DACu: goto label_184dac;
            case 0x184DB0u: goto label_184db0;
            case 0x184DB4u: goto label_184db4;
            case 0x184DB8u: goto label_184db8;
            case 0x184DBCu: goto label_184dbc;
            case 0x184DC0u: goto label_184dc0;
            case 0x184DC4u: goto label_184dc4;
            case 0x184DC8u: goto label_184dc8;
            case 0x184DCCu: goto label_184dcc;
            case 0x184DD0u: goto label_184dd0;
            case 0x184DD4u: goto label_184dd4;
            case 0x184DD8u: goto label_184dd8;
            case 0x184DDCu: goto label_184ddc;
            case 0x184DE0u: goto label_184de0;
            case 0x184DE4u: goto label_184de4;
            case 0x184DE8u: goto label_184de8;
            case 0x184DECu: goto label_184dec;
            case 0x184DF0u: goto label_184df0;
            case 0x184DF4u: goto label_184df4;
            case 0x184DF8u: goto label_184df8;
            case 0x184DFCu: goto label_184dfc;
            case 0x184E00u: goto label_184e00;
            case 0x184E04u: goto label_184e04;
            case 0x184E08u: goto label_184e08;
            case 0x184E0Cu: goto label_184e0c;
            case 0x184E10u: goto label_184e10;
            case 0x184E14u: goto label_184e14;
            case 0x184E18u: goto label_184e18;
            case 0x184E1Cu: goto label_184e1c;
            case 0x184E20u: goto label_184e20;
            case 0x184E24u: goto label_184e24;
            case 0x184E28u: goto label_184e28;
            case 0x184E2Cu: goto label_184e2c;
            case 0x184E30u: goto label_184e30;
            case 0x184E34u: goto label_184e34;
            case 0x184E38u: goto label_184e38;
            case 0x184E3Cu: goto label_184e3c;
            case 0x184E40u: goto label_184e40;
            case 0x184E44u: goto label_184e44;
            case 0x184E48u: goto label_184e48;
            case 0x184E4Cu: goto label_184e4c;
            case 0x184E50u: goto label_184e50;
            case 0x184E54u: goto label_184e54;
            case 0x184E58u: goto label_184e58;
            case 0x184E5Cu: goto label_184e5c;
            case 0x184E60u: goto label_184e60;
            case 0x184E64u: goto label_184e64;
            case 0x184E68u: goto label_184e68;
            case 0x184E6Cu: goto label_184e6c;
            case 0x184E70u: goto label_184e70;
            case 0x184E74u: goto label_184e74;
            case 0x184E78u: goto label_184e78;
            case 0x184E7Cu: goto label_184e7c;
            case 0x184E80u: goto label_184e80;
            case 0x184E84u: goto label_184e84;
            case 0x184E88u: goto label_184e88;
            case 0x184E8Cu: goto label_184e8c;
            case 0x184E90u: goto label_184e90;
            case 0x184E94u: goto label_184e94;
            case 0x184E98u: goto label_184e98;
            case 0x184E9Cu: goto label_184e9c;
            case 0x184EA0u: goto label_184ea0;
            case 0x184EA4u: goto label_184ea4;
            case 0x184EA8u: goto label_184ea8;
            case 0x184EACu: goto label_184eac;
            case 0x184EB0u: goto label_184eb0;
            case 0x184EB4u: goto label_184eb4;
            case 0x184EB8u: goto label_184eb8;
            case 0x184EBCu: goto label_184ebc;
            case 0x184EC0u: goto label_184ec0;
            case 0x184EC4u: goto label_184ec4;
            case 0x184EC8u: goto label_184ec8;
            case 0x184ECCu: goto label_184ecc;
            case 0x184ED0u: goto label_184ed0;
            case 0x184ED4u: goto label_184ed4;
            case 0x184ED8u: goto label_184ed8;
            case 0x184EDCu: goto label_184edc;
            case 0x184EE0u: goto label_184ee0;
            case 0x184EE4u: goto label_184ee4;
            case 0x184EE8u: goto label_184ee8;
            case 0x184EECu: goto label_184eec;
            case 0x184EF0u: goto label_184ef0;
            case 0x184EF4u: goto label_184ef4;
            case 0x184EF8u: goto label_184ef8;
            case 0x184EFCu: goto label_184efc;
            case 0x184F00u: goto label_184f00;
            case 0x184F04u: goto label_184f04;
            case 0x184F08u: goto label_184f08;
            case 0x184F0Cu: goto label_184f0c;
            case 0x184F10u: goto label_184f10;
            case 0x184F14u: goto label_184f14;
            case 0x184F18u: goto label_184f18;
            case 0x184F1Cu: goto label_184f1c;
            case 0x184F20u: goto label_184f20;
            case 0x184F24u: goto label_184f24;
            case 0x184F28u: goto label_184f28;
            case 0x184F2Cu: goto label_184f2c;
            case 0x184F30u: goto label_184f30;
            case 0x184F34u: goto label_184f34;
            case 0x184F38u: goto label_184f38;
            case 0x184F3Cu: goto label_184f3c;
            case 0x184F40u: goto label_184f40;
            case 0x184F44u: goto label_184f44;
            case 0x184F48u: goto label_184f48;
            case 0x184F4Cu: goto label_184f4c;
            case 0x184F50u: goto label_184f50;
            case 0x184F54u: goto label_184f54;
            case 0x184F58u: goto label_184f58;
            case 0x184F5Cu: goto label_184f5c;
            case 0x184F60u: goto label_184f60;
            case 0x184F64u: goto label_184f64;
            case 0x184F68u: goto label_184f68;
            case 0x184F6Cu: goto label_184f6c;
            case 0x184F70u: goto label_184f70;
            case 0x184F74u: goto label_184f74;
            case 0x184F78u: goto label_184f78;
            case 0x184F7Cu: goto label_184f7c;
            case 0x184F80u: goto label_184f80;
            case 0x184F84u: goto label_184f84;
            case 0x184F88u: goto label_184f88;
            case 0x184F8Cu: goto label_184f8c;
            case 0x184F90u: goto label_184f90;
            case 0x184F94u: goto label_184f94;
            case 0x184F98u: goto label_184f98;
            case 0x184F9Cu: goto label_184f9c;
            case 0x184FA0u: goto label_184fa0;
            case 0x184FA4u: goto label_184fa4;
            case 0x184FA8u: goto label_184fa8;
            case 0x184FACu: goto label_184fac;
            case 0x184FB0u: goto label_184fb0;
            case 0x184FB4u: goto label_184fb4;
            case 0x184FB8u: goto label_184fb8;
            case 0x184FBCu: goto label_184fbc;
            case 0x184FC0u: goto label_184fc0;
            case 0x184FC4u: goto label_184fc4;
            case 0x184FC8u: goto label_184fc8;
            case 0x184FCCu: goto label_184fcc;
            case 0x184FD0u: goto label_184fd0;
            case 0x184FD4u: goto label_184fd4;
            case 0x184FD8u: goto label_184fd8;
            case 0x184FDCu: goto label_184fdc;
            case 0x184FE0u: goto label_184fe0;
            case 0x184FE4u: goto label_184fe4;
            case 0x184FE8u: goto label_184fe8;
            case 0x184FECu: goto label_184fec;
            case 0x184FF0u: goto label_184ff0;
            case 0x184FF4u: goto label_184ff4;
            case 0x184FF8u: goto label_184ff8;
            case 0x184FFCu: goto label_184ffc;
            case 0x185000u: goto label_185000;
            case 0x185004u: goto label_185004;
            case 0x185008u: goto label_185008;
            case 0x18500Cu: goto label_18500c;
            case 0x185010u: goto label_185010;
            case 0x185014u: goto label_185014;
            case 0x185018u: goto label_185018;
            case 0x18501Cu: goto label_18501c;
            case 0x185020u: goto label_185020;
            case 0x185024u: goto label_185024;
            case 0x185028u: goto label_185028;
            case 0x18502Cu: goto label_18502c;
            case 0x185030u: goto label_185030;
            case 0x185034u: goto label_185034;
            case 0x185038u: goto label_185038;
            case 0x18503Cu: goto label_18503c;
            case 0x185040u: goto label_185040;
            case 0x185044u: goto label_185044;
            case 0x185048u: goto label_185048;
            case 0x18504Cu: goto label_18504c;
            case 0x185050u: goto label_185050;
            case 0x185054u: goto label_185054;
            case 0x185058u: goto label_185058;
            case 0x18505Cu: goto label_18505c;
            case 0x185060u: goto label_185060;
            case 0x185064u: goto label_185064;
            case 0x185068u: goto label_185068;
            case 0x18506Cu: goto label_18506c;
            case 0x185070u: goto label_185070;
            case 0x185074u: goto label_185074;
            case 0x185078u: goto label_185078;
            case 0x18507Cu: goto label_18507c;
            case 0x185080u: goto label_185080;
            case 0x185084u: goto label_185084;
            case 0x185088u: goto label_185088;
            case 0x18508Cu: goto label_18508c;
            case 0x185090u: goto label_185090;
            case 0x185094u: goto label_185094;
            case 0x185098u: goto label_185098;
            case 0x18509Cu: goto label_18509c;
            case 0x1850A0u: goto label_1850a0;
            case 0x1850A4u: goto label_1850a4;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x184FE8u; }
            if (ctx->pc != 0x184FE8u) { return; }
        }
    }
    ctx->pc = 0x184FE8u;
label_184fe8:
    // 0x184fe8: 0x8e620248
    ctx->pc = 0x184fe8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 584)));
label_184fec:
    // 0x184fec: 0x40f809
label_184ff0:
    if (ctx->pc == 0x184FF0u) {
        ctx->pc = 0x184FF0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x184FF4u;
        goto label_184ff4;
    }
    ctx->pc = 0x184FECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x184FF4u);
        ctx->pc = 0x184FF0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x184BA0u: goto label_184ba0;
            case 0x184BA4u: goto label_184ba4;
            case 0x184BA8u: goto label_184ba8;
            case 0x184BACu: goto label_184bac;
            case 0x184BB0u: goto label_184bb0;
            case 0x184BB4u: goto label_184bb4;
            case 0x184BB8u: goto label_184bb8;
            case 0x184BBCu: goto label_184bbc;
            case 0x184BC0u: goto label_184bc0;
            case 0x184BC4u: goto label_184bc4;
            case 0x184BC8u: goto label_184bc8;
            case 0x184BCCu: goto label_184bcc;
            case 0x184BD0u: goto label_184bd0;
            case 0x184BD4u: goto label_184bd4;
            case 0x184BD8u: goto label_184bd8;
            case 0x184BDCu: goto label_184bdc;
            case 0x184BE0u: goto label_184be0;
            case 0x184BE4u: goto label_184be4;
            case 0x184BE8u: goto label_184be8;
            case 0x184BECu: goto label_184bec;
            case 0x184BF0u: goto label_184bf0;
            case 0x184BF4u: goto label_184bf4;
            case 0x184BF8u: goto label_184bf8;
            case 0x184BFCu: goto label_184bfc;
            case 0x184C00u: goto label_184c00;
            case 0x184C04u: goto label_184c04;
            case 0x184C08u: goto label_184c08;
            case 0x184C0Cu: goto label_184c0c;
            case 0x184C10u: goto label_184c10;
            case 0x184C14u: goto label_184c14;
            case 0x184C18u: goto label_184c18;
            case 0x184C1Cu: goto label_184c1c;
            case 0x184C20u: goto label_184c20;
            case 0x184C24u: goto label_184c24;
            case 0x184C28u: goto label_184c28;
            case 0x184C2Cu: goto label_184c2c;
            case 0x184C30u: goto label_184c30;
            case 0x184C34u: goto label_184c34;
            case 0x184C38u: goto label_184c38;
            case 0x184C3Cu: goto label_184c3c;
            case 0x184C40u: goto label_184c40;
            case 0x184C44u: goto label_184c44;
            case 0x184C48u: goto label_184c48;
            case 0x184C4Cu: goto label_184c4c;
            case 0x184C50u: goto label_184c50;
            case 0x184C54u: goto label_184c54;
            case 0x184C58u: goto label_184c58;
            case 0x184C5Cu: goto label_184c5c;
            case 0x184C60u: goto label_184c60;
            case 0x184C64u: goto label_184c64;
            case 0x184C68u: goto label_184c68;
            case 0x184C6Cu: goto label_184c6c;
            case 0x184C70u: goto label_184c70;
            case 0x184C74u: goto label_184c74;
            case 0x184C78u: goto label_184c78;
            case 0x184C7Cu: goto label_184c7c;
            case 0x184C80u: goto label_184c80;
            case 0x184C84u: goto label_184c84;
            case 0x184C88u: goto label_184c88;
            case 0x184C8Cu: goto label_184c8c;
            case 0x184C90u: goto label_184c90;
            case 0x184C94u: goto label_184c94;
            case 0x184C98u: goto label_184c98;
            case 0x184C9Cu: goto label_184c9c;
            case 0x184CA0u: goto label_184ca0;
            case 0x184CA4u: goto label_184ca4;
            case 0x184CA8u: goto label_184ca8;
            case 0x184CACu: goto label_184cac;
            case 0x184CB0u: goto label_184cb0;
            case 0x184CB4u: goto label_184cb4;
            case 0x184CB8u: goto label_184cb8;
            case 0x184CBCu: goto label_184cbc;
            case 0x184CC0u: goto label_184cc0;
            case 0x184CC4u: goto label_184cc4;
            case 0x184CC8u: goto label_184cc8;
            case 0x184CCCu: goto label_184ccc;
            case 0x184CD0u: goto label_184cd0;
            case 0x184CD4u: goto label_184cd4;
            case 0x184CD8u: goto label_184cd8;
            case 0x184CDCu: goto label_184cdc;
            case 0x184CE0u: goto label_184ce0;
            case 0x184CE4u: goto label_184ce4;
            case 0x184CE8u: goto label_184ce8;
            case 0x184CECu: goto label_184cec;
            case 0x184CF0u: goto label_184cf0;
            case 0x184CF4u: goto label_184cf4;
            case 0x184CF8u: goto label_184cf8;
            case 0x184CFCu: goto label_184cfc;
            case 0x184D00u: goto label_184d00;
            case 0x184D04u: goto label_184d04;
            case 0x184D08u: goto label_184d08;
            case 0x184D0Cu: goto label_184d0c;
            case 0x184D10u: goto label_184d10;
            case 0x184D14u: goto label_184d14;
            case 0x184D18u: goto label_184d18;
            case 0x184D1Cu: goto label_184d1c;
            case 0x184D20u: goto label_184d20;
            case 0x184D24u: goto label_184d24;
            case 0x184D28u: goto label_184d28;
            case 0x184D2Cu: goto label_184d2c;
            case 0x184D30u: goto label_184d30;
            case 0x184D34u: goto label_184d34;
            case 0x184D38u: goto label_184d38;
            case 0x184D3Cu: goto label_184d3c;
            case 0x184D40u: goto label_184d40;
            case 0x184D44u: goto label_184d44;
            case 0x184D48u: goto label_184d48;
            case 0x184D4Cu: goto label_184d4c;
            case 0x184D50u: goto label_184d50;
            case 0x184D54u: goto label_184d54;
            case 0x184D58u: goto label_184d58;
            case 0x184D5Cu: goto label_184d5c;
            case 0x184D60u: goto label_184d60;
            case 0x184D64u: goto label_184d64;
            case 0x184D68u: goto label_184d68;
            case 0x184D6Cu: goto label_184d6c;
            case 0x184D70u: goto label_184d70;
            case 0x184D74u: goto label_184d74;
            case 0x184D78u: goto label_184d78;
            case 0x184D7Cu: goto label_184d7c;
            case 0x184D80u: goto label_184d80;
            case 0x184D84u: goto label_184d84;
            case 0x184D88u: goto label_184d88;
            case 0x184D8Cu: goto label_184d8c;
            case 0x184D90u: goto label_184d90;
            case 0x184D94u: goto label_184d94;
            case 0x184D98u: goto label_184d98;
            case 0x184D9Cu: goto label_184d9c;
            case 0x184DA0u: goto label_184da0;
            case 0x184DA4u: goto label_184da4;
            case 0x184DA8u: goto label_184da8;
            case 0x184DACu: goto label_184dac;
            case 0x184DB0u: goto label_184db0;
            case 0x184DB4u: goto label_184db4;
            case 0x184DB8u: goto label_184db8;
            case 0x184DBCu: goto label_184dbc;
            case 0x184DC0u: goto label_184dc0;
            case 0x184DC4u: goto label_184dc4;
            case 0x184DC8u: goto label_184dc8;
            case 0x184DCCu: goto label_184dcc;
            case 0x184DD0u: goto label_184dd0;
            case 0x184DD4u: goto label_184dd4;
            case 0x184DD8u: goto label_184dd8;
            case 0x184DDCu: goto label_184ddc;
            case 0x184DE0u: goto label_184de0;
            case 0x184DE4u: goto label_184de4;
            case 0x184DE8u: goto label_184de8;
            case 0x184DECu: goto label_184dec;
            case 0x184DF0u: goto label_184df0;
            case 0x184DF4u: goto label_184df4;
            case 0x184DF8u: goto label_184df8;
            case 0x184DFCu: goto label_184dfc;
            case 0x184E00u: goto label_184e00;
            case 0x184E04u: goto label_184e04;
            case 0x184E08u: goto label_184e08;
            case 0x184E0Cu: goto label_184e0c;
            case 0x184E10u: goto label_184e10;
            case 0x184E14u: goto label_184e14;
            case 0x184E18u: goto label_184e18;
            case 0x184E1Cu: goto label_184e1c;
            case 0x184E20u: goto label_184e20;
            case 0x184E24u: goto label_184e24;
            case 0x184E28u: goto label_184e28;
            case 0x184E2Cu: goto label_184e2c;
            case 0x184E30u: goto label_184e30;
            case 0x184E34u: goto label_184e34;
            case 0x184E38u: goto label_184e38;
            case 0x184E3Cu: goto label_184e3c;
            case 0x184E40u: goto label_184e40;
            case 0x184E44u: goto label_184e44;
            case 0x184E48u: goto label_184e48;
            case 0x184E4Cu: goto label_184e4c;
            case 0x184E50u: goto label_184e50;
            case 0x184E54u: goto label_184e54;
            case 0x184E58u: goto label_184e58;
            case 0x184E5Cu: goto label_184e5c;
            case 0x184E60u: goto label_184e60;
            case 0x184E64u: goto label_184e64;
            case 0x184E68u: goto label_184e68;
            case 0x184E6Cu: goto label_184e6c;
            case 0x184E70u: goto label_184e70;
            case 0x184E74u: goto label_184e74;
            case 0x184E78u: goto label_184e78;
            case 0x184E7Cu: goto label_184e7c;
            case 0x184E80u: goto label_184e80;
            case 0x184E84u: goto label_184e84;
            case 0x184E88u: goto label_184e88;
            case 0x184E8Cu: goto label_184e8c;
            case 0x184E90u: goto label_184e90;
            case 0x184E94u: goto label_184e94;
            case 0x184E98u: goto label_184e98;
            case 0x184E9Cu: goto label_184e9c;
            case 0x184EA0u: goto label_184ea0;
            case 0x184EA4u: goto label_184ea4;
            case 0x184EA8u: goto label_184ea8;
            case 0x184EACu: goto label_184eac;
            case 0x184EB0u: goto label_184eb0;
            case 0x184EB4u: goto label_184eb4;
            case 0x184EB8u: goto label_184eb8;
            case 0x184EBCu: goto label_184ebc;
            case 0x184EC0u: goto label_184ec0;
            case 0x184EC4u: goto label_184ec4;
            case 0x184EC8u: goto label_184ec8;
            case 0x184ECCu: goto label_184ecc;
            case 0x184ED0u: goto label_184ed0;
            case 0x184ED4u: goto label_184ed4;
            case 0x184ED8u: goto label_184ed8;
            case 0x184EDCu: goto label_184edc;
            case 0x184EE0u: goto label_184ee0;
            case 0x184EE4u: goto label_184ee4;
            case 0x184EE8u: goto label_184ee8;
            case 0x184EECu: goto label_184eec;
            case 0x184EF0u: goto label_184ef0;
            case 0x184EF4u: goto label_184ef4;
            case 0x184EF8u: goto label_184ef8;
            case 0x184EFCu: goto label_184efc;
            case 0x184F00u: goto label_184f00;
            case 0x184F04u: goto label_184f04;
            case 0x184F08u: goto label_184f08;
            case 0x184F0Cu: goto label_184f0c;
            case 0x184F10u: goto label_184f10;
            case 0x184F14u: goto label_184f14;
            case 0x184F18u: goto label_184f18;
            case 0x184F1Cu: goto label_184f1c;
            case 0x184F20u: goto label_184f20;
            case 0x184F24u: goto label_184f24;
            case 0x184F28u: goto label_184f28;
            case 0x184F2Cu: goto label_184f2c;
            case 0x184F30u: goto label_184f30;
            case 0x184F34u: goto label_184f34;
            case 0x184F38u: goto label_184f38;
            case 0x184F3Cu: goto label_184f3c;
            case 0x184F40u: goto label_184f40;
            case 0x184F44u: goto label_184f44;
            case 0x184F48u: goto label_184f48;
            case 0x184F4Cu: goto label_184f4c;
            case 0x184F50u: goto label_184f50;
            case 0x184F54u: goto label_184f54;
            case 0x184F58u: goto label_184f58;
            case 0x184F5Cu: goto label_184f5c;
            case 0x184F60u: goto label_184f60;
            case 0x184F64u: goto label_184f64;
            case 0x184F68u: goto label_184f68;
            case 0x184F6Cu: goto label_184f6c;
            case 0x184F70u: goto label_184f70;
            case 0x184F74u: goto label_184f74;
            case 0x184F78u: goto label_184f78;
            case 0x184F7Cu: goto label_184f7c;
            case 0x184F80u: goto label_184f80;
            case 0x184F84u: goto label_184f84;
            case 0x184F88u: goto label_184f88;
            case 0x184F8Cu: goto label_184f8c;
            case 0x184F90u: goto label_184f90;
            case 0x184F94u: goto label_184f94;
            case 0x184F98u: goto label_184f98;
            case 0x184F9Cu: goto label_184f9c;
            case 0x184FA0u: goto label_184fa0;
            case 0x184FA4u: goto label_184fa4;
            case 0x184FA8u: goto label_184fa8;
            case 0x184FACu: goto label_184fac;
            case 0x184FB0u: goto label_184fb0;
            case 0x184FB4u: goto label_184fb4;
            case 0x184FB8u: goto label_184fb8;
            case 0x184FBCu: goto label_184fbc;
            case 0x184FC0u: goto label_184fc0;
            case 0x184FC4u: goto label_184fc4;
            case 0x184FC8u: goto label_184fc8;
            case 0x184FCCu: goto label_184fcc;
            case 0x184FD0u: goto label_184fd0;
            case 0x184FD4u: goto label_184fd4;
            case 0x184FD8u: goto label_184fd8;
            case 0x184FDCu: goto label_184fdc;
            case 0x184FE0u: goto label_184fe0;
            case 0x184FE4u: goto label_184fe4;
            case 0x184FE8u: goto label_184fe8;
            case 0x184FECu: goto label_184fec;
            case 0x184FF0u: goto label_184ff0;
            case 0x184FF4u: goto label_184ff4;
            case 0x184FF8u: goto label_184ff8;
            case 0x184FFCu: goto label_184ffc;
            case 0x185000u: goto label_185000;
            case 0x185004u: goto label_185004;
            case 0x185008u: goto label_185008;
            case 0x18500Cu: goto label_18500c;
            case 0x185010u: goto label_185010;
            case 0x185014u: goto label_185014;
            case 0x185018u: goto label_185018;
            case 0x18501Cu: goto label_18501c;
            case 0x185020u: goto label_185020;
            case 0x185024u: goto label_185024;
            case 0x185028u: goto label_185028;
            case 0x18502Cu: goto label_18502c;
            case 0x185030u: goto label_185030;
            case 0x185034u: goto label_185034;
            case 0x185038u: goto label_185038;
            case 0x18503Cu: goto label_18503c;
            case 0x185040u: goto label_185040;
            case 0x185044u: goto label_185044;
            case 0x185048u: goto label_185048;
            case 0x18504Cu: goto label_18504c;
            case 0x185050u: goto label_185050;
            case 0x185054u: goto label_185054;
            case 0x185058u: goto label_185058;
            case 0x18505Cu: goto label_18505c;
            case 0x185060u: goto label_185060;
            case 0x185064u: goto label_185064;
            case 0x185068u: goto label_185068;
            case 0x18506Cu: goto label_18506c;
            case 0x185070u: goto label_185070;
            case 0x185074u: goto label_185074;
            case 0x185078u: goto label_185078;
            case 0x18507Cu: goto label_18507c;
            case 0x185080u: goto label_185080;
            case 0x185084u: goto label_185084;
            case 0x185088u: goto label_185088;
            case 0x18508Cu: goto label_18508c;
            case 0x185090u: goto label_185090;
            case 0x185094u: goto label_185094;
            case 0x185098u: goto label_185098;
            case 0x18509Cu: goto label_18509c;
            case 0x1850A0u: goto label_1850a0;
            case 0x1850A4u: goto label_1850a4;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x184FF4u; }
            if (ctx->pc != 0x184FF4u) { return; }
        }
    }
    ctx->pc = 0x184FF4u;
label_184ff4:
    // 0x184ff4: 0xc061430
label_184ff8:
    if (ctx->pc == 0x184FF8u) {
        ctx->pc = 0x184FF8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x184FFCu;
        goto label_184ffc;
    }
    ctx->pc = 0x184FF4u;
    SET_GPR_U32(ctx, 31, 0x184FFCu);
    ctx->pc = 0x184FF8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1850C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MPVDEC_ResetDc_0x1850c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184FFCu; }
        else if (ctx->pc != 0x184FFCu) { ctx->pc = 0x184FFCu; }
    }
    if (ctx->pc != 0x184FFCu) { return; }
    ctx->pc = 0x184FFCu;
label_184ffc:
    // 0x184ffc: 0x8e750000
    ctx->pc = 0x184ffcu;
    SET_GPR_U32(ctx, 21, READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_185000:
    // 0x185000: 0x702d
    ctx->pc = 0x185000u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_185004:
    // 0x185004: 0x8e710004
    ctx->pc = 0x185004u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_185008:
    // 0x185008: 0x8e740008
    ctx->pc = 0x185008u;
    SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_18500c:
    // 0x18500c: 0x8e72000c
    ctx->pc = 0x18500cu;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_185010:
    // 0x185010: 0x2a82000a
    ctx->pc = 0x185010u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 20), 10));
label_185014:
    // 0x185014: 0x14400005
label_185018:
    if (ctx->pc == 0x185018u) {
        ctx->pc = 0x185018u;
        SET_GPR_U32(ctx, 5, SRL32(GPR_U32(ctx, 21), 9));
        ctx->pc = 0x18501Cu;
        goto label_18501c;
    }
    ctx->pc = 0x185014u;
    {
        const bool branch_taken_0x185014 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x185018u;
        SET_GPR_U32(ctx, 5, SRL32(GPR_U32(ctx, 21), 9));
        if (branch_taken_0x185014) {
            ctx->pc = 0x18502Cu;
            goto label_18502c;
        }
    }
    ctx->pc = 0x18501Cu;
label_18501c:
    // 0x18501c: 0x24020029
    ctx->pc = 0x18501cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 41));
label_185020:
    // 0x185020: 0x541023
    ctx->pc = 0x185020u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_185024:
    // 0x185024: 0x511006
    ctx->pc = 0x185024u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 17), GPR_U32(ctx, 2) & 0x1F));
label_185028:
    // 0x185028: 0xa22825
    ctx->pc = 0x185028u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_18502c:
    // 0x18502c: 0x14a0feee
label_185030:
    if (ctx->pc == 0x185030u) {
        ctx->pc = 0x185030u;
        SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
        ctx->pc = 0x185034u;
        goto label_185034;
    }
    ctx->pc = 0x18502Cu;
    {
        const bool branch_taken_0x18502c = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        ctx->pc = 0x185030u;
        SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
        if (branch_taken_0x18502c) {
            ctx->pc = 0x184BE8u;
            goto label_184be8;
        }
    }
    ctx->pc = 0x185034u;
label_185034:
    // 0x185034: 0x26820007
    ctx->pc = 0x185034u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 20), 7));
label_185038:
    // 0x185038: 0x8fc70000
    ctx->pc = 0x185038u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_18503c:
    // 0x18503c: 0x210c3
    ctx->pc = 0x18503cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
label_185040:
    // 0x185040: 0x8ee30000
    ctx->pc = 0x185040u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_185044:
    // 0x185044: 0x2442fff8
    ctx->pc = 0x185044u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967288));
label_185048:
    // 0x185048: 0x8fa50000
    ctx->pc = 0x185048u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_18504c:
    // 0x18504c: 0x2421021
    ctx->pc = 0x18504cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_185050:
    // 0x185050: 0x3c0202d
    ctx->pc = 0x185050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_185054:
    // 0x185054: 0x473823
    ctx->pc = 0x185054u;
    SET_GPR_U32(ctx, 7, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_185058:
    // 0x185058: 0xafc20000
    ctx->pc = 0x185058u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
label_18505c:
    // 0x18505c: 0x671821
    ctx->pc = 0x18505cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_185060:
    // 0x185060: 0x2e0302d
    ctx->pc = 0x185060u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_185064:
    // 0x185064: 0xaee30000
    ctx->pc = 0x185064u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 3));
label_185068:
    // 0x185068: 0x8fa30000
    ctx->pc = 0x185068u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_18506c:
    // 0x18506c: 0xdfbf00a0
    ctx->pc = 0x18506cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_185070:
    // 0x185070: 0x8c620000
    ctx->pc = 0x185070u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_185074:
    // 0x185074: 0xdfbe0090
    ctx->pc = 0x185074u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_185078:
    // 0x185078: 0x471023
    ctx->pc = 0x185078u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_18507c:
    // 0x18507c: 0xdfb70080
    ctx->pc = 0x18507cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_185080:
    // 0x185080: 0xdfb60070
    ctx->pc = 0x185080u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_185084:
    // 0x185084: 0xdfb50060
    ctx->pc = 0x185084u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_185088:
    // 0x185088: 0xdfb40050
    ctx->pc = 0x185088u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_18508c:
    // 0x18508c: 0xdfb30040
    ctx->pc = 0x18508cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_185090:
    // 0x185090: 0xdfb20030
    ctx->pc = 0x185090u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_185094:
    // 0x185094: 0xdfb10020
    ctx->pc = 0x185094u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_185098:
    // 0x185098: 0xdfb00010
    ctx->pc = 0x185098u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_18509c:
    // 0x18509c: 0xac620000
    ctx->pc = 0x18509cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1850a0:
    // 0x1850a0: 0x8061e32
label_1850a4:
    if (ctx->pc == 0x1850A4u) {
        ctx->pc = 0x1850A4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x1850A8u;
        goto label_fallthrough_0x1850a0;
    }
    ctx->pc = 0x1850A0u;
    ctx->pc = 0x1850A4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 176));
    ctx->pc = 0x1878C8u;
    MPVHDEC_GoNextDelim_0x1878c8(rdram, ctx, runtime); return;
label_fallthrough_0x1850a0:
    ctx->pc = 0x1850A8u;
}
