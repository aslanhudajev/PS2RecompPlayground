#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: getControllerStatus
// Address: 0x102600 - 0x102678
void getControllerStatus_0x102600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x102600u;

    // 0x102600: 0x27bdffe0
    ctx->pc = 0x102600u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x102604: 0x202d
    ctx->pc = 0x102604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102608: 0xffb00000
    ctx->pc = 0x102608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10260c: 0x282d
    ctx->pc = 0x10260cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102610: 0x3c100014
    ctx->pc = 0x102610u;
    SET_GPR_U32(ctx, 16, ((uint32_t)20 << 16));
    // 0x102614: 0xffbf0010
    ctx->pc = 0x102614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x102618: 0xc0458fe
    ctx->pc = 0x102618u;
    SET_GPR_U32(ctx, 31, 0x102620u);
    ctx->pc = 0x10261Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 4294959360));
    ctx->pc = 0x1163F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        scePadRead_0x1163f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102620u; }
    }
    if (ctx->pc != 0x102620u) { return; }
    ctx->pc = 0x102620u;
    // 0x102620: 0x202d
    ctx->pc = 0x102620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102624: 0xc04591e
    ctx->pc = 0x102624u;
    SET_GPR_U32(ctx, 31, 0x10262Cu);
    ctx->pc = 0x102628u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x116478u;
    {
        const uint32_t __entryPc = ctx->pc;
        scePadGetState_0x116478(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10262Cu; }
    }
    if (ctx->pc != 0x10262Cu) { return; }
    ctx->pc = 0x10262Cu;
    // 0x10262c: 0x40182d
    ctx->pc = 0x10262cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102630: 0x24020006
    ctx->pc = 0x102630u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
    // 0x102634: 0x10620006
    ctx->pc = 0x102634u;
    {
        const bool branch_taken_0x102634 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x102638u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934804), GPR_U32(ctx, 3));
        if (branch_taken_0x102634) {
            ctx->pc = 0x102650u;
            goto label_102650;
        }
    }
    ctx->pc = 0x10263Cu;
    // 0x10263c: 0x24020002
    ctx->pc = 0x10263cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x102640: 0x10620004
    ctx->pc = 0x102640u;
    {
        const bool branch_taken_0x102640 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x102644u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 4294959360));
        if (branch_taken_0x102640) {
            ctx->pc = 0x102654u;
            goto label_102654;
        }
    }
    ctx->pc = 0x102648u;
    // 0x102648: 0x10000007
    ctx->pc = 0x102648u;
    {
        const bool branch_taken_0x102648 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x10264Cu;
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294934802), (uint16_t)GPR_U32(ctx, 0));
        if (branch_taken_0x102648) {
            ctx->pc = 0x102668u;
            goto label_102668;
        }
    }
    ctx->pc = 0x102650u;
label_102650:
    // 0x102650: 0x2602e100
    ctx->pc = 0x102650u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 4294959360));
label_102654:
    // 0x102654: 0x90430002
    ctx->pc = 0x102654u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x102658: 0x90440003
    ctx->pc = 0x102658u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x10265c: 0x31a00
    ctx->pc = 0x10265cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 8));
    // 0x102660: 0x641827
    ctx->pc = 0x102660u;
    SET_GPR_U32(ctx, 3, NOR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x102664: 0xa7838112
    ctx->pc = 0x102664u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294934802), (uint16_t)GPR_U32(ctx, 3));
label_102668:
    // 0x102668: 0xdfbf0010
    ctx->pc = 0x102668u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10266c: 0xdfb00000
    ctx->pc = 0x10266cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x102670: 0x3e00008
    ctx->pc = 0x102670u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x102674u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x102650u: goto label_102650;
            case 0x102654u: goto label_102654;
            case 0x102668u: goto label_102668;
            default: break;
        }
        return;
    }
    ctx->pc = 0x102678u;
}
