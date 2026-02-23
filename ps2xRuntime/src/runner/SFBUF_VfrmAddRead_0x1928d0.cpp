#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFBUF_VfrmAddRead
// Address: 0x1928d0 - 0x192934
void SFBUF_VfrmAddRead_0x1928d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFBUF_VfrmAddRead");


    ctx->pc = 0x1928d0u;

    // 0x1928d0: 0x24020388
    ctx->pc = 0x1928d0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 904));
    // 0x1928d4: 0x27bdffe0
    ctx->pc = 0x1928d4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1928d8: 0xa22818
    ctx->pc = 0x1928d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)(uint32_t)result); }
    // 0x1928dc: 0xffb00000
    ctx->pc = 0x1928dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1928e0: 0x80802d
    ctx->pc = 0x1928e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1928e4: 0xffbf0010
    ctx->pc = 0x1928e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1928e8: 0x26030d34
    ctx->pc = 0x1928e8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 16), 3380));
    // 0x1928ec: 0x651821
    ctx->pc = 0x1928ecu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1928f0: 0x8c620004
    ctx->pc = 0x1928f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1928f4: 0x14400008
    ctx->pc = 0x1928F4u;
    {
        const bool branch_taken_0x1928f4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1928F8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1928f4) {
            ctx->pc = 0x192918u;
            goto label_192918;
        }
    }
    ctx->pc = 0x1928FCu;
    // 0x1928fc: 0xc0382d
    ctx->pc = 0x1928fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192900: 0x8c650360
    ctx->pc = 0x192900u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 864)));
    // 0x192904: 0x200202d
    ctx->pc = 0x192904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192908: 0x2406000c
    ctx->pc = 0x192908u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 12));
    // 0x19290c: 0xc067cca
    ctx->pc = 0x19290Cu;
    SET_GPR_U32(ctx, 31, 0x192914u);
    ctx->pc = 0x192910u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19F328u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFTRN_CallTrtTrif_0x19f328(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192914u; }
        else if (ctx->pc != 0x192914u) { ctx->pc = 0x192914u; }
    }
    if (ctx->pc != 0x192914u) { return; }
    ctx->pc = 0x192914u;
    // 0x192914: 0x40202d
    ctx->pc = 0x192914u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_192918:
    // 0x192918: 0x24030001
    ctx->pc = 0x192918u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x19291c: 0xdfbf0010
    ctx->pc = 0x19291cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x192920: 0xae03003c
    ctx->pc = 0x192920u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    // 0x192924: 0x80102d
    ctx->pc = 0x192924u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192928: 0xdfb00000
    ctx->pc = 0x192928u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19292c: 0x3e00008
    ctx->pc = 0x19292Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x192930u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x192918u: goto label_192918;
            default: break;
        }
        return;
    }
    ctx->pc = 0x192934u;
}
