#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: LogErrorf
// Address: 0x2d2558 - 0x2d25d4
void LogErrorf_0x2d2558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d2558u;

    // 0x2d2558: 0x27bdff50
    ctx->pc = 0x2d2558u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2d255c: 0xffbf0020
    ctx->pc = 0x2d255cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2d2560: 0xffb10010
    ctx->pc = 0x2d2560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2d2564: 0xffb00000
    ctx->pc = 0x2d2564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d2568: 0xffa50078
    ctx->pc = 0x2d2568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 5));
    // 0x2d256c: 0xffa60080
    ctx->pc = 0x2d256cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 6));
    // 0x2d2570: 0xffa70088
    ctx->pc = 0x2d2570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 7));
    // 0x2d2574: 0xffa80090
    ctx->pc = 0x2d2574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 8));
    // 0x2d2578: 0xffa90098
    ctx->pc = 0x2d2578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 9));
    // 0x2d257c: 0xffaa00a0
    ctx->pc = 0x2d257cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 10));
    // 0x2d2580: 0xffab00a8
    ctx->pc = 0x2d2580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 11));
    // 0x2d2584: 0xc0b48a8
    ctx->pc = 0x2D2584u;
    SET_GPR_U32(ctx, 31, 0x2D258Cu);
    ctx->pc = 0x2D2588u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D22A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        running_standalone_0x2d22a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D258Cu; }
    }
    if (ctx->pc != 0x2D258Cu) { return; }
    ctx->pc = 0x2D258Cu;
    // 0x2d258c: 0x1440000d
    ctx->pc = 0x2D258Cu;
    {
        const bool branch_taken_0x2d258c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2D2590u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x2d258c) {
            ctx->pc = 0x2D25C4u;
            goto label_2d25c4;
        }
    }
    ctx->pc = 0x2D2594u;
    // 0x2d2594: 0xc0b48c6
    ctx->pc = 0x2D2594u;
    SET_GPR_U32(ctx, 31, 0x2D259Cu);
    ctx->pc = 0x2D2318u;
    {
        const uint32_t __entryPc = ctx->pc;
        NextErrorStr_0x2d2318(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D259Cu; }
    }
    if (ctx->pc != 0x2D259Cu) { return; }
    ctx->pc = 0x2D259Cu;
    // 0x2d259c: 0x40802d
    ctx->pc = 0x2d259cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d25a0: 0x200202d
    ctx->pc = 0x2d25a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d25a4: 0x220282d
    ctx->pc = 0x2d25a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d25a8: 0xc0b5d5e
    ctx->pc = 0x2D25A8u;
    SET_GPR_U32(ctx, 31, 0x2D25B0u);
    ctx->pc = 0x2D25ACu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 120));
    ctx->pc = 0x2D7578u;
    {
        const uint32_t __entryPc = ctx->pc;
        vsprintf_0x2d7578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D25B0u; }
    }
    if (ctx->pc != 0x2D25B0u) { return; }
    ctx->pc = 0x2D25B0u;
    // 0x2d25b0: 0xa200003f
    ctx->pc = 0x2d25b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 63), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d25b4: 0x3c03003a
    ctx->pc = 0x2d25b4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
    // 0x2d25b8: 0x24020001
    ctx->pc = 0x2d25b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d25bc: 0xac621d00
    ctx->pc = 0x2d25bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7424), GPR_U32(ctx, 2));
    // 0x2d25c0: 0xdfbf0020
    ctx->pc = 0x2d25c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2d25c4:
    // 0x2d25c4: 0xdfb10010
    ctx->pc = 0x2d25c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d25c8: 0xdfb00000
    ctx->pc = 0x2d25c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d25cc: 0x3e00008
    ctx->pc = 0x2D25CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D25D0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D25C4u: goto label_2d25c4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2D25D4u;
}
