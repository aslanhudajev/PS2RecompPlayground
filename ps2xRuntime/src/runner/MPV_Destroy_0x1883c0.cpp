#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MPV_Destroy
// Address: 0x1883c0 - 0x188418
void MPV_Destroy_0x1883c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MPV_Destroy");


    ctx->pc = 0x1883c0u;

    // 0x1883c0: 0x27bdffe0
    ctx->pc = 0x1883c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1883c4: 0xffb00000
    ctx->pc = 0x1883c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1883c8: 0xffbf0010
    ctx->pc = 0x1883c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1883cc: 0xc062142
    ctx->pc = 0x1883CCu;
    SET_GPR_U32(ctx, 31, 0x1883D4u);
    ctx->pc = 0x1883D0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x188508u;
    {
        const uint32_t __entryPc = ctx->pc;
        MPVLIB_CheckHn_0x188508(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1883D4u; }
        else if (ctx->pc != 0x1883D4u) { ctx->pc = 0x1883D4u; }
    }
    if (ctx->pc != 0x1883D4u) { return; }
    ctx->pc = 0x1883D4u;
    // 0x1883d4: 0x10400006
    ctx->pc = 0x1883D4u;
    {
        const bool branch_taken_0x1883d4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1883D8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1883d4) {
            ctx->pc = 0x1883F0u;
            goto label_1883f0;
        }
    }
    ctx->pc = 0x1883DCu;
    // 0x1883dc: 0x3c05ff03
    ctx->pc = 0x1883dcu;
    SET_GPR_U32(ctx, 5, ((uint32_t)65283 << 16));
    // 0x1883e0: 0xc061846
    ctx->pc = 0x1883E0u;
    SET_GPR_U32(ctx, 31, 0x1883E8u);
    ctx->pc = 0x1883E4u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 513));
    ctx->pc = 0x186118u;
    {
        const uint32_t __entryPc = ctx->pc;
        MPVERR_SetCode_0x186118(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1883E8u; }
        else if (ctx->pc != 0x1883E8u) { ctx->pc = 0x1883E8u; }
    }
    if (ctx->pc != 0x1883E8u) { return; }
    ctx->pc = 0x1883E8u;
    // 0x1883e8: 0x10000008
    ctx->pc = 0x1883E8u;
    {
        const bool branch_taken_0x1883e8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1883ECu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x1883e8) {
            ctx->pc = 0x18840Cu;
            goto label_18840c;
        }
    }
    ctx->pc = 0x1883F0u;
label_1883f0:
    // 0x1883f0: 0x200202d
    ctx->pc = 0x1883f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1883f4: 0xc062108
    ctx->pc = 0x1883F4u;
    SET_GPR_U32(ctx, 31, 0x1883FCu);
    ctx->pc = 0x1883F8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 6416));
    ctx->pc = 0x188420u;
    {
        const uint32_t __entryPc = ctx->pc;
        mpvlib_FreeLc_0x188420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1883FCu; }
        else if (ctx->pc != 0x1883FCu) { ctx->pc = 0x1883FCu; }
    }
    if (ctx->pc != 0x1883FCu) { return; }
    ctx->pc = 0x1883FCu;
    // 0x1883fc: 0x24030001
    ctx->pc = 0x1883fcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x188400: 0x102d
    ctx->pc = 0x188400u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188404: 0xae030160
    ctx->pc = 0x188404u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 3));
    // 0x188408: 0xdfbf0010
    ctx->pc = 0x188408u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_18840c:
    // 0x18840c: 0xdfb00000
    ctx->pc = 0x18840cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x188410: 0x3e00008
    ctx->pc = 0x188410u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x188414u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1883F0u: goto label_1883f0;
            case 0x18840Cu: goto label_18840c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x188418u;
}
