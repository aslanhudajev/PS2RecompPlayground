#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: voBufGetData
// Address: 0x11a9b8 - 0x11a9fc
void voBufGetData_0x11a9b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11a9b8u;

    // 0x11a9b8: 0x27bdffe0
    ctx->pc = 0x11a9b8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11a9bc: 0xffb00000
    ctx->pc = 0x11a9bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11a9c0: 0xffbf0010
    ctx->pc = 0x11a9c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11a9c4: 0xc046a4c
    ctx->pc = 0x11A9C4u;
    SET_GPR_U32(ctx, 31, 0x11A9CCu);
    ctx->pc = 0x11A9C8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11A930u;
    {
        const uint32_t __entryPc = ctx->pc;
        voBufIsFull_0x11a930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A9CCu; }
    }
    if (ctx->pc != 0x11A9CCu) { return; }
    ctx->pc = 0x11A9CCu;
    // 0x11a9cc: 0x54400007
    ctx->pc = 0x11A9CCu;
    {
        const bool branch_taken_0x11a9cc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x11a9cc) {
            ctx->pc = 0x11A9D0u;
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x11A9ECu;
            goto label_11a9ec;
        }
    }
    ctx->pc = 0x11A9D4u;
    // 0x11a9d4: 0x8e030008
    ctx->pc = 0x11a9d4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x11a9d8: 0x3c020016
    ctx->pc = 0x11a9d8u;
    SET_GPR_S32(ctx, 2, ((uint32_t)22 << 16));
    // 0x11a9dc: 0x34428000
    ctx->pc = 0x11a9dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)32768);
    // 0x11a9e0: 0x8e040000
    ctx->pc = 0x11a9e0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11a9e4: 0x621818
    ctx->pc = 0x11a9e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x11a9e8: 0x831021
    ctx->pc = 0x11a9e8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_11a9ec:
    // 0x11a9ec: 0xdfbf0010
    ctx->pc = 0x11a9ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11a9f0: 0xdfb00000
    ctx->pc = 0x11a9f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11a9f4: 0x3e00008
    ctx->pc = 0x11A9F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A9F8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11A9ECu: goto label_11a9ec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11A9FCu;
}
