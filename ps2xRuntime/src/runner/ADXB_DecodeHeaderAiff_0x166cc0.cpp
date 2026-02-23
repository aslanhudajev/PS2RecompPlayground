#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXB_DecodeHeaderAiff
// Address: 0x166cc0 - 0x166dd4
void ADXB_DecodeHeaderAiff_0x166cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXB_DecodeHeaderAiff");


    ctx->pc = 0x166cc0u;

    // 0x166cc0: 0x27bdffb0
    ctx->pc = 0x166cc0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x166cc4: 0xffb00020
    ctx->pc = 0x166cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x166cc8: 0x80802d
    ctx->pc = 0x166cc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166ccc: 0xffb10030
    ctx->pc = 0x166cccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x166cd0: 0xffbf0040
    ctx->pc = 0x166cd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x166cd4: 0x24110001
    ctx->pc = 0x166cd4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 1));
    // 0x166cd8: 0xa0202d
    ctx->pc = 0x166cd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166cdc: 0xa6110002
    ctx->pc = 0x166cdcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 17));
    // 0x166ce0: 0x26020018
    ctx->pc = 0x166ce0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 24));
    // 0x166ce4: 0xc0282d
    ctx->pc = 0x166ce4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166ce8: 0x26030010
    ctx->pc = 0x166ce8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 16), 16));
    // 0x166cec: 0x27a60010
    ctx->pc = 0x166cecu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 16));
    // 0x166cf0: 0xafa20000
    ctx->pc = 0x166cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x166cf4: 0x2607000c
    ctx->pc = 0x166cf4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 16), 12));
    // 0x166cf8: 0xafa30008
    ctx->pc = 0x166cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x166cfc: 0x2608000d
    ctx->pc = 0x166cfcu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 16), 13));
    // 0x166d00: 0x2609000f
    ctx->pc = 0x166d00u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 16), 15));
    // 0x166d04: 0x260a000e
    ctx->pc = 0x166d04u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 16), 14));
    // 0x166d08: 0xc059aee
    ctx->pc = 0x166D08u;
    SET_GPR_U32(ctx, 31, 0x166D10u);
    ctx->pc = 0x166D0Cu;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 16), 20));
    ctx->pc = 0x166BB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADX_DecodeInfoAiff_0x166bb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166D10u; }
        else if (ctx->pc != 0x166D10u) { ctx->pc = 0x166D10u; }
    }
    if (ctx->pc != 0x166D10u) { return; }
    ctx->pc = 0x166D10u;
    // 0x166d10: 0x4430003
    ctx->pc = 0x166D10u;
    {
        const bool branch_taken_0x166d10 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x166d10) {
            ctx->pc = 0x166D14u;
            SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
            ctx->pc = 0x166D20u;
            goto label_166d20;
        }
    }
    ctx->pc = 0x166D18u;
    // 0x166d18: 0x10000029
    ctx->pc = 0x166D18u;
    {
        const bool branch_taken_0x166d18 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x166D1Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x166d18) {
            ctx->pc = 0x166DC0u;
            goto label_166dc0;
        }
    }
    ctx->pc = 0x166D20u;
label_166d20:
    // 0x166d20: 0x260b004c
    ctx->pc = 0x166d20u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 16), 76));
    // 0x166d24: 0x8206000f
    ctx->pc = 0x166d24u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 15)));
    // 0x166d28: 0x24080003
    ctx->pc = 0x166d28u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 3));
    // 0x166d2c: 0x8e050010
    ctx->pc = 0x166d2cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x166d30: 0x240a0008
    ctx->pc = 0x166d30u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 8));
    // 0x166d34: 0x8e02003c
    ctx->pc = 0x166d34u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x166d38: 0x8e030040
    ctx->pc = 0x166d38u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x166d3c: 0x8e040044
    ctx->pc = 0x166d3cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x166d40: 0x8209000d
    ctx->pc = 0x166d40u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 13)));
    // 0x166d44: 0xae070058
    ctx->pc = 0x166d44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 7));
    // 0x166d48: 0xae06005c
    ctx->pc = 0x166d48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 6));
    // 0x166d4c: 0xae050060
    ctx->pc = 0x166d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 5));
    // 0x166d50: 0xae020064
    ctx->pc = 0x166d50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x166d54: 0xae030068
    ctx->pc = 0x166d54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 3));
    // 0x166d58: 0xae04006c
    ctx->pc = 0x166d58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 4));
    // 0x166d5c: 0xa60800a8
    ctx->pc = 0x166d5cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 168), (uint16_t)GPR_U32(ctx, 8));
    // 0x166d60: 0xa600001c
    ctx->pc = 0x166d60u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 28), (uint16_t)GPR_U32(ctx, 0));
    // 0x166d64: 0xa600004a
    ctx->pc = 0x166d64u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 74), (uint16_t)GPR_U32(ctx, 0));
    // 0x166d68: 0xa6000048
    ctx->pc = 0x166d68u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 72), (uint16_t)GPR_U32(ctx, 0));
    // 0x166d6c: 0xa6000026
    ctx->pc = 0x166d6cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 38), (uint16_t)GPR_U32(ctx, 0));
    // 0x166d70: 0xa6000024
    ctx->pc = 0x166d70u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 36), (uint16_t)GPR_U32(ctx, 0));
    // 0x166d74: 0xae000034
    ctx->pc = 0x166d74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x166d78: 0xae000030
    ctx->pc = 0x166d78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x166d7c: 0xae00002c
    ctx->pc = 0x166d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x166d80: 0xae000028
    ctx->pc = 0x166d80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x166d84: 0xae000020
    ctx->pc = 0x166d84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x166d88: 0xa600007c
    ctx->pc = 0x166d88u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 124), (uint16_t)GPR_U32(ctx, 0));
    // 0x166d8c: 0xa600007e
    ctx->pc = 0x166d8cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 126), (uint16_t)GPR_U32(ctx, 0));
    // 0x166d90: 0xae0b0080
    ctx->pc = 0x166d90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 11));
    // 0x166d94: 0xae00009c
    ctx->pc = 0x166d94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
    // 0x166d98: 0x152a0003
    ctx->pc = 0x166D98u;
    {
        const bool branch_taken_0x166d98 = (GPR_U32(ctx, 9) != GPR_U32(ctx, 10));
        ctx->pc = 0x166D9Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 0));
        if (branch_taken_0x166d98) {
            ctx->pc = 0x166DA8u;
            goto label_166da8;
        }
    }
    ctx->pc = 0x166DA0u;
    // 0x166da0: 0x10000002
    ctx->pc = 0x166DA0u;
    {
        const bool branch_taken_0x166da0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x166DA4u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 170), (uint16_t)GPR_U32(ctx, 17));
        if (branch_taken_0x166da0) {
            ctx->pc = 0x166DACu;
            goto label_166dac;
        }
    }
    ctx->pc = 0x166DA8u;
label_166da8:
    // 0x166da8: 0xa60000aa
    ctx->pc = 0x166da8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 170), (uint16_t)GPR_U32(ctx, 0));
label_166dac:
    // 0x166dac: 0x160202d
    ctx->pc = 0x166dacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166db0: 0x282d
    ctx->pc = 0x166db0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166db4: 0xc050cfe
    ctx->pc = 0x166DB4u;
    SET_GPR_U32(ctx, 31, 0x166DBCu);
    ctx->pc = 0x166DB8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x1433F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        memset_0x1433f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166DBCu; }
        else if (ctx->pc != 0x166DBCu) { ctx->pc = 0x166DBCu; }
    }
    if (ctx->pc != 0x166DBCu) { return; }
    ctx->pc = 0x166DBCu;
    // 0x166dbc: 0x87a20010
    ctx->pc = 0x166dbcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 16)));
label_166dc0:
    // 0x166dc0: 0xdfbf0040
    ctx->pc = 0x166dc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x166dc4: 0xdfb10030
    ctx->pc = 0x166dc4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x166dc8: 0xdfb00020
    ctx->pc = 0x166dc8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x166dcc: 0x3e00008
    ctx->pc = 0x166DCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x166DD0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x166D20u: goto label_166d20;
            case 0x166DA8u: goto label_166da8;
            case 0x166DACu: goto label_166dac;
            case 0x166DC0u: goto label_166dc0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x166DD4u;
}
