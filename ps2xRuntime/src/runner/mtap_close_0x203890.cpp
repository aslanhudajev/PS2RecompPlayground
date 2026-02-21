#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: mtap_close
// Address: 0x203890 - 0x2038f8
void mtap_close_0x203890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x203890u;

    // 0x203890: 0x27bdffd0
    ctx->pc = 0x203890u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x203894: 0xffbf0020
    ctx->pc = 0x203894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x203898: 0xffb10010
    ctx->pc = 0x203898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x20389c: 0xffb00000
    ctx->pc = 0x20389cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2038a0: 0x80802d
    ctx->pc = 0x2038a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2038a4: 0x3c020031
    ctx->pc = 0x2038a4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x2038a8: 0x24420ee0
    ctx->pc = 0x2038a8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3808));
    // 0x2038ac: 0x101880
    ctx->pc = 0x2038acu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 2));
    // 0x2038b0: 0x628821
    ctx->pc = 0x2038b0u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2038b4: 0x8e220000
    ctx->pc = 0x2038b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2038b8: 0x50400009
    ctx->pc = 0x2038B8u;
    {
        const bool branch_taken_0x2038b8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2038b8) {
            ctx->pc = 0x2038BCu;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 1));
            ctx->pc = 0x2038E0u;
            goto label_2038e0;
        }
    }
    ctx->pc = 0x2038C0u;
    // 0x2038c0: 0xc0b9476
    ctx->pc = 0x2038C0u;
    SET_GPR_U32(ctx, 31, 0x2038C8u);
    ctx->pc = 0x2E51D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceMtapPortClose_0x2e51d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2038C8u; }
    }
    if (ctx->pc != 0x2038C8u) { return; }
    ctx->pc = 0x2038C8u;
    // 0x2038c8: 0xae200000
    ctx->pc = 0x2038c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x2038cc: 0x882d
    ctx->pc = 0x2038ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2038d0: 0xc0b9476
    ctx->pc = 0x2038D0u;
    SET_GPR_U32(ctx, 31, 0x2038D8u);
    ctx->pc = 0x2038D4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 2));
    ctx->pc = 0x2E51D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceMtapPortClose_0x2e51d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2038D8u; }
    }
    if (ctx->pc != 0x2038D8u) { return; }
    ctx->pc = 0x2038D8u;
    // 0x2038d8: 0x10000002
    ctx->pc = 0x2038D8u;
    {
        const bool branch_taken_0x2038d8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2038DCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2038d8) {
            ctx->pc = 0x2038E4u;
            goto label_2038e4;
        }
    }
    ctx->pc = 0x2038E0u;
label_2038e0:
    // 0x2038e0: 0x220102d
    ctx->pc = 0x2038e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2038e4:
    // 0x2038e4: 0xdfbf0020
    ctx->pc = 0x2038e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2038e8: 0xdfb10010
    ctx->pc = 0x2038e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2038ec: 0xdfb00000
    ctx->pc = 0x2038ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2038f0: 0x3e00008
    ctx->pc = 0x2038F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2038F4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2038E0u: goto label_2038e0;
            case 0x2038E4u: goto label_2038e4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2038F8u;
}
