#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudSetMasterVol
// Address: 0x219028 - 0x219068
void AudSetMasterVol_0x219028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x219028u;

    // 0x219028: 0x27bdffe0
    ctx->pc = 0x219028u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21902c: 0xffbf0010
    ctx->pc = 0x21902cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x219030: 0x3c03003c
    ctx->pc = 0x219030u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x219034: 0x8c62d578
    ctx->pc = 0x219034u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294956408)));
    // 0x219038: 0x10820008
    ctx->pc = 0x219038u;
    {
        const bool branch_taken_0x219038 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x21903Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x219038) {
            ctx->pc = 0x21905Cu;
            goto label_21905c;
        }
    }
    ctx->pc = 0x219040u;
    // 0x219040: 0x8c42fe2c
    ctx->pc = 0x219040u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294966828)));
    // 0x219044: 0x14400006
    ctx->pc = 0x219044u;
    {
        const bool branch_taken_0x219044 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x219048u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x219044) {
            ctx->pc = 0x219060u;
            goto label_219060;
        }
    }
    ctx->pc = 0x21904Cu;
    // 0x21904c: 0xc08816e
    ctx->pc = 0x21904Cu;
    SET_GPR_U32(ctx, 31, 0x219054u);
    ctx->pc = 0x219050u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294956408), GPR_U32(ctx, 4));
    ctx->pc = 0x2205B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioGameVolume_0x2205b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219054u; }
    }
    if (ctx->pc != 0x219054u) { return; }
    ctx->pc = 0x219054u;
    // 0x219054: 0x3c020032
    ctx->pc = 0x219054u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x219058: 0xac40fe30
    ctx->pc = 0x219058u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294966832), GPR_U32(ctx, 0));
label_21905c:
    // 0x21905c: 0xdfbf0010
    ctx->pc = 0x21905cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_219060:
    // 0x219060: 0x3e00008
    ctx->pc = 0x219060u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x219064u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21905Cu: goto label_21905c;
            case 0x219060u: goto label_219060;
            default: break;
        }
        return;
    }
    ctx->pc = 0x219068u;
}
