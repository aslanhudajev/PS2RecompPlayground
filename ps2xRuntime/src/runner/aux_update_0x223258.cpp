#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: aux_update
// Address: 0x223258 - 0x2232d4
void aux_update_0x223258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x223258u;

    // 0x223258: 0x27bdffd0
    ctx->pc = 0x223258u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x22325c: 0xffbf0020
    ctx->pc = 0x22325cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x223260: 0xffb10010
    ctx->pc = 0x223260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x223264: 0xffb00000
    ctx->pc = 0x223264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x223268: 0x3c020031
    ctx->pc = 0x223268u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x22326c: 0xdc420e28
    ctx->pc = 0x22326cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 3624)));
    // 0x223270: 0x30420020
    ctx->pc = 0x223270u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 32));
    // 0x223274: 0x2883c
    ctx->pc = 0x223274u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 0));
    // 0x223278: 0x11883f
    ctx->pc = 0x223278u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 0));
    // 0x22327c: 0x3c10003c
    ctx->pc = 0x22327cu;
    SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
    // 0x223280: 0x8e020a80
    ctx->pc = 0x223280u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 2688)));
    // 0x223284: 0x1440000f
    ctx->pc = 0x223284u;
    {
        const bool branch_taken_0x223284 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x223288u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x223284) {
            ctx->pc = 0x2232C4u;
            goto label_2232c4;
        }
    }
    ctx->pc = 0x22328Cu;
    // 0x22328c: 0x1220000a
    ctx->pc = 0x22328Cu;
    {
        const bool branch_taken_0x22328c = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x223290u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x22328c) {
            ctx->pc = 0x2232B8u;
            goto label_2232b8;
        }
    }
    ctx->pc = 0x223294u;
    // 0x223294: 0x8c420f68
    ctx->pc = 0x223294u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 3944)));
    // 0x223298: 0x14400008
    ctx->pc = 0x223298u;
    {
        const bool branch_taken_0x223298 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x22329Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x223298) {
            ctx->pc = 0x2232BCu;
            goto label_2232bc;
        }
    }
    ctx->pc = 0x2232A0u;
    // 0x2232a0: 0x24020001
    ctx->pc = 0x2232a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2232a4: 0xc088fa4
    ctx->pc = 0x2232A4u;
    SET_GPR_U32(ctx, 31, 0x2232ACu);
    ctx->pc = 0x2232A8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2688), GPR_U32(ctx, 2));
    ctx->pc = 0x223E90u;
    {
        const uint32_t __entryPc = ctx->pc;
        aud_stream_stop_0x223e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2232ACu; }
    }
    if (ctx->pc != 0x2232ACu) { return; }
    ctx->pc = 0x2232ACu;
    // 0x2232ac: 0xc088f86
    ctx->pc = 0x2232ACu;
    SET_GPR_U32(ctx, 31, 0x2232B4u);
    ctx->pc = 0x223E18u;
    {
        const uint32_t __entryPc = ctx->pc;
        aud_stop_all_sounds_0x223e18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2232B4u; }
    }
    if (ctx->pc != 0x2232B4u) { return; }
    ctx->pc = 0x2232B4u;
    // 0x2232b4: 0xae000a80
    ctx->pc = 0x2232b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2688), GPR_U32(ctx, 0));
label_2232b8:
    // 0x2232b8: 0x3c02003c
    ctx->pc = 0x2232b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_2232bc:
    // 0x2232bc: 0xac510f68
    ctx->pc = 0x2232bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3944), GPR_U32(ctx, 17));
    // 0x2232c0: 0xdfbf0020
    ctx->pc = 0x2232c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2232c4:
    // 0x2232c4: 0xdfb10010
    ctx->pc = 0x2232c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2232c8: 0xdfb00000
    ctx->pc = 0x2232c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2232cc: 0x3e00008
    ctx->pc = 0x2232CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2232D0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2232B8u: goto label_2232b8;
            case 0x2232BCu: goto label_2232bc;
            case 0x2232C4u: goto label_2232c4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2232D4u;
}
