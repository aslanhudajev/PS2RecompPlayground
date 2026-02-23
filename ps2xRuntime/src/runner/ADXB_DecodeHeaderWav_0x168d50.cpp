#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXB_DecodeHeaderWav
// Address: 0x168d50 - 0x168e50
void ADXB_DecodeHeaderWav_0x168d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXB_DecodeHeaderWav");


    ctx->pc = 0x168d50u;

    // 0x168d50: 0x27bdffa0
    ctx->pc = 0x168d50u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x168d54: 0xffb10040
    ctx->pc = 0x168d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x168d58: 0xffb00030
    ctx->pc = 0x168d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x168d5c: 0x24110001
    ctx->pc = 0x168d5cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 1));
    // 0x168d60: 0x80802d
    ctx->pc = 0x168d60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168d64: 0xffbf0050
    ctx->pc = 0x168d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x168d68: 0xa6110002
    ctx->pc = 0x168d68u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 17));
    // 0x168d6c: 0x260800aa
    ctx->pc = 0x168d6cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 16), 170));
    // 0x168d70: 0xa0202d
    ctx->pc = 0x168d70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168d74: 0x26020018
    ctx->pc = 0x168d74u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 24));
    // 0x168d78: 0xc0282d
    ctx->pc = 0x168d78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168d7c: 0x26030010
    ctx->pc = 0x168d7cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 16), 16));
    // 0x168d80: 0xafa80010
    ctx->pc = 0x168d80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 8));
    // 0x168d84: 0x27a60020
    ctx->pc = 0x168d84u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 32));
    // 0x168d88: 0xafa20000
    ctx->pc = 0x168d88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x168d8c: 0x2607000c
    ctx->pc = 0x168d8cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 16), 12));
    // 0x168d90: 0xafa30008
    ctx->pc = 0x168d90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x168d94: 0x2608000d
    ctx->pc = 0x168d94u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 16), 13));
    // 0x168d98: 0x2609000f
    ctx->pc = 0x168d98u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 16), 15));
    // 0x168d9c: 0x260a000e
    ctx->pc = 0x168d9cu;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 16), 14));
    // 0x168da0: 0xc05a2b8
    ctx->pc = 0x168DA0u;
    SET_GPR_U32(ctx, 31, 0x168DA8u);
    ctx->pc = 0x168DA4u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 16), 20));
    ctx->pc = 0x168AE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADX_DecodeInfoWav_0x168ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168DA8u; }
        else if (ctx->pc != 0x168DA8u) { ctx->pc = 0x168DA8u; }
    }
    if (ctx->pc != 0x168DA8u) { return; }
    ctx->pc = 0x168DA8u;
    // 0x168da8: 0x4430003
    ctx->pc = 0x168DA8u;
    {
        const bool branch_taken_0x168da8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x168da8) {
            ctx->pc = 0x168DACu;
            SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
            ctx->pc = 0x168DB8u;
            goto label_168db8;
        }
    }
    ctx->pc = 0x168DB0u;
    // 0x168db0: 0x10000022
    ctx->pc = 0x168DB0u;
    {
        const bool branch_taken_0x168db0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x168DB4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x168db0) {
            ctx->pc = 0x168E3Cu;
            goto label_168e3c;
        }
    }
    ctx->pc = 0x168DB8u;
label_168db8:
    // 0x168db8: 0x2602004c
    ctx->pc = 0x168db8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 76));
    // 0x168dbc: 0x820a000f
    ctx->pc = 0x168dbcu;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 15)));
    // 0x168dc0: 0x40202d
    ctx->pc = 0x168dc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168dc4: 0x8e090010
    ctx->pc = 0x168dc4u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x168dc8: 0x282d
    ctx->pc = 0x168dc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168dcc: 0x8e08003c
    ctx->pc = 0x168dccu;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x168dd0: 0x24060004
    ctx->pc = 0x168dd0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4));
    // 0x168dd4: 0x8e030040
    ctx->pc = 0x168dd4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x168dd8: 0x8e070044
    ctx->pc = 0x168dd8u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x168ddc: 0xa61100a8
    ctx->pc = 0x168ddcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 168), (uint16_t)GPR_U32(ctx, 17));
    // 0x168de0: 0xa600001c
    ctx->pc = 0x168de0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 28), (uint16_t)GPR_U32(ctx, 0));
    // 0x168de4: 0xa600004a
    ctx->pc = 0x168de4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 74), (uint16_t)GPR_U32(ctx, 0));
    // 0x168de8: 0xa6000048
    ctx->pc = 0x168de8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 72), (uint16_t)GPR_U32(ctx, 0));
    // 0x168dec: 0xa6000026
    ctx->pc = 0x168decu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 38), (uint16_t)GPR_U32(ctx, 0));
    // 0x168df0: 0xa6000024
    ctx->pc = 0x168df0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 36), (uint16_t)GPR_U32(ctx, 0));
    // 0x168df4: 0xae000034
    ctx->pc = 0x168df4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x168df8: 0xae000030
    ctx->pc = 0x168df8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x168dfc: 0xae00002c
    ctx->pc = 0x168dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x168e00: 0xae000028
    ctx->pc = 0x168e00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x168e04: 0xae000020
    ctx->pc = 0x168e04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x168e08: 0xa600007c
    ctx->pc = 0x168e08u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 124), (uint16_t)GPR_U32(ctx, 0));
    // 0x168e0c: 0xa600007e
    ctx->pc = 0x168e0cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 126), (uint16_t)GPR_U32(ctx, 0));
    // 0x168e10: 0xae00009c
    ctx->pc = 0x168e10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
    // 0x168e14: 0xae000098
    ctx->pc = 0x168e14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 0));
    // 0x168e18: 0xae0b0058
    ctx->pc = 0x168e18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 11));
    // 0x168e1c: 0xae0a005c
    ctx->pc = 0x168e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 10));
    // 0x168e20: 0xae090060
    ctx->pc = 0x168e20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 9));
    // 0x168e24: 0xae080064
    ctx->pc = 0x168e24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 8));
    // 0x168e28: 0xae030068
    ctx->pc = 0x168e28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 3));
    // 0x168e2c: 0xae07006c
    ctx->pc = 0x168e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 7));
    // 0x168e30: 0xc050cfe
    ctx->pc = 0x168E30u;
    SET_GPR_U32(ctx, 31, 0x168E38u);
    ctx->pc = 0x168E34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
    ctx->pc = 0x1433F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        memset_0x1433f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168E38u; }
        else if (ctx->pc != 0x168E38u) { ctx->pc = 0x168E38u; }
    }
    if (ctx->pc != 0x168E38u) { return; }
    ctx->pc = 0x168E38u;
    // 0x168e38: 0x87a20020
    ctx->pc = 0x168e38u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
label_168e3c:
    // 0x168e3c: 0xdfbf0050
    ctx->pc = 0x168e3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x168e40: 0xdfb10040
    ctx->pc = 0x168e40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x168e44: 0xdfb00030
    ctx->pc = 0x168e44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x168e48: 0x3e00008
    ctx->pc = 0x168E48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x168E4Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x168DB8u: goto label_168db8;
            case 0x168E3Cu: goto label_168e3c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x168E50u;
}
