#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfvom_IsTerm
// Address: 0x19f870 - 0x19f8ac
void sfvom_IsTerm_0x19f870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfvom_IsTerm");


    ctx->pc = 0x19f870u;

    // 0x19f870: 0x27bdffe0
    ctx->pc = 0x19f870u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19f874: 0x2405000f
    ctx->pc = 0x19f874u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 15));
    // 0x19f878: 0xffb00000
    ctx->pc = 0x19f878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19f87c: 0xffbf0010
    ctx->pc = 0x19f87cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19f880: 0xc0674c2
    ctx->pc = 0x19F880u;
    SET_GPR_U32(ctx, 31, 0x19F888u);
    ctx->pc = 0x19F884u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19D308u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFSET_GetCond_0x19d308(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F888u; }
        else if (ctx->pc != 0x19F888u) { ctx->pc = 0x19F888u; }
    }
    if (ctx->pc != 0x19F888u) { return; }
    ctx->pc = 0x19F888u;
    // 0x19f888: 0x10400004
    ctx->pc = 0x19F888u;
    {
        const bool branch_taken_0x19f888 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x19F88Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x19f888) {
            ctx->pc = 0x19F89Cu;
            goto label_19f89c;
        }
    }
    ctx->pc = 0x19F890u;
    // 0x19f890: 0xc067af2
    ctx->pc = 0x19F890u;
    SET_GPR_U32(ctx, 31, 0x19F898u);
    ctx->pc = 0x19F894u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19EBC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFTIM_IsVideoTerm_0x19ebc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F898u; }
        else if (ctx->pc != 0x19F898u) { ctx->pc = 0x19F898u; }
    }
    if (ctx->pc != 0x19F898u) { return; }
    ctx->pc = 0x19F898u;
    // 0x19f898: 0x2102b
    ctx->pc = 0x19f898u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_19f89c:
    // 0x19f89c: 0xdfbf0010
    ctx->pc = 0x19f89cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19f8a0: 0xdfb00000
    ctx->pc = 0x19f8a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19f8a4: 0x3e00008
    ctx->pc = 0x19F8A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F8A8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19F89Cu: goto label_19f89c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19F8ACu;
}
