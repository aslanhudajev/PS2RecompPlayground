#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFHDS_IsSfdHeader
// Address: 0x192f58 - 0x192fac
void SFHDS_IsSfdHeader_0x192f58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFHDS_IsSfdHeader");


    ctx->pc = 0x192f58u;

    // 0x192f58: 0x27bdffd0
    ctx->pc = 0x192f58u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x192f5c: 0xffb00010
    ctx->pc = 0x192f5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x192f60: 0xffbf0020
    ctx->pc = 0x192f60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x192f64: 0xc067eae
    ctx->pc = 0x192F64u;
    SET_GPR_U32(ctx, 31, 0x192F6Cu);
    ctx->pc = 0x19FAB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFH_Create_0x19fab8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192F6Cu; }
        else if (ctx->pc != 0x192F6Cu) { ctx->pc = 0x192F6Cu; }
    }
    if (ctx->pc != 0x192F6Cu) { return; }
    ctx->pc = 0x192F6Cu;
    // 0x192f6c: 0x40802d
    ctx->pc = 0x192f6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192f70: 0x16000003
    ctx->pc = 0x192F70u;
    {
        const bool branch_taken_0x192f70 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x192F74u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x192f70) {
            ctx->pc = 0x192F80u;
            goto label_192f80;
        }
    }
    ctx->pc = 0x192F78u;
    // 0x192f78: 0x10000008
    ctx->pc = 0x192F78u;
    {
        const bool branch_taken_0x192f78 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x192F7Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x192f78) {
            ctx->pc = 0x192F9Cu;
            goto label_192f9c;
        }
    }
    ctx->pc = 0x192F80u;
label_192f80:
    // 0x192f80: 0xc067f32
    ctx->pc = 0x192F80u;
    SET_GPR_U32(ctx, 31, 0x192F88u);
    ctx->pc = 0x192F84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19FCC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFH_IsSfdHeader_0x19fcc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192F88u; }
        else if (ctx->pc != 0x192F88u) { ctx->pc = 0x192F88u; }
    }
    if (ctx->pc != 0x192F88u) { return; }
    ctx->pc = 0x192F88u;
    // 0x192f88: 0x50400001
    ctx->pc = 0x192F88u;
    {
        const bool branch_taken_0x192f88 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x192f88) {
            ctx->pc = 0x192F8Cu;
            WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
            ctx->pc = 0x192F90u;
            goto label_192f90;
        }
    }
    ctx->pc = 0x192F90u;
label_192f90:
    // 0x192f90: 0xc067ee0
    ctx->pc = 0x192F90u;
    SET_GPR_U32(ctx, 31, 0x192F98u);
    ctx->pc = 0x192F94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19FB80u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFH_Destroy_0x19fb80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192F98u; }
        else if (ctx->pc != 0x192F98u) { ctx->pc = 0x192F98u; }
    }
    if (ctx->pc != 0x192F98u) { return; }
    ctx->pc = 0x192F98u;
    // 0x192f98: 0x8fa20000
    ctx->pc = 0x192f98u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_192f9c:
    // 0x192f9c: 0xdfbf0020
    ctx->pc = 0x192f9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x192fa0: 0xdfb00010
    ctx->pc = 0x192fa0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x192fa4: 0x3e00008
    ctx->pc = 0x192FA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x192FA8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x192F80u: goto label_192f80;
            case 0x192F90u: goto label_192f90;
            case 0x192F9Cu: goto label_192f9c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x192FACu;
}
