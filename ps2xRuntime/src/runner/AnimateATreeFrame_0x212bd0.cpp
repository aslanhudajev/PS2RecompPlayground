#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AnimateATreeFrame
// Address: 0x212bd0 - 0x212c80
void AnimateATreeFrame_0x212bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x212bd0u;

    // 0x212bd0: 0x27bdff80
    ctx->pc = 0x212bd0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x212bd4: 0xffbf0070
    ctx->pc = 0x212bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x212bd8: 0xffb60060
    ctx->pc = 0x212bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x212bdc: 0xffb50050
    ctx->pc = 0x212bdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x212be0: 0xffb40040
    ctx->pc = 0x212be0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x212be4: 0xffb30030
    ctx->pc = 0x212be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x212be8: 0xffb20020
    ctx->pc = 0x212be8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x212bec: 0xffb10010
    ctx->pc = 0x212becu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x212bf0: 0xffb00000
    ctx->pc = 0x212bf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x212bf4: 0x80802d
    ctx->pc = 0x212bf4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212bf8: 0xa0902d
    ctx->pc = 0x212bf8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212bfc: 0xc0882d
    ctx->pc = 0x212bfcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212c00: 0xe0a82d
    ctx->pc = 0x212c00u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212c04: 0x26140004
    ctx->pc = 0x212c04u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 16), 4));
    // 0x212c08: 0x8e130000
    ctx->pc = 0x212c08u;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x212c0c: 0x280202d
    ctx->pc = 0x212c0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212c10: 0x44806000
    ctx->pc = 0x212c10u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
    // 0x212c14: 0xc083fbc
    ctx->pc = 0x212C14u;
    SET_GPR_U32(ctx, 31, 0x212C1Cu);
    ctx->pc = 0x212C18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x20FEF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AnimateTreeFrameInterp_0x20fef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212C1Cu; }
    }
    if (ctx->pc != 0x212C1Cu) { return; }
    ctx->pc = 0x212C1Cu;
    // 0x212c1c: 0x1aa0000d
    ctx->pc = 0x212C1Cu;
    {
        const bool branch_taken_0x212c1c = (GPR_S32(ctx, 21) <= 0);
        ctx->pc = 0x212C20u;
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x212c1c) {
            ctx->pc = 0x212C54u;
            goto label_212c54;
        }
    }
    ctx->pc = 0x212C24u;
    // 0x212c24: 0x8e020004
    ctx->pc = 0x212c24u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x212c28: 0x10400006
    ctx->pc = 0x212C28u;
    {
        const bool branch_taken_0x212c28 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x212C2Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 48));
        if (branch_taken_0x212c28) {
            ctx->pc = 0x212C44u;
            goto label_212c44;
        }
    }
    ctx->pc = 0x212C30u;
    // 0x212c30: 0x8e640000
    ctx->pc = 0x212c30u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x212c34: 0x2451818
    ctx->pc = 0x212c34u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x212c38: 0x622821
    ctx->pc = 0x212c38u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x212c3c: 0xc084c90
    ctx->pc = 0x212C3Cu;
    SET_GPR_U32(ctx, 31, 0x212C44u);
    ctx->pc = 0x212C40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x213240u;
    {
        const uint32_t __entryPc = ctx->pc;
        DoSeqTexMods_0x213240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212C44u; }
    }
    if (ctx->pc != 0x212C44u) { return; }
    ctx->pc = 0x212C44u;
label_212c44:
    // 0x212c44: 0x260202d
    ctx->pc = 0x212c44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212c48: 0x280282d
    ctx->pc = 0x212c48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212c4c: 0xc0849d6
    ctx->pc = 0x212C4Cu;
    SET_GPR_U32(ctx, 31, 0x212C54u);
    ctx->pc = 0x212C50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x212758u;
    {
        const uint32_t __entryPc = ctx->pc;
        AnimateNode_0x212758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212C54u; }
    }
    if (ctx->pc != 0x212C54u) { return; }
    ctx->pc = 0x212C54u;
label_212c54:
    // 0x212c54: 0x2c0102d
    ctx->pc = 0x212c54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212c58: 0xdfbf0070
    ctx->pc = 0x212c58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x212c5c: 0xdfb60060
    ctx->pc = 0x212c5cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x212c60: 0xdfb50050
    ctx->pc = 0x212c60u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x212c64: 0xdfb40040
    ctx->pc = 0x212c64u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x212c68: 0xdfb30030
    ctx->pc = 0x212c68u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x212c6c: 0xdfb20020
    ctx->pc = 0x212c6cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x212c70: 0xdfb10010
    ctx->pc = 0x212c70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x212c74: 0xdfb00000
    ctx->pc = 0x212c74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x212c78: 0x3e00008
    ctx->pc = 0x212C78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x212C7Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x212C44u: goto label_212c44;
            case 0x212C54u: goto label_212c54;
            default: break;
        }
        return;
    }
    ctx->pc = 0x212C80u;
}
