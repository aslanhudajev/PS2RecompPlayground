#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: DTX_Destroy
// Address: 0x177048 - 0x1770ac
void DTX_Destroy_0x177048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("DTX_Destroy");


    ctx->pc = 0x177048u;

    // 0x177048: 0x27bdffd0
    ctx->pc = 0x177048u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17704c: 0x24030001
    ctx->pc = 0x17704cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x177050: 0xffb00000
    ctx->pc = 0x177050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x177054: 0xffbf0020
    ctx->pc = 0x177054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x177058: 0x80802d
    ctx->pc = 0x177058u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17705c: 0xffb10010
    ctx->pc = 0x17705cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x177060: 0xa2000002
    ctx->pc = 0x177060u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x177064: 0x82020001
    ctx->pc = 0x177064u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x177068: 0x14430006
    ctx->pc = 0x177068u;
    {
        const bool branch_taken_0x177068 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x17706Cu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x177068) {
            ctx->pc = 0x177084u;
            goto label_177084;
        }
    }
    ctx->pc = 0x177070u;
label_177070:
    // 0x177070: 0xc05dd14
    ctx->pc = 0x177070u;
    SET_GPR_U32(ctx, 31, 0x177078u);
    ctx->pc = 0x177450u;
    {
        const uint32_t __entryPc = ctx->pc;
        DTX_ExecServer_0x177450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177078u; }
        else if (ctx->pc != 0x177078u) { ctx->pc = 0x177078u; }
    }
    if (ctx->pc != 0x177078u) { return; }
    ctx->pc = 0x177078u;
    // 0x177078: 0x82020001
    ctx->pc = 0x177078u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x17707c: 0x1051fffc
    ctx->pc = 0x17707Cu;
    {
        const bool branch_taken_0x17707c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 17));
        if (branch_taken_0x17707c) {
            ctx->pc = 0x177070u;
            goto label_177070;
        }
    }
    ctx->pc = 0x177084u;
label_177084:
    // 0x177084: 0xc05db6a
    ctx->pc = 0x177084u;
    SET_GPR_U32(ctx, 31, 0x17708Cu);
    ctx->pc = 0x177088u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->pc = 0x176DA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        dtx_destroy_rmt_0x176da8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17708Cu; }
        else if (ctx->pc != 0x17708Cu) { ctx->pc = 0x17708Cu; }
    }
    if (ctx->pc != 0x17708Cu) { return; }
    ctx->pc = 0x17708Cu;
    // 0x17708c: 0x200202d
    ctx->pc = 0x17708cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177090: 0xdfbf0020
    ctx->pc = 0x177090u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x177094: 0xdfb10010
    ctx->pc = 0x177094u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x177098: 0x282d
    ctx->pc = 0x177098u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17709c: 0xdfb00000
    ctx->pc = 0x17709cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1770a0: 0x24060044
    ctx->pc = 0x1770a0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 68));
    // 0x1770a4: 0x8050cfe
    ctx->pc = 0x1770A4u;
    ctx->pc = 0x1770A8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x1433F8u;
    memset_0x1433f8(rdram, ctx, runtime); return;
    ctx->pc = 0x1770ACu;
}
