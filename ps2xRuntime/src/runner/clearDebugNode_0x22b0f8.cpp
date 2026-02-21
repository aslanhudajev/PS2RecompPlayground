#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: clearDebugNode
// Address: 0x22b0f8 - 0x22b158
void clearDebugNode_0x22b0f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x22b0f8u;

    // 0x22b0f8: 0x27bdffe0
    ctx->pc = 0x22b0f8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22b0fc: 0xffbf0010
    ctx->pc = 0x22b0fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x22b100: 0xffb00000
    ctx->pc = 0x22b100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22b104: 0x80802d
    ctx->pc = 0x22b104u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b108: 0x8e0406a8
    ctx->pc = 0x22b108u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 1704)));
    // 0x22b10c: 0x50800004
    ctx->pc = 0x22B10Cu;
    {
        const bool branch_taken_0x22b10c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x22b10c) {
            ctx->pc = 0x22B110u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 1700)));
            ctx->pc = 0x22B120u;
            goto label_22b120;
        }
    }
    ctx->pc = 0x22B114u;
    // 0x22b114: 0xc0b2e06
    ctx->pc = 0x22B114u;
    SET_GPR_U32(ctx, 31, 0x22B11Cu);
    ctx->pc = 0x22B118u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2CB818u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBPsysSetDebugNode_0x2cb818(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B11Cu; }
    }
    if (ctx->pc != 0x22B11Cu) { return; }
    ctx->pc = 0x22B11Cu;
    // 0x22b11c: 0x8e0406a4
    ctx->pc = 0x22b11cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 1700)));
label_22b120:
    // 0x22b120: 0x50800004
    ctx->pc = 0x22B120u;
    {
        const bool branch_taken_0x22b120 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x22b120) {
            ctx->pc = 0x22B124u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 1708)));
            ctx->pc = 0x22B134u;
            goto label_22b134;
        }
    }
    ctx->pc = 0x22B128u;
    // 0x22b128: 0xc0b2e06
    ctx->pc = 0x22B128u;
    SET_GPR_U32(ctx, 31, 0x22B130u);
    ctx->pc = 0x22B12Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2CB818u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBPsysSetDebugNode_0x2cb818(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B130u; }
    }
    if (ctx->pc != 0x22B130u) { return; }
    ctx->pc = 0x22B130u;
    // 0x22b130: 0x8e0406ac
    ctx->pc = 0x22b130u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 1708)));
label_22b134:
    // 0x22b134: 0x10800005
    ctx->pc = 0x22B134u;
    {
        const bool branch_taken_0x22b134 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x22B138u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x22b134) {
            ctx->pc = 0x22B14Cu;
            goto label_22b14c;
        }
    }
    ctx->pc = 0x22B13Cu;
    // 0x22b13c: 0x24050001
    ctx->pc = 0x22b13cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x22b140: 0xdfb00000
    ctx->pc = 0x22b140u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22b144: 0x80b2e06
    ctx->pc = 0x22B144u;
    ctx->pc = 0x22B148u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x2CB818u;
    MBPsysSetDebugNode_0x2cb818(rdram, ctx, runtime); return;
    ctx->pc = 0x22B14Cu;
label_22b14c:
    // 0x22b14c: 0xdfb00000
    ctx->pc = 0x22b14cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22b150: 0x3e00008
    ctx->pc = 0x22B150u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22B154u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22B120u: goto label_22b120;
            case 0x22B134u: goto label_22b134;
            case 0x22B14Cu: goto label_22b14c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x22B158u;
}
