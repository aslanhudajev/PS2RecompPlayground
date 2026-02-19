#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: efuncRange
// Address: 0x2b67b8 - 0x2b687c
void efuncRange_0x2b67b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2b67b8u;

    // 0x2b67b8: 0x27bdff90
    ctx->pc = 0x2b67b8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2b67bc: 0xffbf0060
    ctx->pc = 0x2b67bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2b67c0: 0xffb50050
    ctx->pc = 0x2b67c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2b67c4: 0xffb40040
    ctx->pc = 0x2b67c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2b67c8: 0xffb30030
    ctx->pc = 0x2b67c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2b67cc: 0xffb20020
    ctx->pc = 0x2b67ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2b67d0: 0xffb10010
    ctx->pc = 0x2b67d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2b67d4: 0xffb00000
    ctx->pc = 0x2b67d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b67d8: 0x80882d
    ctx->pc = 0x2b67d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b67dc: 0x8e330010
    ctx->pc = 0x2b67dcu;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2b67e0: 0x8e340000
    ctx->pc = 0x2b67e0u;
    SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b67e4: 0x24020001
    ctx->pc = 0x2b67e4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b67e8: 0xae820000
    ctx->pc = 0x2b67e8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x2b67ec: 0xc0ad1a2
    ctx->pc = 0x2B67ECu;
    SET_GPR_U32(ctx, 31, 0x2B67F4u);
    ctx->pc = 0x2B67F0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2B4688u;
    {
        const uint32_t __entryPc = ctx->pc;
        evalInt_0x2b4688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B67F4u; }
    }
    if (ctx->pc != 0x2B67F4u) { return; }
    ctx->pc = 0x2B67F4u;
    // 0x2b67f4: 0x40902d
    ctx->pc = 0x2b67f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b67f8: 0xc0ad1a2
    ctx->pc = 0x2B67F8u;
    SET_GPR_U32(ctx, 31, 0x2B6800u);
    ctx->pc = 0x2B67FCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 19), 80));
    ctx->pc = 0x2B4688u;
    {
        const uint32_t __entryPc = ctx->pc;
        evalInt_0x2b4688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6800u; }
    }
    if (ctx->pc != 0x2B6800u) { return; }
    ctx->pc = 0x2B6800u;
    // 0x2b6800: 0x242102b
    ctx->pc = 0x2b6800u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2b6804: 0x54400014
    ctx->pc = 0x2B6804u;
    {
        const bool branch_taken_0x2b6804 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2b6804) {
            ctx->pc = 0x2B6808u;
            WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 0));
            ctx->pc = 0x2B6858u;
            goto label_2b6858;
        }
    }
    ctx->pc = 0x2B680Cu;
    // 0x2b680c: 0x24100002
    ctx->pc = 0x2b680cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b6810: 0x24150050
    ctx->pc = 0x2b6810u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 80));
    // 0x2b6814: 0x0
    ctx->pc = 0x2b6814u;
    // NOP
label_2b6818:
    // 0x2b6818: 0x8e22000c
    ctx->pc = 0x2b6818u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2b681c: 0x202102a
    ctx->pc = 0x2b681cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 2)));
    // 0x2b6820: 0x1040000c
    ctx->pc = 0x2B6820u;
    {
        const bool branch_taken_0x2b6820 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B6824u;
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x2b6820) {
            ctx->pc = 0x2B6854u;
            goto label_2b6854;
        }
    }
    ctx->pc = 0x2B6828u;
    // 0x2b6828: 0xc0ad1a2
    ctx->pc = 0x2B6828u;
    SET_GPR_U32(ctx, 31, 0x2B6830u);
    ctx->pc = 0x2B682Cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    ctx->pc = 0x2B4688u;
    {
        const uint32_t __entryPc = ctx->pc;
        evalInt_0x2b4688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6830u; }
    }
    if (ctx->pc != 0x2B6830u) { return; }
    ctx->pc = 0x2B6830u;
    // 0x2b6830: 0x242102b
    ctx->pc = 0x2b6830u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2b6834: 0x5040fff8
    ctx->pc = 0x2B6834u;
    {
        const bool branch_taken_0x2b6834 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2b6834) {
            ctx->pc = 0x2B6838u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x2B6818u;
            goto label_2b6818;
        }
    }
    ctx->pc = 0x2B683Cu;
    // 0x2b683c: 0x8e22000c
    ctx->pc = 0x2b683cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2b6840: 0x202102a
    ctx->pc = 0x2b6840u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 2)));
    // 0x2b6844: 0x10400003
    ctx->pc = 0x2B6844u;
    {
        const bool branch_taken_0x2b6844 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B6848u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 4294967295));
        if (branch_taken_0x2b6844) {
            ctx->pc = 0x2B6854u;
            goto label_2b6854;
        }
    }
    ctx->pc = 0x2B684Cu;
    // 0x2b684c: 0x10000002
    ctx->pc = 0x2B684Cu;
    {
        const bool branch_taken_0x2b684c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B6850u;
        WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 2));
        if (branch_taken_0x2b684c) {
            ctx->pc = 0x2B6858u;
            goto label_2b6858;
        }
    }
    ctx->pc = 0x2B6854u;
label_2b6854:
    // 0x2b6854: 0xae800010
    ctx->pc = 0x2b6854u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 0));
label_2b6858:
    // 0x2b6858: 0xdfbf0060
    ctx->pc = 0x2b6858u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2b685c: 0xdfb50050
    ctx->pc = 0x2b685cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b6860: 0xdfb40040
    ctx->pc = 0x2b6860u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b6864: 0xdfb30030
    ctx->pc = 0x2b6864u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b6868: 0xdfb20020
    ctx->pc = 0x2b6868u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b686c: 0xdfb10010
    ctx->pc = 0x2b686cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b6870: 0xdfb00000
    ctx->pc = 0x2b6870u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b6874: 0x3e00008
    ctx->pc = 0x2B6874u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B6878u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2B6818u: goto label_2b6818;
            case 0x2B6854u: goto label_2b6854;
            case 0x2B6858u: goto label_2b6858;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2B687Cu;
}
