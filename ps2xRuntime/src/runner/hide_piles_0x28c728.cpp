#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: hide_piles
// Address: 0x28c728 - 0x28c7c4
void hide_piles_0x28c728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x28c728u;

    // 0x28c728: 0x27bdffe0
    ctx->pc = 0x28c728u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28c72c: 0xffbf0010
    ctx->pc = 0x28c72cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x28c730: 0xffb00000
    ctx->pc = 0x28c730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28c734: 0x80802d
    ctx->pc = 0x28c734u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c738: 0x3c030035
    ctx->pc = 0x28c738u;
    SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
    // 0x28c73c: 0x2463b4c8
    ctx->pc = 0x28c73cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294948040));
    // 0x28c740: 0x24020018
    ctx->pc = 0x28c740u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 24));
    // 0x28c744: 0x2021018
    ctx->pc = 0x28c744u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x28c748: 0x431021
    ctx->pc = 0x28c748u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x28c74c: 0x8c440000
    ctx->pc = 0x28c74cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28c750: 0x10800004
    ctx->pc = 0x28C750u;
    {
        const bool branch_taken_0x28c750 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x28C754u;
        SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
        if (branch_taken_0x28c750) {
            ctx->pc = 0x28C764u;
            goto label_28c764;
        }
    }
    ctx->pc = 0x28C758u;
    // 0x28c758: 0xc0b0ce8
    ctx->pc = 0x28C758u;
    SET_GPR_U32(ctx, 31, 0x28C760u);
    ctx->pc = 0x28C75Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2C33A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetHide_0x2c33a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C760u; }
    }
    if (ctx->pc != 0x28C760u) { return; }
    ctx->pc = 0x28C760u;
    // 0x28c760: 0x3c030035
    ctx->pc = 0x28c760u;
    SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
label_28c764:
    // 0x28c764: 0x2463b4c8
    ctx->pc = 0x28c764u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294948040));
    // 0x28c768: 0x24020018
    ctx->pc = 0x28c768u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 24));
    // 0x28c76c: 0x2021018
    ctx->pc = 0x28c76cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x28c770: 0x621821
    ctx->pc = 0x28c770u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28c774: 0x8c640004
    ctx->pc = 0x28c774u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x28c778: 0x10800004
    ctx->pc = 0x28C778u;
    {
        const bool branch_taken_0x28c778 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x28C77Cu;
        SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
        if (branch_taken_0x28c778) {
            ctx->pc = 0x28C78Cu;
            goto label_28c78c;
        }
    }
    ctx->pc = 0x28C780u;
    // 0x28c780: 0xc0b0ce8
    ctx->pc = 0x28C780u;
    SET_GPR_U32(ctx, 31, 0x28C788u);
    ctx->pc = 0x28C784u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2C33A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetHide_0x2c33a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C788u; }
    }
    if (ctx->pc != 0x28C788u) { return; }
    ctx->pc = 0x28C788u;
    // 0x28c788: 0x3c030035
    ctx->pc = 0x28c788u;
    SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
label_28c78c:
    // 0x28c78c: 0x2463b4c8
    ctx->pc = 0x28c78cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294948040));
    // 0x28c790: 0x24020018
    ctx->pc = 0x28c790u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 24));
    // 0x28c794: 0x2021018
    ctx->pc = 0x28c794u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x28c798: 0x621821
    ctx->pc = 0x28c798u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28c79c: 0x8c640008
    ctx->pc = 0x28c79cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x28c7a0: 0x10800005
    ctx->pc = 0x28C7A0u;
    {
        const bool branch_taken_0x28c7a0 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x28C7A4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x28c7a0) {
            ctx->pc = 0x28C7B8u;
            goto label_28c7b8;
        }
    }
    ctx->pc = 0x28C7A8u;
    // 0x28c7a8: 0x24050001
    ctx->pc = 0x28c7a8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x28c7ac: 0xdfb00000
    ctx->pc = 0x28c7acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28c7b0: 0x80b0ce8
    ctx->pc = 0x28C7B0u;
    ctx->pc = 0x28C7B4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x2C33A0u;
    MBBlitSetHide_0x2c33a0(rdram, ctx, runtime); return;
    ctx->pc = 0x28C7B8u;
label_28c7b8:
    // 0x28c7b8: 0xdfb00000
    ctx->pc = 0x28c7b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28c7bc: 0x3e00008
    ctx->pc = 0x28C7BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28C7C0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28C764u: goto label_28c764;
            case 0x28C78Cu: goto label_28c78c;
            case 0x28C7B8u: goto label_28c7b8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x28C7C4u;
}
