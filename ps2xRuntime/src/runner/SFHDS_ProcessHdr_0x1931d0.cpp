#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFHDS_ProcessHdr
// Address: 0x1931d0 - 0x193230
void SFHDS_ProcessHdr_0x1931d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFHDS_ProcessHdr");


    ctx->pc = 0x1931d0u;

    // 0x1931d0: 0x27bdffd0
    ctx->pc = 0x1931d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1931d4: 0xffb10010
    ctx->pc = 0x1931d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1931d8: 0xffb00000
    ctx->pc = 0x1931d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1931dc: 0x80882d
    ctx->pc = 0x1931dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1931e0: 0xffbf0020
    ctx->pc = 0x1931e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1931e4: 0x26240094
    ctx->pc = 0x1931e4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 148));
    // 0x1931e8: 0xc067eae
    ctx->pc = 0x1931E8u;
    SET_GPR_U32(ctx, 31, 0x1931F0u);
    ctx->pc = 0x1931ECu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 144)));
    ctx->pc = 0x19FAB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFH_Create_0x19fab8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1931F0u; }
        else if (ctx->pc != 0x1931F0u) { ctx->pc = 0x1931F0u; }
    }
    if (ctx->pc != 0x1931F0u) { return; }
    ctx->pc = 0x1931F0u;
    // 0x1931f0: 0x40802d
    ctx->pc = 0x1931f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1931f4: 0x1200000a
    ctx->pc = 0x1931F4u;
    {
        const bool branch_taken_0x1931f4 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x1931F8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x1931f4) {
            ctx->pc = 0x193220u;
            goto label_193220;
        }
    }
    ctx->pc = 0x1931FCu;
    // 0x1931fc: 0x220282d
    ctx->pc = 0x1931fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193200: 0xc064c8c
    ctx->pc = 0x193200u;
    SET_GPR_U32(ctx, 31, 0x193208u);
    ctx->pc = 0x193204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x193230u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfhds_DoProcessHdr_0x193230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193208u; }
        else if (ctx->pc != 0x193208u) { ctx->pc = 0x193208u; }
    }
    if (ctx->pc != 0x193208u) { return; }
    ctx->pc = 0x193208u;
    // 0x193208: 0x200202d
    ctx->pc = 0x193208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19320c: 0xdfbf0020
    ctx->pc = 0x19320cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x193210: 0xdfb10010
    ctx->pc = 0x193210u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x193214: 0xdfb00000
    ctx->pc = 0x193214u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x193218: 0x8067ee0
    ctx->pc = 0x193218u;
    ctx->pc = 0x19321Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x19FB80u;
    SFH_Destroy_0x19fb80(rdram, ctx, runtime); return;
    ctx->pc = 0x193220u;
label_193220:
    // 0x193220: 0xdfb10010
    ctx->pc = 0x193220u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x193224: 0xdfb00000
    ctx->pc = 0x193224u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x193228: 0x3e00008
    ctx->pc = 0x193228u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19322Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x193220u: goto label_193220;
            default: break;
        }
        return;
    }
    ctx->pc = 0x193230u;
}
