#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: EnableIntc
// Address: 0x10eab0 - 0x10eb18
void EnableIntc_0x10eab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10eab0u;

    // 0x10eab0: 0x27bdffd0
    ctx->pc = 0x10eab0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10eab4: 0xffb10010
    ctx->pc = 0x10eab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x10eab8: 0xffbf0020
    ctx->pc = 0x10eab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x10eabc: 0x80882d
    ctx->pc = 0x10eabcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10eac0: 0xffb00000
    ctx->pc = 0x10eac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10eac4: 0x40106000
    ctx->pc = 0x10eac4u;
    SET_GPR_U32(ctx, 16, ctx->cop0_status);
    // 0x10eac8: 0x3c020001
    ctx->pc = 0x10eac8u;
    SET_GPR_S32(ctx, 2, ((uint32_t)1 << 16));
    // 0x10eacc: 0x2028024
    ctx->pc = 0x10eaccu;
    SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x10ead0: 0x12000003
    ctx->pc = 0x10EAD0u;
    {
        const bool branch_taken_0x10ead0 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x10ead0) {
            ctx->pc = 0x10EAE0u;
            goto label_10eae0;
        }
    }
    ctx->pc = 0x10EAD8u;
    // 0x10ead8: 0xc0453ee
    ctx->pc = 0x10EAD8u;
    SET_GPR_U32(ctx, 31, 0x10EAE0u);
    ctx->pc = 0x114FB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        DIntr_0x114fb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10EAE0u; }
    }
    if (ctx->pc != 0x10EAE0u) { return; }
    ctx->pc = 0x10EAE0u;
label_10eae0:
    // 0x10eae0: 0xc0437f8
    ctx->pc = 0x10EAE0u;
    SET_GPR_U32(ctx, 31, 0x10EAE8u);
    ctx->pc = 0x10EAE4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10DFE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__EnableIntc_0x10dfe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10EAE8u; }
    }
    if (ctx->pc != 0x10EAE8u) { return; }
    ctx->pc = 0x10EAE8u;
    // 0x10eae8: 0x40882d
    ctx->pc = 0x10eae8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10eaec: 0xf
    ctx->pc = 0x10eaecu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x10eaf0: 0x12000004
    ctx->pc = 0x10EAF0u;
    {
        const bool branch_taken_0x10eaf0 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x10EAF4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x10eaf0) {
            ctx->pc = 0x10EB04u;
            goto label_10eb04;
        }
    }
    ctx->pc = 0x10EAF8u;
    // 0x10eaf8: 0xc045400
    ctx->pc = 0x10EAF8u;
    SET_GPR_U32(ctx, 31, 0x10EB00u);
    ctx->pc = 0x115000u;
    {
        const uint32_t __entryPc = ctx->pc;
        EIntr_0x115000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10EB00u; }
    }
    if (ctx->pc != 0x10EB00u) { return; }
    ctx->pc = 0x10EB00u;
    // 0x10eb00: 0x220102d
    ctx->pc = 0x10eb00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10eb04:
    // 0x10eb04: 0xdfbf0020
    ctx->pc = 0x10eb04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10eb08: 0xdfb10010
    ctx->pc = 0x10eb08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10eb0c: 0xdfb00000
    ctx->pc = 0x10eb0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10eb10: 0x3e00008
    ctx->pc = 0x10EB10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10EB14u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10EAE0u: goto label_10eae0;
            case 0x10EB04u: goto label_10eb04;
            default: break;
        }
        return;
    }
    ctx->pc = 0x10EB18u;
}
