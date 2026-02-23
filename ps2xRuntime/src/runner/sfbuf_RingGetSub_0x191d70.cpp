#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfbuf_RingGetSub
// Address: 0x191d70 - 0x191e58
void sfbuf_RingGetSub_0x191d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfbuf_RingGetSub");


    ctx->pc = 0x191d70u;

    // 0x191d70: 0x24020388
    ctx->pc = 0x191d70u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 904));
    // 0x191d74: 0x27bdff70
    ctx->pc = 0x191d74u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x191d78: 0xa22818
    ctx->pc = 0x191d78u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)(uint32_t)result); }
    // 0x191d7c: 0xffb00020
    ctx->pc = 0x191d7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x191d80: 0xffb50070
    ctx->pc = 0x191d80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x191d84: 0xc0802d
    ctx->pc = 0x191d84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191d88: 0xffb40060
    ctx->pc = 0x191d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x191d8c: 0x24840d34
    ctx->pc = 0x191d8cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 3380));
    // 0x191d90: 0xffb10030
    ctx->pc = 0x191d90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x191d94: 0xe0a82d
    ctx->pc = 0x191d94u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191d98: 0xffbf0080
    ctx->pc = 0x191d98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x191d9c: 0x858821
    ctx->pc = 0x191d9cu;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x191da0: 0xffb30050
    ctx->pc = 0x191da0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x191da4: 0x26340010
    ctx->pc = 0x191da4u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 17), 16));
    // 0x191da8: 0xffb20040
    ctx->pc = 0x191da8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x191dac: 0xae000004
    ctx->pc = 0x191dacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x191db0: 0xae00000c
    ctx->pc = 0x191db0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x191db4: 0xae000014
    ctx->pc = 0x191db4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x191db8: 0xae000018
    ctx->pc = 0x191db8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x191dbc: 0xae000000
    ctx->pc = 0x191dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x191dc0: 0x8e220004
    ctx->pc = 0x191dc0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x191dc4: 0x8e920004
    ctx->pc = 0x191dc4u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x191dc8: 0xae000008
    ctx->pc = 0x191dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x191dcc: 0x10400018
    ctx->pc = 0x191DCCu;
    {
        const bool branch_taken_0x191dcc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x191DD0u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
        if (branch_taken_0x191dcc) {
            ctx->pc = 0x191E30u;
            goto label_191e30;
        }
    }
    ctx->pc = 0x191DD4u;
    // 0x191dd4: 0x12400016
    ctx->pc = 0x191DD4u;
    {
        const bool branch_taken_0x191dd4 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x191DD8u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 29), 16));
        if (branch_taken_0x191dd4) {
            ctx->pc = 0x191E30u;
            goto label_191e30;
        }
    }
    ctx->pc = 0x191DDCu;
    // 0x191ddc: 0xc064f3a
    ctx->pc = 0x191DDCu;
    SET_GPR_U32(ctx, 31, 0x191DE4u);
    ctx->pc = 0x191DE0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x193CE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_LockCs_0x193ce8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191DE4u; }
        else if (ctx->pc != 0x191DE4u) { ctx->pc = 0x191DE4u; }
    }
    if (ctx->pc != 0x191DE4u) { return; }
    ctx->pc = 0x191DE4u;
    // 0x191de4: 0x240202d
    ctx->pc = 0x191de4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191de8: 0x2a0282d
    ctx->pc = 0x191de8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191dec: 0xc064818
    ctx->pc = 0x191DECu;
    SET_GPR_U32(ctx, 31, 0x191DF4u);
    ctx->pc = 0x191DF0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x192060u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfbuf_PeekChunk_0x192060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191DF4u; }
        else if (ctx->pc != 0x191DF4u) { ctx->pc = 0x191DF4u; }
    }
    if (ctx->pc != 0x191DF4u) { return; }
    ctx->pc = 0x191DF4u;
    // 0x191df4: 0x8fa40004
    ctx->pc = 0x191df4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x191df8: 0x40282d
    ctx->pc = 0x191df8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191dfc: 0x8fa30000
    ctx->pc = 0x191dfcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x191e00: 0xae040004
    ctx->pc = 0x191e00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
    // 0x191e04: 0x85102a
    ctx->pc = 0x191e04u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 5)));
    // 0x191e08: 0x10400007
    ctx->pc = 0x191E08u;
    {
        const bool branch_taken_0x191e08 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x191E0Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        if (branch_taken_0x191e08) {
            ctx->pc = 0x191E28u;
            goto label_191e28;
        }
    }
    ctx->pc = 0x191E10u;
    // 0x191e10: 0x8e220010
    ctx->pc = 0x191e10u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x191e14: 0x14400004
    ctx->pc = 0x191E14u;
    {
        const bool branch_taken_0x191e14 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x191E18u;
        SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        if (branch_taken_0x191e14) {
            ctx->pc = 0x191E28u;
            goto label_191e28;
        }
    }
    ctx->pc = 0x191E1Cu;
    // 0x191e1c: 0x8e830008
    ctx->pc = 0x191e1cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x191e20: 0xae02000c
    ctx->pc = 0x191e20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x191e24: 0xae030008
    ctx->pc = 0x191e24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_191e28:
    // 0x191e28: 0xc064f44
    ctx->pc = 0x191E28u;
    SET_GPR_U32(ctx, 31, 0x191E30u);
    ctx->pc = 0x191E2Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x193D10u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_UnlockCs_0x193d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191E30u; }
        else if (ctx->pc != 0x191E30u) { ctx->pc = 0x191E30u; }
    }
    if (ctx->pc != 0x191E30u) { return; }
    ctx->pc = 0x191E30u;
label_191e30:
    // 0x191e30: 0x102d
    ctx->pc = 0x191e30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191e34: 0xdfbf0080
    ctx->pc = 0x191e34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x191e38: 0xdfb50070
    ctx->pc = 0x191e38u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x191e3c: 0xdfb40060
    ctx->pc = 0x191e3cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x191e40: 0xdfb30050
    ctx->pc = 0x191e40u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x191e44: 0xdfb20040
    ctx->pc = 0x191e44u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x191e48: 0xdfb10030
    ctx->pc = 0x191e48u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x191e4c: 0xdfb00020
    ctx->pc = 0x191e4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x191e50: 0x3e00008
    ctx->pc = 0x191E50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x191E54u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x191E28u: goto label_191e28;
            case 0x191E30u: goto label_191e30;
            default: break;
        }
        return;
    }
    ctx->pc = 0x191E58u;
}
