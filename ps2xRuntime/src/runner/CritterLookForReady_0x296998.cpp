#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CritterLookForReady
// Address: 0x296998 - 0x296a00
void CritterLookForReady_0x296998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x296998u;

    // 0x296998: 0x27bdffe0
    ctx->pc = 0x296998u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29699c: 0xffbf0010
    ctx->pc = 0x29699cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2969a0: 0xffb00000
    ctx->pc = 0x2969a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2969a4: 0x80802d
    ctx->pc = 0x2969a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2969a8: 0xc601011c
    ctx->pc = 0x2969a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2969ac: 0x3c013f4c
    ctx->pc = 0x2969acu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16204 << 16));
    // 0x2969b0: 0x3421cccd
    ctx->pc = 0x2969b0u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
    // 0x2969b4: 0x44810000
    ctx->pc = 0x2969b4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2969b8: 0x46000834
    ctx->pc = 0x2969b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2969bc: 0x0
    ctx->pc = 0x2969bcu;
    // NOP
    // 0x2969c0: 0x45000004
    ctx->pc = 0x2969C0u;
    {
        const bool branch_taken_0x2969c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2969C4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x2969c0) {
            ctx->pc = 0x2969D4u;
            goto label_2969d4;
        }
    }
    ctx->pc = 0x2969C8u;
    // 0x2969c8: 0x24050021
    ctx->pc = 0x2969c8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 33));
    // 0x2969cc: 0xc0a552c
    ctx->pc = 0x2969CCu;
    SET_GPR_U32(ctx, 31, 0x2969D4u);
    ctx->pc = 0x2969D0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2954B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterFindMoveType_0x2954b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2969D4u; }
    }
    if (ctx->pc != 0x2969D4u) { return; }
    ctx->pc = 0x2969D4u;
label_2969d4:
    // 0x2969d4: 0x4430006
    ctx->pc = 0x2969D4u;
    {
        const bool branch_taken_0x2969d4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2969d4) {
            ctx->pc = 0x2969D8u;
            WRITE16(ADD32(GPR_U32(ctx, 16), 294), (uint16_t)GPR_U32(ctx, 2));
            ctx->pc = 0x2969F0u;
            goto label_2969f0;
        }
    }
    ctx->pc = 0x2969DCu;
    // 0x2969dc: 0x200202d
    ctx->pc = 0x2969dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2969e0: 0x24050020
    ctx->pc = 0x2969e0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 32));
    // 0x2969e4: 0xc0a552c
    ctx->pc = 0x2969E4u;
    SET_GPR_U32(ctx, 31, 0x2969ECu);
    ctx->pc = 0x2969E8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2954B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterFindMoveType_0x2954b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2969ECu; }
    }
    if (ctx->pc != 0x2969ECu) { return; }
    ctx->pc = 0x2969ECu;
    // 0x2969ec: 0xa6020126
    ctx->pc = 0x2969ecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 294), (uint16_t)GPR_U32(ctx, 2));
label_2969f0:
    // 0x2969f0: 0xdfbf0010
    ctx->pc = 0x2969f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2969f4: 0xdfb00000
    ctx->pc = 0x2969f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2969f8: 0x3e00008
    ctx->pc = 0x2969F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2969FCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2969D4u: goto label_2969d4;
            case 0x2969F0u: goto label_2969f0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x296A00u;
}
