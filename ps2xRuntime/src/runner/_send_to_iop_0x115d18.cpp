#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _send_to_iop
// Address: 0x115d18 - 0x115e48
void _send_to_iop_0x115d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x115d18u;

    // 0x115d18: 0x27bdfe90
    ctx->pc = 0x115d18u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294966928));
    // 0x115d1c: 0x2403001c
    ctx->pc = 0x115d1cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 28));
    // 0x115d20: 0xffb40140
    ctx->pc = 0x115d20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 20));
    // 0x115d24: 0x24020070
    ctx->pc = 0x115d24u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 112));
    // 0x115d28: 0xffb30130
    ctx->pc = 0x115d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 19));
    // 0x115d2c: 0x80a02d
    ctx->pc = 0x115d2cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115d30: 0xa0982d
    ctx->pc = 0x115d30u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115d34: 0x72821018
    ctx->pc = 0x115d34u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo1 = (uint32_t)result; ctx->hi1 = (uint32_t)(result >> 32); }
    // 0x115d38: 0x2631818
    ctx->pc = 0x115d38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x115d3c: 0xffb50150
    ctx->pc = 0x115d3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 21));
    // 0x115d40: 0xffb20120
    ctx->pc = 0x115d40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 18));
    // 0x115d44: 0x3c150018
    ctx->pc = 0x115d44u;
    SET_GPR_U32(ctx, 21, ((uint32_t)24 << 16));
    // 0x115d48: 0xffb00100
    ctx->pc = 0x115d48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
    // 0x115d4c: 0x26b2aa10
    ctx->pc = 0x115d4cu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 21), 4294945296));
    // 0x115d50: 0xffbf0160
    ctx->pc = 0x115d50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 31));
    // 0x115d54: 0xffb10110
    ctx->pc = 0x115d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 17));
    // 0x115d58: 0x628021
    ctx->pc = 0x115d58u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x115d5c: 0x2502821
    ctx->pc = 0x115d5cu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x115d60: 0xa0102d
    ctx->pc = 0x115d60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115d64: 0x8ca4000c
    ctx->pc = 0x115d64u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x115d68: 0xc043990
    ctx->pc = 0x115D68u;
    SET_GPR_U32(ctx, 31, 0x115D70u);
    ctx->pc = 0x115D6Cu;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->pc = 0x10E640u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSifDmaStat_0x10e640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x115D70u; }
    }
    if (ctx->pc != 0x115D70u) { return; }
    ctx->pc = 0x115D70u;
    // 0x115d70: 0x4400008
    ctx->pc = 0x115D70u;
    {
        const bool branch_taken_0x115d70 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x115D74u;
        SET_GPR_U32(ctx, 2, ((uint32_t)23 << 16));
        if (branch_taken_0x115d70) {
            ctx->pc = 0x115D94u;
            goto label_115d94;
        }
    }
    ctx->pc = 0x115D78u;
    // 0x115d78: 0x8c43fbf4
    ctx->pc = 0x115d78u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294966260)));
    // 0x115d7c: 0x10600029
    ctx->pc = 0x115D7Cu;
    {
        const bool branch_taken_0x115d7c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x115D80u;
        SET_GPR_U32(ctx, 4, ((uint32_t)23 << 16));
        if (branch_taken_0x115d7c) {
            ctx->pc = 0x115E24u;
            goto label_115e24;
        }
    }
    ctx->pc = 0x115D84u;
    // 0x115d84: 0xc04ace4
    ctx->pc = 0x115D84u;
    SET_GPR_U32(ctx, 31, 0x115D8Cu);
    ctx->pc = 0x115D88u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 16456));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x115D8Cu; }
    }
    if (ctx->pc != 0x115D8Cu) { return; }
    ctx->pc = 0x115D8Cu;
    // 0x115d8c: 0x10000026
    ctx->pc = 0x115D8Cu;
    {
        const bool branch_taken_0x115d8c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x115D90u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 352)));
        if (branch_taken_0x115d8c) {
            ctx->pc = 0x115E28u;
            goto label_115e28;
        }
    }
    ctx->pc = 0x115D94u;
label_115d94:
    // 0x115d94: 0x8e230000
    ctx->pc = 0x115d94u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x115d98: 0x2501021
    ctx->pc = 0x115d98u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x115d9c: 0x8c500008
    ctx->pc = 0x115d9cu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x115da0: 0x220202d
    ctx->pc = 0x115da0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115da4: 0x24630001
    ctx->pc = 0x115da4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x115da8: 0x26250020
    ctx->pc = 0x115da8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 32));
    // 0x115dac: 0x30620001
    ctx->pc = 0x115dacu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1));
    // 0x115db0: 0xae230000
    ctx->pc = 0x115db0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x115db4: 0x21140
    ctx->pc = 0x115db4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 5));
    // 0x115db8: 0xc04c43c
    ctx->pc = 0x115DB8u;
    SET_GPR_U32(ctx, 31, 0x115DC0u);
    ctx->pc = 0x115DBCu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->pc = 0x1310F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SyncDCache_0x1310f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x115DC0u; }
    }
    if (ctx->pc != 0x115DC0u) { return; }
    ctx->pc = 0x115DC0u;
    // 0x115dc0: 0x24020020
    ctx->pc = 0x115dc0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 32));
    // 0x115dc4: 0xafb00004
    ctx->pc = 0x115dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 16));
    // 0x115dc8: 0xafb10000
    ctx->pc = 0x115dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
    // 0x115dcc: 0x3a0202d
    ctx->pc = 0x115dccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115dd0: 0xafa20008
    ctx->pc = 0x115dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x115dd4: 0x24050001
    ctx->pc = 0x115dd4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x115dd8: 0xc043998
    ctx->pc = 0x115DD8u;
    SET_GPR_U32(ctx, 31, 0x115DE0u);
    ctx->pc = 0x115DDCu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    ctx->pc = 0x10E660u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSifSetDma_0x10e660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x115DE0u; }
    }
    if (ctx->pc != 0x115DE0u) { return; }
    ctx->pc = 0x115DE0u;
    // 0x115de0: 0x40802d
    ctx->pc = 0x115de0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115de4: 0x16000008
    ctx->pc = 0x115DE4u;
    {
        const bool branch_taken_0x115de4 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x115DE8u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 28));
        if (branch_taken_0x115de4) {
            ctx->pc = 0x115E08u;
            goto label_115e08;
        }
    }
    ctx->pc = 0x115DECu;
    // 0x115dec: 0x3c020017
    ctx->pc = 0x115decu;
    SET_GPR_U32(ctx, 2, ((uint32_t)23 << 16));
    // 0x115df0: 0x8c43fbf4
    ctx->pc = 0x115df0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294966260)));
    // 0x115df4: 0x10600003
    ctx->pc = 0x115DF4u;
    {
        const bool branch_taken_0x115df4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x115DF8u;
        SET_GPR_U32(ctx, 4, ((uint32_t)23 << 16));
        if (branch_taken_0x115df4) {
            ctx->pc = 0x115E04u;
            goto label_115e04;
        }
    }
    ctx->pc = 0x115DFCu;
    // 0x115dfc: 0xc04ace4
    ctx->pc = 0x115DFCu;
    SET_GPR_U32(ctx, 31, 0x115E04u);
    ctx->pc = 0x115E00u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 16456));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x115E04u; }
    }
    if (ctx->pc != 0x115E04u) { return; }
    ctx->pc = 0x115E04u;
label_115e04:
    // 0x115e04: 0x2403001c
    ctx->pc = 0x115e04u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 28));
label_115e08:
    // 0x115e08: 0x24040070
    ctx->pc = 0x115e08u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 112));
    // 0x115e0c: 0x2631818
    ctx->pc = 0x115e0cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x115e10: 0x72842018
    ctx->pc = 0x115e10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 4); ctx->lo1 = (uint32_t)result; ctx->hi1 = (uint32_t)(result >> 32); }
    // 0x115e14: 0x26a2aa10
    ctx->pc = 0x115e14u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 21), 4294945296));
    // 0x115e18: 0x641821
    ctx->pc = 0x115e18u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x115e1c: 0x431021
    ctx->pc = 0x115e1cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x115e20: 0xac50000c
    ctx->pc = 0x115e20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 16));
label_115e24:
    // 0x115e24: 0xdfbf0160
    ctx->pc = 0x115e24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 352)));
label_115e28:
    // 0x115e28: 0xdfb50150
    ctx->pc = 0x115e28u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x115e2c: 0xdfb40140
    ctx->pc = 0x115e2cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x115e30: 0xdfb30130
    ctx->pc = 0x115e30u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x115e34: 0xdfb20120
    ctx->pc = 0x115e34u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x115e38: 0xdfb10110
    ctx->pc = 0x115e38u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x115e3c: 0xdfb00100
    ctx->pc = 0x115e3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x115e40: 0x3e00008
    ctx->pc = 0x115E40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x115E44u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 368));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x115D94u: goto label_115d94;
            case 0x115E04u: goto label_115e04;
            case 0x115E08u: goto label_115e08;
            case 0x115E24u: goto label_115e24;
            case 0x115E28u: goto label_115e28;
            default: break;
        }
        return;
    }
    ctx->pc = 0x115E48u;
}
