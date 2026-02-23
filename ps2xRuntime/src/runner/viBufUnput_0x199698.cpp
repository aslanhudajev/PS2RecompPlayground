#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: viBufUnput
// Address: 0x199698 - 0x199714
void viBufUnput_0x199698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("viBufUnput");


    ctx->pc = 0x199698u;

    // 0x199698: 0x27bdffd0
    ctx->pc = 0x199698u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19969c: 0xffb10010
    ctx->pc = 0x19969cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1996a0: 0xffb00000
    ctx->pc = 0x1996a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1996a4: 0xa0882d
    ctx->pc = 0x1996a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1996a8: 0xffbf0020
    ctx->pc = 0x1996a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1996ac: 0x80802d
    ctx->pc = 0x1996acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1996b0: 0xc055248
    ctx->pc = 0x1996B0u;
    SET_GPR_U32(ctx, 31, 0x1996B8u);
    ctx->pc = 0x1996B4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 64)));
    ctx->pc = 0x154920u;
    {
        const uint32_t __entryPc = ctx->pc;
        WaitSema_0x154920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1996B8u; }
        else if (ctx->pc != 0x1996B8u) { ctx->pc = 0x1996B8u; }
    }
    if (ctx->pc != 0x1996B8u) { return; }
    ctx->pc = 0x1996B8u;
    // 0x1996b8: 0x8e030014
    ctx->pc = 0x1996b8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1996bc: 0xde020048
    ctx->pc = 0x1996bcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x1996c0: 0x711823
    ctx->pc = 0x1996c0u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1996c4: 0x51102f
    ctx->pc = 0x1996c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 17));
    // 0x1996c8: 0xae030014
    ctx->pc = 0x1996c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x1996cc: 0x4610009
    ctx->pc = 0x1996CCu;
    {
        const bool branch_taken_0x1996cc = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1996D0u;
        WRITE64(ADD32(GPR_U32(ctx, 16), 72), GPR_U64(ctx, 2));
        if (branch_taken_0x1996cc) {
            ctx->pc = 0x1996F4u;
            goto label_1996f4;
        }
    }
    ctx->pc = 0x1996D4u;
    // 0x1996d4: 0x0
    ctx->pc = 0x1996d4u;
    // NOP
label_1996d8:
    // 0x1996d8: 0x0
    ctx->pc = 0x1996d8u;
    // NOP
    // 0x1996dc: 0x0
    ctx->pc = 0x1996dcu;
    // NOP
    // 0x1996e0: 0x0
    ctx->pc = 0x1996e0u;
    // NOP
    // 0x1996e4: 0x0
    ctx->pc = 0x1996e4u;
    // NOP
    // 0x1996e8: 0x0
    ctx->pc = 0x1996e8u;
    // NOP
    // 0x1996ec: 0x1000fffa
    ctx->pc = 0x1996ECu;
    {
        const bool branch_taken_0x1996ec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1996ec) {
            ctx->pc = 0x1996D8u;
            goto label_1996d8;
        }
    }
    ctx->pc = 0x1996F4u;
label_1996f4:
    // 0x1996f4: 0xc055240
    ctx->pc = 0x1996F4u;
    SET_GPR_U32(ctx, 31, 0x1996FCu);
    ctx->pc = 0x1996F8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 64)));
    ctx->pc = 0x154900u;
    {
        const uint32_t __entryPc = ctx->pc;
        SignalSema_0x154900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1996FCu; }
        else if (ctx->pc != 0x1996FCu) { ctx->pc = 0x1996FCu; }
    }
    if (ctx->pc != 0x1996FCu) { return; }
    ctx->pc = 0x1996FCu;
    // 0x1996fc: 0x220102d
    ctx->pc = 0x1996fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199700: 0xdfbf0020
    ctx->pc = 0x199700u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x199704: 0xdfb10010
    ctx->pc = 0x199704u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x199708: 0xdfb00000
    ctx->pc = 0x199708u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19970c: 0x3e00008
    ctx->pc = 0x19970Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x199710u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1996D8u: goto label_1996d8;
            case 0x1996F4u: goto label_1996f4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x199714u;
}
