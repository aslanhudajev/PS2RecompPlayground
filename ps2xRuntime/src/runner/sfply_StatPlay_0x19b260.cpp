#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfply_StatPlay
// Address: 0x19b260 - 0x19b2bc
void sfply_StatPlay_0x19b260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfply_StatPlay");


    ctx->pc = 0x19b260u;

    // 0x19b260: 0x27bdffe0
    ctx->pc = 0x19b260u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19b264: 0xffb00000
    ctx->pc = 0x19b264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19b268: 0xffbf0010
    ctx->pc = 0x19b268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19b26c: 0xc066cca
    ctx->pc = 0x19B26Cu;
    SET_GPR_U32(ctx, 31, 0x19B274u);
    ctx->pc = 0x19B270u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19B328u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfply_ChkFin_0x19b328(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B274u; }
        else if (ctx->pc != 0x19B274u) { ctx->pc = 0x19B274u; }
    }
    if (ctx->pc != 0x19B274u) { return; }
    ctx->pc = 0x19B274u;
    // 0x19b274: 0x50400003
    ctx->pc = 0x19B274u;
    {
        const bool branch_taken_0x19b274 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x19b274) {
            ctx->pc = 0x19B278u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 68)));
            ctx->pc = 0x19B284u;
            goto label_19b284;
        }
    }
    ctx->pc = 0x19B27Cu;
    // 0x19b27c: 0x1000000b
    ctx->pc = 0x19B27Cu;
    {
        const bool branch_taken_0x19b27c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19B280u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 64)));
        if (branch_taken_0x19b27c) {
            ctx->pc = 0x19B2ACu;
            goto label_19b2ac;
        }
    }
    ctx->pc = 0x19B284u;
label_19b284:
    // 0x19b284: 0x28620002
    ctx->pc = 0x19b284u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 2));
    // 0x19b288: 0x14400007
    ctx->pc = 0x19B288u;
    {
        const bool branch_taken_0x19b288 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x19B28Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 64)));
        if (branch_taken_0x19b288) {
            ctx->pc = 0x19B2A8u;
            goto label_19b2a8;
        }
    }
    ctx->pc = 0x19B290u;
    // 0x19b290: 0x28620005
    ctx->pc = 0x19b290u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 5));
    // 0x19b294: 0x14400005
    ctx->pc = 0x19B294u;
    {
        const bool branch_taken_0x19b294 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x19B298u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19b294) {
            ctx->pc = 0x19B2ACu;
            goto label_19b2ac;
        }
    }
    ctx->pc = 0x19B29Cu;
    // 0x19b29c: 0x38630006
    ctx->pc = 0x19b29cu;
    SET_GPR_U32(ctx, 3, XOR32(GPR_U32(ctx, 3), 6));
    // 0x19b2a0: 0x24020006
    ctx->pc = 0x19b2a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
    // 0x19b2a4: 0x43200a
    ctx->pc = 0x19b2a4u;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 2));
label_19b2a8:
    // 0x19b2a8: 0x80102d
    ctx->pc = 0x19b2a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19b2ac:
    // 0x19b2ac: 0xdfbf0010
    ctx->pc = 0x19b2acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19b2b0: 0xdfb00000
    ctx->pc = 0x19b2b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19b2b4: 0x3e00008
    ctx->pc = 0x19B2B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19B2B8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19B284u: goto label_19b284;
            case 0x19B2A8u: goto label_19b2a8;
            case 0x19B2ACu: goto label_19b2ac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19B2BCu;
}
