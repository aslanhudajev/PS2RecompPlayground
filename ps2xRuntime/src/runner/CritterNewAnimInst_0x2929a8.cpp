#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CritterNewAnimInst
// Address: 0x2929a8 - 0x292a54
void CritterNewAnimInst_0x2929a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2929a8u;

    // 0x2929a8: 0x27bdfff0
    ctx->pc = 0x2929a8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2929ac: 0xffbf0000
    ctx->pc = 0x2929acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2929b0: 0x3c020036
    ctx->pc = 0x2929b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2929b4: 0x8c42d5f4
    ctx->pc = 0x2929b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294956532)));
    // 0x2929b8: 0x18400012
    ctx->pc = 0x2929B8u;
    {
        const bool branch_taken_0x2929b8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2929BCu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2929b8) {
            ctx->pc = 0x292A04u;
            goto label_292a04;
        }
    }
    ctx->pc = 0x2929C0u;
    // 0x2929c0: 0x3c020036
    ctx->pc = 0x2929c0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2929c4: 0x8c42d5e8
    ctx->pc = 0x2929c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294956520)));
    // 0x2929c8: 0x1040000e
    ctx->pc = 0x2929C8u;
    {
        const bool branch_taken_0x2929c8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2929CCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        if (branch_taken_0x2929c8) {
            ctx->pc = 0x292A04u;
            goto label_292a04;
        }
    }
    ctx->pc = 0x2929D0u;
    // 0x2929d0: 0x8c43d5f4
    ctx->pc = 0x2929d0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294956532)));
    // 0x2929d4: 0x24040054
    ctx->pc = 0x2929d4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 84));
    // 0x2929d8: 0x3c020036
    ctx->pc = 0x2929d8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2929dc: 0x2447d5e8
    ctx->pc = 0x2929dcu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 4294956520));
    // 0x2929e0: 0x24a50001
    ctx->pc = 0x2929e0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x2929e4: 0x0
    ctx->pc = 0x2929e4u;
    // NOP
label_2929e8:
    // 0x2929e8: 0xa3102a
    ctx->pc = 0x2929e8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 3)));
    // 0x2929ec: 0x10400005
    ctx->pc = 0x2929ECu;
    {
        const bool branch_taken_0x2929ec = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2929F0u;
        { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x2929ec) {
            ctx->pc = 0x292A04u;
            goto label_292a04;
        }
    }
    ctx->pc = 0x2929F4u;
    // 0x2929f4: 0xc71021
    ctx->pc = 0x2929f4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x2929f8: 0x8c420000
    ctx->pc = 0x2929f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2929fc: 0x5440fffa
    ctx->pc = 0x2929FCu;
    {
        const bool branch_taken_0x2929fc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2929fc) {
            ctx->pc = 0x292A00u;
            SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
            ctx->pc = 0x2929E8u;
            goto label_2929e8;
        }
    }
    ctx->pc = 0x292A04u;
label_292a04:
    // 0x292a04: 0x18a00005
    ctx->pc = 0x292A04u;
    {
        const bool branch_taken_0x292a04 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x292A08u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        if (branch_taken_0x292a04) {
            ctx->pc = 0x292A1Cu;
            goto label_292a1c;
        }
    }
    ctx->pc = 0x292A0Cu;
    // 0x292a0c: 0xc0b492e
    ctx->pc = 0x292A0Cu;
    SET_GPR_U32(ctx, 31, 0x292A14u);
    ctx->pc = 0x292A10u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294959488));
    ctx->pc = 0x2D24B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        Errorf_0x2d24b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292A14u; }
    }
    if (ctx->pc != 0x292A14u) { return; }
    ctx->pc = 0x292A14u;
    // 0x292a14: 0x1000000c
    ctx->pc = 0x292A14u;
    {
        const bool branch_taken_0x292a14 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x292A18u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x292a14) {
            ctx->pc = 0x292A48u;
            goto label_292a48;
        }
    }
    ctx->pc = 0x292A1Cu;
label_292a1c:
    // 0x292a1c: 0x3c030036
    ctx->pc = 0x292a1cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)54 << 16));
    // 0x292a20: 0x8c62d5f4
    ctx->pc = 0x292a20u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294956532)));
    // 0x292a24: 0x54a20004
    ctx->pc = 0x292A24u;
    {
        const bool branch_taken_0x292a24 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 2));
        if (branch_taken_0x292a24) {
            ctx->pc = 0x292A28u;
            SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 84));
            ctx->pc = 0x292A38u;
            goto label_292a38;
        }
    }
    ctx->pc = 0x292A2Cu;
    // 0x292a2c: 0x24a20001
    ctx->pc = 0x292a2cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 1));
    // 0x292a30: 0xac62d5f4
    ctx->pc = 0x292a30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294956532), GPR_U32(ctx, 2));
    // 0x292a34: 0x24030054
    ctx->pc = 0x292a34u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 84));
label_292a38:
    // 0x292a38: 0xa31818
    ctx->pc = 0x292a38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x292a3c: 0x3c020036
    ctx->pc = 0x292a3cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x292a40: 0x2442d5a0
    ctx->pc = 0x292a40u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294956448));
    // 0x292a44: 0x621021
    ctx->pc = 0x292a44u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_292a48:
    // 0x292a48: 0xdfbf0000
    ctx->pc = 0x292a48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x292a4c: 0x3e00008
    ctx->pc = 0x292A4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x292A50u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2929E8u: goto label_2929e8;
            case 0x292A04u: goto label_292a04;
            case 0x292A1Cu: goto label_292a1c;
            case 0x292A38u: goto label_292a38;
            case 0x292A48u: goto label_292a48;
            default: break;
        }
        return;
    }
    ctx->pc = 0x292A54u;
}
