#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFVOM_GetRead
// Address: 0x19f9a8 - 0x19fa18
void SFVOM_GetRead_0x19f9a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFVOM_GetRead");


    ctx->pc = 0x19f9a8u;

    // 0x19f9a8: 0x27bdffd0
    ctx->pc = 0x19f9a8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19f9ac: 0xffb10010
    ctx->pc = 0x19f9acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x19f9b0: 0xffb00000
    ctx->pc = 0x19f9b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19f9b4: 0xffbf0020
    ctx->pc = 0x19f9b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19f9b8: 0x80802d
    ctx->pc = 0x19f9b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f9bc: 0x8e020040
    ctx->pc = 0x19f9bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x19f9c0: 0x2442fffd
    ctx->pc = 0x19f9c0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967293));
    // 0x19f9c4: 0x2c420002
    ctx->pc = 0x19f9c4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 2));
    // 0x19f9c8: 0x1040000c
    ctx->pc = 0x19F9C8u;
    {
        const bool branch_taken_0x19f9c8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x19F9CCu;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19f9c8) {
            ctx->pc = 0x19F9FCu;
            goto label_19f9fc;
        }
    }
    ctx->pc = 0x19F9D0u;
    // 0x19f9d0: 0x8e055964
    ctx->pc = 0x19f9d0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 22884)));
    // 0x19f9d4: 0x200202d
    ctx->pc = 0x19f9d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f9d8: 0xc064a20
    ctx->pc = 0x19F9D8u;
    SET_GPR_U32(ctx, 31, 0x19F9E0u);
    ctx->pc = 0x19F9DCu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x192880u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFBUF_VfrmGetRead_0x192880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F9E0u; }
        else if (ctx->pc != 0x19F9E0u) { ctx->pc = 0x19F9E0u; }
    }
    if (ctx->pc != 0x19F9E0u) { return; }
    ctx->pc = 0x19F9E0u;
    // 0x19f9e0: 0x14400009
    ctx->pc = 0x19F9E0u;
    {
        const bool branch_taken_0x19f9e0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x19F9E4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x19f9e0) {
            ctx->pc = 0x19FA08u;
            goto label_19fa08;
        }
    }
    ctx->pc = 0x19F9E8u;
    // 0x19f9e8: 0x8e250000
    ctx->pc = 0x19f9e8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x19f9ec: 0xc0679e0
    ctx->pc = 0x19F9ECu;
    SET_GPR_U32(ctx, 31, 0x19F9F4u);
    ctx->pc = 0x19F9F0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19E780u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFTIM_IsGetFrmTime_0x19e780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F9F4u; }
        else if (ctx->pc != 0x19F9F4u) { ctx->pc = 0x19F9F4u; }
    }
    if (ctx->pc != 0x19F9F4u) { return; }
    ctx->pc = 0x19F9F4u;
    // 0x19f9f4: 0x14400003
    ctx->pc = 0x19F9F4u;
    {
        const bool branch_taken_0x19f9f4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x19F9F8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19f9f4) {
            ctx->pc = 0x19FA04u;
            goto label_19fa04;
        }
    }
    ctx->pc = 0x19F9FCu;
label_19f9fc:
    // 0x19f9fc: 0xae200000
    ctx->pc = 0x19f9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x19fa00: 0x102d
    ctx->pc = 0x19fa00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19fa04:
    // 0x19fa04: 0xdfbf0020
    ctx->pc = 0x19fa04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_19fa08:
    // 0x19fa08: 0xdfb10010
    ctx->pc = 0x19fa08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19fa0c: 0xdfb00000
    ctx->pc = 0x19fa0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19fa10: 0x3e00008
    ctx->pc = 0x19FA10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19FA14u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19F9FCu: goto label_19f9fc;
            case 0x19FA04u: goto label_19fa04;
            case 0x19FA08u: goto label_19fa08;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19FA18u;
}
