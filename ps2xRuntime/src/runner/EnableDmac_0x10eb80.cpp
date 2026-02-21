#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: EnableDmac
// Address: 0x10eb80 - 0x10ebe8
void EnableDmac_0x10eb80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10eb80u;

    // 0x10eb80: 0x27bdffd0
    ctx->pc = 0x10eb80u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10eb84: 0xffb10010
    ctx->pc = 0x10eb84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x10eb88: 0xffbf0020
    ctx->pc = 0x10eb88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x10eb8c: 0x80882d
    ctx->pc = 0x10eb8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10eb90: 0xffb00000
    ctx->pc = 0x10eb90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10eb94: 0x40106000
    ctx->pc = 0x10eb94u;
    SET_GPR_U32(ctx, 16, ctx->cop0_status);
    // 0x10eb98: 0x3c020001
    ctx->pc = 0x10eb98u;
    SET_GPR_U32(ctx, 2, ((uint32_t)1 << 16));
    // 0x10eb9c: 0x2028024
    ctx->pc = 0x10eb9cu;
    SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x10eba0: 0x12000003
    ctx->pc = 0x10EBA0u;
    {
        const bool branch_taken_0x10eba0 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x10eba0) {
            ctx->pc = 0x10EBB0u;
            goto label_10ebb0;
        }
    }
    ctx->pc = 0x10EBA8u;
    // 0x10eba8: 0xc0453ee
    ctx->pc = 0x10EBA8u;
    SET_GPR_U32(ctx, 31, 0x10EBB0u);
    ctx->pc = 0x114FB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        DIntr_0x114fb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10EBB0u; }
    }
    if (ctx->pc != 0x10EBB0u) { return; }
    ctx->pc = 0x10EBB0u;
label_10ebb0:
    // 0x10ebb0: 0xc043800
    ctx->pc = 0x10EBB0u;
    SET_GPR_U32(ctx, 31, 0x10EBB8u);
    ctx->pc = 0x10EBB4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10E000u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__EnableDmac_0x10e000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10EBB8u; }
    }
    if (ctx->pc != 0x10EBB8u) { return; }
    ctx->pc = 0x10EBB8u;
    // 0x10ebb8: 0x40882d
    ctx->pc = 0x10ebb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ebbc: 0xf
    ctx->pc = 0x10ebbcu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x10ebc0: 0x12000004
    ctx->pc = 0x10EBC0u;
    {
        const bool branch_taken_0x10ebc0 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x10EBC4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x10ebc0) {
            ctx->pc = 0x10EBD4u;
            goto label_10ebd4;
        }
    }
    ctx->pc = 0x10EBC8u;
    // 0x10ebc8: 0xc045400
    ctx->pc = 0x10EBC8u;
    SET_GPR_U32(ctx, 31, 0x10EBD0u);
    ctx->pc = 0x115000u;
    {
        const uint32_t __entryPc = ctx->pc;
        EIntr_0x115000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10EBD0u; }
    }
    if (ctx->pc != 0x10EBD0u) { return; }
    ctx->pc = 0x10EBD0u;
    // 0x10ebd0: 0x220102d
    ctx->pc = 0x10ebd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10ebd4:
    // 0x10ebd4: 0xdfbf0020
    ctx->pc = 0x10ebd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10ebd8: 0xdfb10010
    ctx->pc = 0x10ebd8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10ebdc: 0xdfb00000
    ctx->pc = 0x10ebdcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10ebe0: 0x3e00008
    ctx->pc = 0x10EBE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10EBE4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10EBB0u: goto label_10ebb0;
            case 0x10EBD4u: goto label_10ebd4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x10EBE8u;
}
